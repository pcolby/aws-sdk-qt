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

#include "deletefacetrequest.h"
#include "deletefacetrequest_p.h"
#include "deletefacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DeleteFacetRequest
 *
 * @brief  Implements CloudDirectory DeleteFacet requests.
 *
 * @see    CloudDirectoryClient::deleteFacet
 */

/**
 * @brief  Constructs a new DeleteFacetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFacetRequest::DeleteFacetRequest(const DeleteFacetRequest &other)
    : CloudDirectoryRequest(new DeleteFacetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFacetRequest object.
 */
DeleteFacetRequest::DeleteFacetRequest()
    : CloudDirectoryRequest(new DeleteFacetRequestPrivate(CloudDirectoryRequest::DeleteFacetAction, this))
{

}

bool DeleteFacetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFacetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFacetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * DeleteFacetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFacetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFacetRequestPrivate
 *
 * @brief  Private implementation for DeleteFacetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFacetRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DeleteFacetRequest instance.
 */
DeleteFacetRequestPrivate::DeleteFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteFacetRequest * const q)
    : DeleteFacetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFacetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFacetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFacetRequest instance.
 */
DeleteFacetRequestPrivate::DeleteFacetRequestPrivate(
    const DeleteFacetRequestPrivate &other, DeleteFacetRequest * const q)
    : DeleteFacetPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
