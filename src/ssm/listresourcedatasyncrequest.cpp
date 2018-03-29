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

#include "listresourcedatasyncrequest.h"
#include "listresourcedatasyncrequest_p.h"
#include "listresourcedatasyncresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  ListResourceDataSyncRequest
 *
 * @brief  Implements SSM ListResourceDataSync requests.
 *
 * @see    SSMClient::listResourceDataSync
 */

/**
 * @brief  Constructs a new ListResourceDataSyncRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourceDataSyncRequest::ListResourceDataSyncRequest(const ListResourceDataSyncRequest &other)
    : SSMRequest(new ListResourceDataSyncRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourceDataSyncRequest object.
 */
ListResourceDataSyncRequest::ListResourceDataSyncRequest()
    : SSMRequest(new ListResourceDataSyncRequestPrivate(SSMRequest::ListResourceDataSyncAction, this))
{

}

bool ListResourceDataSyncRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourceDataSyncResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourceDataSyncResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceDataSyncRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceDataSyncResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourceDataSyncRequestPrivate
 *
 * @brief  Private implementation for ListResourceDataSyncRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDataSyncRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListResourceDataSyncRequest instance.
 */
ListResourceDataSyncRequestPrivate::ListResourceDataSyncRequestPrivate(
    const SSMRequest::Action action, ListResourceDataSyncRequest * const q)
    : ListResourceDataSyncPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDataSyncRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourceDataSyncRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourceDataSyncRequest instance.
 */
ListResourceDataSyncRequestPrivate::ListResourceDataSyncRequestPrivate(
    const ListResourceDataSyncRequestPrivate &other, ListResourceDataSyncRequest * const q)
    : ListResourceDataSyncPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
