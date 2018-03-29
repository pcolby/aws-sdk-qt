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

#include "listincomingtypedlinksrequest.h"
#include "listincomingtypedlinksrequest_p.h"
#include "listincomingtypedlinksresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListIncomingTypedLinksRequest
 *
 * @brief  Implements CloudDirectory ListIncomingTypedLinks requests.
 *
 * @see    CloudDirectoryClient::listIncomingTypedLinks
 */

/**
 * @brief  Constructs a new ListIncomingTypedLinksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIncomingTypedLinksRequest::ListIncomingTypedLinksRequest(const ListIncomingTypedLinksRequest &other)
    : CloudDirectoryRequest(new ListIncomingTypedLinksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIncomingTypedLinksRequest object.
 */
ListIncomingTypedLinksRequest::ListIncomingTypedLinksRequest()
    : CloudDirectoryRequest(new ListIncomingTypedLinksRequestPrivate(CloudDirectoryRequest::ListIncomingTypedLinksAction, this))
{

}

bool ListIncomingTypedLinksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIncomingTypedLinksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIncomingTypedLinksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListIncomingTypedLinksRequest::response(QNetworkReply * const reply) const
{
    return new ListIncomingTypedLinksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIncomingTypedLinksRequestPrivate
 *
 * @brief  Private implementation for ListIncomingTypedLinksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIncomingTypedLinksRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListIncomingTypedLinksRequest instance.
 */
ListIncomingTypedLinksRequestPrivate::ListIncomingTypedLinksRequestPrivate(
    const CloudDirectoryRequest::Action action, ListIncomingTypedLinksRequest * const q)
    : ListIncomingTypedLinksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIncomingTypedLinksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIncomingTypedLinksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIncomingTypedLinksRequest instance.
 */
ListIncomingTypedLinksRequestPrivate::ListIncomingTypedLinksRequestPrivate(
    const ListIncomingTypedLinksRequestPrivate &other, ListIncomingTypedLinksRequest * const q)
    : ListIncomingTypedLinksPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
