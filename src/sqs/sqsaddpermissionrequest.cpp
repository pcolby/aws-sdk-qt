/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsaddpermissionrequest.h"
#include "sqsaddpermissionrequest_p.h"
#include "sqsaddpermissionresponse.h"
#include "sqsrequest_p.h"

#include <QUrlQuery>

#define AWS_ACCOUNT_ID_MEMBER_N QLatin1String("AWSAccountId.member.%1")
#define ACTION_NAME_MEMBER_N    QLatin1String("ActionName.member.%1")
#define LABEL                   QLatin1String("Label")
#define QUEUE_URL               QLatin1String("QueueUrl")

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsAddPermissionRequest
 *
 * @brief  @todo
 */

SqsAddPermissionRequest::SqsAddPermissionRequest(
    const QString &label, const PermissionsMap &permissions, const QString &queueUrl)
    : SqsRequest(new SqsAddPermissionRequestPrivate(SqsRequest::AddPermissionAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}

SqsAddPermissionRequest::SqsAddPermissionRequest(const SqsAddPermissionRequest &other)
    : SqsRequest(new SqsAddPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsAddPermissionRequest object.
 */
SqsAddPermissionRequest::SqsAddPermissionRequest()
    : SqsRequest(SqsRequest::AddPermissionAction)
{

}

bool SqsAddPermissionRequest::isValid() const
{
    return ((isValidQueueName(label())) &&
            (!permissions().isEmpty()) &&
            (!queueUrl().isEmpty()));
}

QString SqsAddPermissionRequest::label() const
{
    return parameter(LABEL).toString();
}

SqsAddPermissionRequest::PermissibleActions SqsAddPermissionRequest::permissions(
    const QString &accountId) const
{
    return permissions().value(accountId);
}

SqsAddPermissionRequest::PermissionsMap SqsAddPermissionRequest::permissions() const
{
    Q_D(const SqsAddPermissionRequest);
    return d->permissions;
}

QString SqsAddPermissionRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

void SqsAddPermissionRequest::setLabel(const QString &label)
{
    setParameter(LABEL, label);
}

void SqsAddPermissionRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

void SqsAddPermissionRequest::setPermission(
    const QString &accountId, const PermissibleAction action, const bool permitted)
{
    PermissibleActions actions = permissions(accountId);
    if (permitted) {
        actions |= action;
    } else {
        actions ^= action;
    }
    setPermissions(accountId, actions);
}

void SqsAddPermissionRequest::setPermissions(
    const QString &accountId, const PermissibleActions &actions)
{
    Q_D(SqsAddPermissionRequest);
    d->permissions.insert(accountId, actions);
}

void SqsAddPermissionRequest::setPermissions(const PermissionsMap &permissions)
{
    Q_D(SqsAddPermissionRequest);
    d->permissions = permissions;
}

/**
 * @brief  Construct an SqsAddPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsAddPermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsAddPermissionRequest::response(QNetworkReply * const reply) const
{
    return new SqsAddPermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsAddPermissionRequestPrivate
 *
 * @brief  Private implementation for SqsAddPermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsAddPermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsAddPermissionRequest instance.
 */
SqsAddPermissionRequestPrivate::SqsAddPermissionRequestPrivate(
    const SqsRequest::Action action, SqsAddPermissionRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

SqsAddPermissionRequestPrivate::SqsAddPermissionRequestPrivate(
    const SqsAddPermissionRequestPrivate &other, SqsAddPermissionRequest * const q)
    : SqsRequestPrivate(other, q), permissions(other.permissions)
{

}

QUrlQuery SqsAddPermissionRequestPrivate::urlQuery() const
{
    QUrlQuery query = SqsRequestPrivate::urlQuery();
    int index = 1; // SQS attributes are 1-indexed.
    for (SqsAddPermissionRequest::PermissionsMap::const_iterator iter = permissions.cbegin();
         iter != permissions.cend(); ++iter)
    {
        SqsAddPermissionRequest::PermissibleActions actions = iter.value();
        if (!actions) continue;

        // Skip over any manually-inserted (via SqsRequest::setParameter) entries.
        while ((query.hasQueryItem(QString(AWS_ACCOUNT_ID_MEMBER_N).arg(index)))||
               (query.hasQueryItem(QString(   ACTION_NAME_MEMBER_N).arg(index)))) {
            ++index;
        }

        // Add the specified permissions.
        #define IF_ACTION_SET_PARAMETER(action) \
            if (actions.testFlag(SqsAddPermissionRequest::action##Action)) { \
                query.addQueryItem( \
                    QString(AWS_ACCOUNT_ID_MEMBER_N).arg(index), iter.key()); \
                query.addQueryItem( \
                    QString(ACTION_NAME_MEMBER_N).arg(index), \
                    toString(static_cast<SqsRequest::Action>(SqsAddPermissionRequest::action##Action))); \
                actions &= ~SqsAddPermissionRequest::action##Action; \
            }
        IF_ACTION_SET_PARAMETER(SendMessage)
        IF_ACTION_SET_PARAMETER(ReceiveMessage)
        IF_ACTION_SET_PARAMETER(DeleteMessage)
        IF_ACTION_SET_PARAMETER(ChangeMessageVisibility)
        IF_ACTION_SET_PARAMETER(GetQueueAttributes)
        IF_ACTION_SET_PARAMETER(GetQueueUrl)
        #undef IF_ACTION_SET_PARAMETER
        Q_ASSERT(actions); // Sanity check.
    }
    return query;
}

QTAWS_END_NAMESPACE
