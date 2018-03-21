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

#include "deletetypedlinkfacetrequest.h"
#include "deletetypedlinkfacetrequest_p.h"
#include "deletetypedlinkfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DeleteTypedLinkFacetRequest
 *
 * @brief  Implements CloudDirectory DeleteTypedLinkFacet requests.
 *
 * @see    CloudDirectoryClient::deleteTypedLinkFacet
 */

/**
 * @brief  Constructs a new DeleteTypedLinkFacetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTypedLinkFacetResponse::DeleteTypedLinkFacetResponse(

/**
 * @brief  Constructs a new DeleteTypedLinkFacetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTypedLinkFacetRequest::DeleteTypedLinkFacetRequest(const DeleteTypedLinkFacetRequest &other)
    : CloudDirectoryRequest(new DeleteTypedLinkFacetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTypedLinkFacetRequest object.
 */
DeleteTypedLinkFacetRequest::DeleteTypedLinkFacetRequest()
    : CloudDirectoryRequest(new DeleteTypedLinkFacetRequestPrivate(CloudDirectoryRequest::DeleteTypedLinkFacetAction, this))
{

}

bool DeleteTypedLinkFacetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTypedLinkFacetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTypedLinkFacetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * DeleteTypedLinkFacetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTypedLinkFacetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTypedLinkFacetRequestPrivate
 *
 * @brief  Private implementation for DeleteTypedLinkFacetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTypedLinkFacetRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DeleteTypedLinkFacetRequest instance.
 */
DeleteTypedLinkFacetRequestPrivate::DeleteTypedLinkFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteTypedLinkFacetRequest * const q)
    : DeleteTypedLinkFacetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTypedLinkFacetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTypedLinkFacetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTypedLinkFacetRequest instance.
 */
DeleteTypedLinkFacetRequestPrivate::DeleteTypedLinkFacetRequestPrivate(
    const DeleteTypedLinkFacetRequestPrivate &other, DeleteTypedLinkFacetRequest * const q)
    : DeleteTypedLinkFacetPrivate(other, q)
{

}
