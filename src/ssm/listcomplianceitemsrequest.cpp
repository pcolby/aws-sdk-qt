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

#include "listcomplianceitemsrequest.h"
#include "listcomplianceitemsrequest_p.h"
#include "listcomplianceitemsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  ListComplianceItemsRequest
 *
 * @brief  Implements SSM ListComplianceItems requests.
 *
 * @see    SSMClient::listComplianceItems
 */

/**
 * @brief  Constructs a new ListComplianceItemsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListComplianceItemsResponse::ListComplianceItemsResponse(

/**
 * @brief  Constructs a new ListComplianceItemsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListComplianceItemsRequest::ListComplianceItemsRequest(const ListComplianceItemsRequest &other)
    : SSMRequest(new ListComplianceItemsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListComplianceItemsRequest object.
 */
ListComplianceItemsRequest::ListComplianceItemsRequest()
    : SSMRequest(new ListComplianceItemsRequestPrivate(SSMRequest::ListComplianceItemsAction, this))
{

}

bool ListComplianceItemsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListComplianceItemsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListComplianceItemsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * ListComplianceItemsRequest::response(QNetworkReply * const reply) const
{
    return new ListComplianceItemsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListComplianceItemsRequestPrivate
 *
 * @brief  Private implementation for ListComplianceItemsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListComplianceItemsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListComplianceItemsRequest instance.
 */
ListComplianceItemsRequestPrivate::ListComplianceItemsRequestPrivate(
    const SSMRequest::Action action, ListComplianceItemsRequest * const q)
    : ListComplianceItemsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListComplianceItemsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListComplianceItemsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListComplianceItemsRequest instance.
 */
ListComplianceItemsRequestPrivate::ListComplianceItemsRequestPrivate(
    const ListComplianceItemsRequestPrivate &other, ListComplianceItemsRequest * const q)
    : ListComplianceItemsPrivate(other, q)
{

}
