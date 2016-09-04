/*
    Copyright 2013-2016 Paul Colby

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
 * @brief  Implements SQS AddPermission requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_AddPermission.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsAddPermissionRequest.
 *
 * @param  label        Unique identifier for the permission(s) to be set.
 * @param  permissions  Permissions to grant.
 * @param  queueUrl     URL of the queue \a permissions are to be granted on.
 */
SqsAddPermissionRequest::SqsAddPermissionRequest(
    const QString &label, const PermissionsMap &permissions, const QString &queueUrl)
    : SqsRequest(new SqsAddPermissionRequestPrivate(SqsRequest::AddPermissionAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}

/**
 * @brief  Constructs a new SqsAddPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsAddPermissionRequest::SqsAddPermissionRequest(const SqsAddPermissionRequest &other)
    : SqsRequest(new SqsAddPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsAddPermissionRequest object.
 */
SqsAddPermissionRequest::SqsAddPermissionRequest()
    : SqsRequest(new SqsAddPermissionRequestPrivate(SqsRequest::AddPermissionAction, this))
{

}

bool SqsAddPermissionRequest::isValid() const
{
    return ((isValidQueueName(label())) &&
            (!permissions().isEmpty()) &&
            (!queueUrl().isEmpty()));
}

/**
 * @brief  Get the label for this AddPermission request.
 *
 * @return The label for this AddPermission request.
 */
QString SqsAddPermissionRequest::label() const
{
    return parameter(LABEL).toString();
}

/**
 * @brief  Get the permissions to be set for \a accountId.
 *
 * @param  accountId  The principal to get permissions for.
 *
 * @return A set of action flags that will be allowed for \a accountId.
 */
SqsAddPermissionRequest::PermissibleActions SqsAddPermissionRequest::permissions(
    const QString &accountId) const
{
    return permissions().value(accountId);
}

/**
 * @brief  Get all of the permissions to be set in the request.
 *
 * @return A map of all permissions to be set.
 */
SqsAddPermissionRequest::PermissionsMap SqsAddPermissionRequest::permissions() const
{
    Q_D(const SqsAddPermissionRequest);
    return d->permissions;
}

/**
 * @brief  Get the URL of the Amazon SQS queue to take action on.
 *
 * @return The queue URL, or an empty string if not set.
 */
QString SqsAddPermissionRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

/**
 * @brief  Set the unique label to use for this group of permissions.
 *
 * @param  label  Unique label to use.
 */
void SqsAddPermissionRequest::setLabel(const QString &label)
{
    setParameter(LABEL, label);
}

/**
 * @brief  Set the URL of the queue to add permissions to.
 *
 * @param  queueUrl  SQS queue URL.
 */
void SqsAddPermissionRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

/**
 * @brief  Set a permissions to be added for a given principal.
 *
 * Note, this adds or removes the \a action permission for \a accountId, within
 * the context of this request only.  That is, if the principal \a accountId
 * already has the \a action permission granted on the remote SQS service, this
 * request will not be modifying that existing permission; see
 * SqsRemovePermissionRequest for that.
 *
 * @param  accountId  Principal to set permssions for.
 * @param  action     Action to permit or not.
 * @param  permitted  Whether \a action should be permitted or not for \a accountId.
 */
void SqsAddPermissionRequest::setPermission(
    const QString &accountId, const PermissibleAction action, const bool permitted)
{
    PermissibleActions actions = permissions(accountId);
    if (permitted) {
        actions |= action;
    } else {
        actions &= ~action;
    }
    setPermissions(accountId, actions);
}

/**
 * @brief  Set the permissions to be added for a given principal.
 *
 * Note, this \e sets the permissions for \a accountId, replacing any existing
 * permissions - but only within the context of this request.  That is, if the
 * principal \a accountId has other permissions alredy set on the remote SQS
 * service, this request will have no affect on those (or rather will be in
 * addition to those).
 *
 * @param  accountId  Principal to set permssions for.
 * @param  actions    Set of actions to permit for \a accountId.
 */
void SqsAddPermissionRequest::setPermissions(
    const QString &accountId, const PermissibleActions &actions)
{
    Q_D(SqsAddPermissionRequest);
    d->permissions.insert(accountId, actions);
}

/**
 * @brief  Set all of the permissions this request will add to SQS.
 *
 * \a permissions is a map of principals (accountIds) to set of permission flags.
 *
 * @param  permissions  Complete set of permissions to set.
 *
 * @see    permissions
 */
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
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsAddPermissionRequest instance.
 */
SqsAddPermissionRequestPrivate::SqsAddPermissionRequestPrivate(
    const SqsRequest::Action action, SqsAddPermissionRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsAddPermissionResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsAddPermissionResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsAddPermissionRequest instance.
 */
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

        // Add the specified permissions.
        #define IF_ACTION_SET_PARAMETER(action) \
            if (actions.testFlag(SqsAddPermissionRequest::action##Action)) { \
                while ((query.hasQueryItem(QString(AWS_ACCOUNT_ID_MEMBER_N).arg(index)))|| \
                       (query.hasQueryItem(QString(   ACTION_NAME_MEMBER_N).arg(index)))) { \
                    ++index; \
                } \
                query.addQueryItem( \
                    QString(AWS_ACCOUNT_ID_MEMBER_N).arg(index), iter.key()); \
                query.addQueryItem( \
                    QString(ACTION_NAME_MEMBER_N).arg(index), \
                    toString(static_cast<SqsRequest::Action>(SqsAddPermissionRequest::action##Action))); \
                actions &= ~SqsAddPermissionRequest::action##Action; \
                ++index; \
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
