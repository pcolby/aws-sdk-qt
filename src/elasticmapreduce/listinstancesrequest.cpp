/*
    Copyright 2013-2018 Paul Colby

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

#include "listinstancesrequest.h"
#include "listinstancesrequest_p.h"
#include "listinstancesresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  ListInstancesRequest
 *
 * @brief  Implements EMR ListInstances requests.
 *
 * @see    EMRClient::listInstances
 */

/**
 * @brief  Constructs a new ListInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInstancesResponse::ListInstancesResponse(

/**
 * @brief  Constructs a new ListInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInstancesRequest::ListInstancesRequest(const ListInstancesRequest &other)
    : EMRRequest(new ListInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInstancesRequest object.
 */
ListInstancesRequest::ListInstancesRequest()
    : EMRRequest(new ListInstancesRequestPrivate(EMRRequest::ListInstancesAction, this))
{

}

bool ListInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * ListInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInstancesRequestPrivate
 *
 * @brief  Private implementation for ListInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstancesRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListInstancesRequest instance.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const EMRRequest::Action action, ListInstancesRequest * const q)
    : ListInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInstancesRequest instance.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const ListInstancesRequestPrivate &other, ListInstancesRequest * const q)
    : ListInstancesPrivate(other, q)
{

}
