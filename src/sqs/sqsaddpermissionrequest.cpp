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
#include "sqsaddpermissionresponse.h"
#include "sqsrequest_p.h"

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
    const QString &queueUrl, const QString &label,
    const QVariantMap &permissions)
    : SqsRequest(SqsRequest::AddPermissionSqsAction)
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}

SqsAddPermissionRequest::SqsAddPermissionRequest(const SqsAddPermissionRequest &other)
    : SqsRequest(other)
{
    setLabel(other.label());
    setQueueUrl(other.queueUrl());
    setPermissions(other.permissions());
}

/**
 * @brief  Constructs a new SqsAddPermissionRequest object.
 */
SqsAddPermissionRequest::SqsAddPermissionRequest()
    : SqsRequest(SqsRequest::AddPermissionSqsAction)
{

}

bool SqsAddPermissionRequest::isValid() const
{
    /// @todo  Validate the permissions entries?
    return (isValidQueueName(label())) &&
            (!queueUrl().isEmpty()) &&
            (!permissions().isEmpty());
}

QString SqsAddPermissionRequest::label() const
{
    return parameter(LABEL).toString();
}

QVariantMap SqsAddPermissionRequest::permissions() const
{
    /// @todo
    return QVariantMap();
}

QString SqsAddPermissionRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

void SqsAddPermissionRequest::addPermission(const QString &accountId,
                                            const PermissibleAction action)
{
    Q_UNUSED(accountId)
    Q_UNUSED(action)
    /// @todo
}

void SqsAddPermissionRequest::addPermission(const QString &accountId, const QString &actionName)
{
    Q_UNUSED(accountId)
    Q_UNUSED(actionName)
    /// @todo
}

void SqsAddPermissionRequest::setLabel(const QString &label)
{
    setParameter(LABEL, label);
}

void SqsAddPermissionRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

void SqsAddPermissionRequest::setPermission(const QString &accountId,
                                            const PermissibleAction action)
{
    const QString actionName = (action == AllPermissibleActions)
        ? QString::fromLatin1("*")
        : SqsRequestPrivate::toString(static_cast<SqsRequest::Action>(action));
    setPermission(accountId, actionName);
}

void SqsAddPermissionRequest::setPermission(const QString &accountId, const QString &actionName)
{
    Q_UNUSED(accountId)
    Q_UNUSED(actionName)
    /// @todo
}

void SqsAddPermissionRequest::setPermissions(const QVariantMap &permissions)
{
    Q_UNUSED(permissions)
    /// @todo
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

QTAWS_END_NAMESPACE
