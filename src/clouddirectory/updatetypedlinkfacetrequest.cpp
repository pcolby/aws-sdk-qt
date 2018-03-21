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

#include "updatetypedlinkfacetrequest.h"
#include "updatetypedlinkfacetrequest_p.h"
#include "updatetypedlinkfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  UpdateTypedLinkFacetRequest
 *
 * @brief  Implements CloudDirectory UpdateTypedLinkFacet requests.
 *
 * @see    CloudDirectoryClient::updateTypedLinkFacet
 */

/**
 * @brief  Constructs a new UpdateTypedLinkFacetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTypedLinkFacetRequest::UpdateTypedLinkFacetRequest(const UpdateTypedLinkFacetRequest &other)
    : CloudDirectoryRequest(new UpdateTypedLinkFacetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTypedLinkFacetRequest object.
 */
UpdateTypedLinkFacetRequest::UpdateTypedLinkFacetRequest()
    : CloudDirectoryRequest(new UpdateTypedLinkFacetRequestPrivate(CloudDirectoryRequest::UpdateTypedLinkFacetAction, this))
{

}

bool UpdateTypedLinkFacetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTypedLinkFacetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTypedLinkFacetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * UpdateTypedLinkFacetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTypedLinkFacetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTypedLinkFacetRequestPrivate
 *
 * @brief  Private implementation for UpdateTypedLinkFacetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTypedLinkFacetRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public UpdateTypedLinkFacetRequest instance.
 */
UpdateTypedLinkFacetRequestPrivate::UpdateTypedLinkFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, UpdateTypedLinkFacetRequest * const q)
    : UpdateTypedLinkFacetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTypedLinkFacetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTypedLinkFacetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTypedLinkFacetRequest instance.
 */
UpdateTypedLinkFacetRequestPrivate::UpdateTypedLinkFacetRequestPrivate(
    const UpdateTypedLinkFacetRequestPrivate &other, UpdateTypedLinkFacetRequest * const q)
    : UpdateTypedLinkFacetPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
