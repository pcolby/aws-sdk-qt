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

#include "updatefacetrequest.h"
#include "updatefacetrequest_p.h"
#include "updatefacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  UpdateFacetRequest
 *
 * @brief  Implements CloudDirectory UpdateFacet requests.
 *
 * @see    CloudDirectoryClient::updateFacet
 */

/**
 * @brief  Constructs a new UpdateFacetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFacetRequest::UpdateFacetRequest(const UpdateFacetRequest &other)
    : CloudDirectoryRequest(new UpdateFacetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFacetRequest object.
 */
UpdateFacetRequest::UpdateFacetRequest()
    : CloudDirectoryRequest(new UpdateFacetRequestPrivate(CloudDirectoryRequest::UpdateFacetAction, this))
{

}

bool UpdateFacetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFacetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFacetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * UpdateFacetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFacetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFacetRequestPrivate
 *
 * @brief  Private implementation for UpdateFacetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFacetRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public UpdateFacetRequest instance.
 */
UpdateFacetRequestPrivate::UpdateFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, UpdateFacetRequest * const q)
    : UpdateFacetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFacetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFacetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFacetRequest instance.
 */
UpdateFacetRequestPrivate::UpdateFacetRequestPrivate(
    const UpdateFacetRequestPrivate &other, UpdateFacetRequest * const q)
    : UpdateFacetPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
