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

#include "listiproutesrequest.h"
#include "listiproutesrequest_p.h"
#include "listiproutesresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  ListIpRoutesRequest
 *
 * @brief  Implements DirectoryService ListIpRoutes requests.
 *
 * @see    DirectoryServiceClient::listIpRoutes
 */

/**
 * @brief  Constructs a new ListIpRoutesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIpRoutesRequest::ListIpRoutesRequest(const ListIpRoutesRequest &other)
    : DirectoryServiceRequest(new ListIpRoutesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIpRoutesRequest object.
 */
ListIpRoutesRequest::ListIpRoutesRequest()
    : DirectoryServiceRequest(new ListIpRoutesRequestPrivate(DirectoryServiceRequest::ListIpRoutesAction, this))
{

}

bool ListIpRoutesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIpRoutesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIpRoutesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * ListIpRoutesRequest::response(QNetworkReply * const reply) const
{
    return new ListIpRoutesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIpRoutesRequestPrivate
 *
 * @brief  Private implementation for ListIpRoutesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIpRoutesRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public ListIpRoutesRequest instance.
 */
ListIpRoutesRequestPrivate::ListIpRoutesRequestPrivate(
    const DirectoryServiceRequest::Action action, ListIpRoutesRequest * const q)
    : ListIpRoutesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIpRoutesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIpRoutesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIpRoutesRequest instance.
 */
ListIpRoutesRequestPrivate::ListIpRoutesRequestPrivate(
    const ListIpRoutesRequestPrivate &other, ListIpRoutesRequest * const q)
    : ListIpRoutesPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
