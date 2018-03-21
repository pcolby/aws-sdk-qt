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

#include "listoutgoingtypedlinksrequest.h"
#include "listoutgoingtypedlinksrequest_p.h"
#include "listoutgoingtypedlinksresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListOutgoingTypedLinksRequest
 *
 * @brief  Implements CloudDirectory ListOutgoingTypedLinks requests.
 *
 * @see    CloudDirectoryClient::listOutgoingTypedLinks
 */

/**
 * @brief  Constructs a new ListOutgoingTypedLinksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOutgoingTypedLinksResponse::ListOutgoingTypedLinksResponse(

/**
 * @brief  Constructs a new ListOutgoingTypedLinksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOutgoingTypedLinksRequest::ListOutgoingTypedLinksRequest(const ListOutgoingTypedLinksRequest &other)
    : CloudDirectoryRequest(new ListOutgoingTypedLinksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOutgoingTypedLinksRequest object.
 */
ListOutgoingTypedLinksRequest::ListOutgoingTypedLinksRequest()
    : CloudDirectoryRequest(new ListOutgoingTypedLinksRequestPrivate(CloudDirectoryRequest::ListOutgoingTypedLinksAction, this))
{

}

bool ListOutgoingTypedLinksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOutgoingTypedLinksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOutgoingTypedLinksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListOutgoingTypedLinksRequest::response(QNetworkReply * const reply) const
{
    return new ListOutgoingTypedLinksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOutgoingTypedLinksRequestPrivate
 *
 * @brief  Private implementation for ListOutgoingTypedLinksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOutgoingTypedLinksRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListOutgoingTypedLinksRequest instance.
 */
ListOutgoingTypedLinksRequestPrivate::ListOutgoingTypedLinksRequestPrivate(
    const CloudDirectoryRequest::Action action, ListOutgoingTypedLinksRequest * const q)
    : ListOutgoingTypedLinksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOutgoingTypedLinksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOutgoingTypedLinksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOutgoingTypedLinksRequest instance.
 */
ListOutgoingTypedLinksRequestPrivate::ListOutgoingTypedLinksRequestPrivate(
    const ListOutgoingTypedLinksRequestPrivate &other, ListOutgoingTypedLinksRequest * const q)
    : ListOutgoingTypedLinksPrivate(other, q)
{

}
