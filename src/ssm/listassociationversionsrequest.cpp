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

#include "listassociationversionsrequest.h"
#include "listassociationversionsrequest_p.h"
#include "listassociationversionsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  ListAssociationVersionsRequest
 *
 * @brief  Implements SSM ListAssociationVersions requests.
 *
 * @see    SSMClient::listAssociationVersions
 */

/**
 * @brief  Constructs a new ListAssociationVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssociationVersionsResponse::ListAssociationVersionsResponse(

/**
 * @brief  Constructs a new ListAssociationVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssociationVersionsRequest::ListAssociationVersionsRequest(const ListAssociationVersionsRequest &other)
    : SSMRequest(new ListAssociationVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAssociationVersionsRequest object.
 */
ListAssociationVersionsRequest::ListAssociationVersionsRequest()
    : SSMRequest(new ListAssociationVersionsRequestPrivate(SSMRequest::ListAssociationVersionsAction, this))
{

}

bool ListAssociationVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAssociationVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssociationVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * ListAssociationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociationVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAssociationVersionsRequestPrivate
 *
 * @brief  Private implementation for ListAssociationVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociationVersionsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListAssociationVersionsRequest instance.
 */
ListAssociationVersionsRequestPrivate::ListAssociationVersionsRequestPrivate(
    const SSMRequest::Action action, ListAssociationVersionsRequest * const q)
    : ListAssociationVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociationVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssociationVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssociationVersionsRequest instance.
 */
ListAssociationVersionsRequestPrivate::ListAssociationVersionsRequestPrivate(
    const ListAssociationVersionsRequestPrivate &other, ListAssociationVersionsRequest * const q)
    : ListAssociationVersionsPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
