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

#include "removefacetfromobjectrequest.h"
#include "removefacetfromobjectrequest_p.h"
#include "removefacetfromobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  RemoveFacetFromObjectRequest
 *
 * @brief  Implements CloudDirectory RemoveFacetFromObject requests.
 *
 * @see    CloudDirectoryClient::removeFacetFromObject
 */

/**
 * @brief  Constructs a new RemoveFacetFromObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveFacetFromObjectResponse::RemoveFacetFromObjectResponse(

/**
 * @brief  Constructs a new RemoveFacetFromObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveFacetFromObjectRequest::RemoveFacetFromObjectRequest(const RemoveFacetFromObjectRequest &other)
    : CloudDirectoryRequest(new RemoveFacetFromObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveFacetFromObjectRequest object.
 */
RemoveFacetFromObjectRequest::RemoveFacetFromObjectRequest()
    : CloudDirectoryRequest(new RemoveFacetFromObjectRequestPrivate(CloudDirectoryRequest::RemoveFacetFromObjectAction, this))
{

}

bool RemoveFacetFromObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveFacetFromObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveFacetFromObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * RemoveFacetFromObjectRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFacetFromObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveFacetFromObjectRequestPrivate
 *
 * @brief  Private implementation for RemoveFacetFromObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveFacetFromObjectRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public RemoveFacetFromObjectRequest instance.
 */
RemoveFacetFromObjectRequestPrivate::RemoveFacetFromObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, RemoveFacetFromObjectRequest * const q)
    : RemoveFacetFromObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveFacetFromObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveFacetFromObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveFacetFromObjectRequest instance.
 */
RemoveFacetFromObjectRequestPrivate::RemoveFacetFromObjectRequestPrivate(
    const RemoveFacetFromObjectRequestPrivate &other, RemoveFacetFromObjectRequest * const q)
    : RemoveFacetFromObjectPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
