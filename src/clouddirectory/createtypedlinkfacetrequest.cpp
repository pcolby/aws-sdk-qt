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

#include "createtypedlinkfacetrequest.h"
#include "createtypedlinkfacetrequest_p.h"
#include "createtypedlinkfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateTypedLinkFacetRequest
 *
 * @brief  Implements CloudDirectory CreateTypedLinkFacet requests.
 *
 * @see    CloudDirectoryClient::createTypedLinkFacet
 */

/**
 * @brief  Constructs a new CreateTypedLinkFacetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTypedLinkFacetRequest::CreateTypedLinkFacetRequest(const CreateTypedLinkFacetRequest &other)
    : CloudDirectoryRequest(new CreateTypedLinkFacetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTypedLinkFacetRequest object.
 */
CreateTypedLinkFacetRequest::CreateTypedLinkFacetRequest()
    : CloudDirectoryRequest(new CreateTypedLinkFacetRequestPrivate(CloudDirectoryRequest::CreateTypedLinkFacetAction, this))
{

}

bool CreateTypedLinkFacetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTypedLinkFacetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTypedLinkFacetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * CreateTypedLinkFacetRequest::response(QNetworkReply * const reply) const
{
    return new CreateTypedLinkFacetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTypedLinkFacetRequestPrivate
 *
 * @brief  Private implementation for CreateTypedLinkFacetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTypedLinkFacetRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public CreateTypedLinkFacetRequest instance.
 */
CreateTypedLinkFacetRequestPrivate::CreateTypedLinkFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateTypedLinkFacetRequest * const q)
    : CreateTypedLinkFacetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTypedLinkFacetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTypedLinkFacetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTypedLinkFacetRequest instance.
 */
CreateTypedLinkFacetRequestPrivate::CreateTypedLinkFacetRequestPrivate(
    const CreateTypedLinkFacetRequestPrivate &other, CreateTypedLinkFacetRequest * const q)
    : CreateTypedLinkFacetPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
