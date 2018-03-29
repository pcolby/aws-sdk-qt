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

#include "deleteresourcedatasyncrequest.h"
#include "deleteresourcedatasyncrequest_p.h"
#include "deleteresourcedatasyncresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DeleteResourceDataSyncRequest
 *
 * @brief  Implements SSM DeleteResourceDataSync requests.
 *
 * @see    SSMClient::deleteResourceDataSync
 */

/**
 * @brief  Constructs a new DeleteResourceDataSyncRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteResourceDataSyncRequest::DeleteResourceDataSyncRequest(const DeleteResourceDataSyncRequest &other)
    : SSMRequest(new DeleteResourceDataSyncRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteResourceDataSyncRequest object.
 */
DeleteResourceDataSyncRequest::DeleteResourceDataSyncRequest()
    : SSMRequest(new DeleteResourceDataSyncRequestPrivate(SSMRequest::DeleteResourceDataSyncAction, this))
{

}

bool DeleteResourceDataSyncRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteResourceDataSyncResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteResourceDataSyncResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceDataSyncRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceDataSyncResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteResourceDataSyncRequestPrivate
 *
 * @brief  Private implementation for DeleteResourceDataSyncRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceDataSyncRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeleteResourceDataSyncRequest instance.
 */
DeleteResourceDataSyncRequestPrivate::DeleteResourceDataSyncRequestPrivate(
    const SSMRequest::Action action, DeleteResourceDataSyncRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceDataSyncRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceDataSyncRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteResourceDataSyncRequest instance.
 */
DeleteResourceDataSyncRequestPrivate::DeleteResourceDataSyncRequestPrivate(
    const DeleteResourceDataSyncRequestPrivate &other, DeleteResourceDataSyncRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
