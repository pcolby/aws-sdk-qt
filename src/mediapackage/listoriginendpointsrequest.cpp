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

#include "listoriginendpointsrequest.h"
#include "listoriginendpointsrequest_p.h"
#include "listoriginendpointsresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/**
 * @class  ListOriginEndpointsRequest
 *
 * @brief  Implements MediaPackage ListOriginEndpoints requests.
 *
 * @see    MediaPackageClient::listOriginEndpoints
 */

/**
 * @brief  Constructs a new ListOriginEndpointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOriginEndpointsRequest::ListOriginEndpointsRequest(const ListOriginEndpointsRequest &other)
    : MediaPackageRequest(new ListOriginEndpointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOriginEndpointsRequest object.
 */
ListOriginEndpointsRequest::ListOriginEndpointsRequest()
    : MediaPackageRequest(new ListOriginEndpointsRequestPrivate(MediaPackageRequest::ListOriginEndpointsAction, this))
{

}

bool ListOriginEndpointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOriginEndpointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOriginEndpointsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOriginEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListOriginEndpointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOriginEndpointsRequestPrivate
 *
 * @brief  Private implementation for ListOriginEndpointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOriginEndpointsRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public ListOriginEndpointsRequest instance.
 */
ListOriginEndpointsRequestPrivate::ListOriginEndpointsRequestPrivate(
    const MediaPackageRequest::Action action, ListOriginEndpointsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOriginEndpointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOriginEndpointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOriginEndpointsRequest instance.
 */
ListOriginEndpointsRequestPrivate::ListOriginEndpointsRequestPrivate(
    const ListOriginEndpointsRequestPrivate &other, ListOriginEndpointsRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
