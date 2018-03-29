/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletenotificationsubscriptionrequest.h"
#include "deletenotificationsubscriptionrequest_p.h"
#include "deletenotificationsubscriptionresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DeleteNotificationSubscriptionRequest
 *
 * @brief  Implements WorkDocs DeleteNotificationSubscription requests.
 *
 * @see    WorkDocsClient::deleteNotificationSubscription
 */

/**
 * @brief  Constructs a new DeleteNotificationSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNotificationSubscriptionRequest::DeleteNotificationSubscriptionRequest(const DeleteNotificationSubscriptionRequest &other)
    : WorkDocsRequest(new DeleteNotificationSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNotificationSubscriptionRequest object.
 */
DeleteNotificationSubscriptionRequest::DeleteNotificationSubscriptionRequest()
    : WorkDocsRequest(new DeleteNotificationSubscriptionRequestPrivate(WorkDocsRequest::DeleteNotificationSubscriptionAction, this))
{

}

bool DeleteNotificationSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNotificationSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNotificationSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DeleteNotificationSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotificationSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNotificationSubscriptionRequestPrivate
 *
 * @brief  Private implementation for DeleteNotificationSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationSubscriptionRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DeleteNotificationSubscriptionRequest instance.
 */
DeleteNotificationSubscriptionRequestPrivate::DeleteNotificationSubscriptionRequestPrivate(
    const WorkDocsRequest::Action action, DeleteNotificationSubscriptionRequest * const q)
    : DeleteNotificationSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotificationSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNotificationSubscriptionRequest instance.
 */
DeleteNotificationSubscriptionRequestPrivate::DeleteNotificationSubscriptionRequestPrivate(
    const DeleteNotificationSubscriptionRequestPrivate &other, DeleteNotificationSubscriptionRequest * const q)
    : DeleteNotificationSubscriptionPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
