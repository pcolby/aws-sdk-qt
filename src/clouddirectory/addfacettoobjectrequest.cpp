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

#include "addfacettoobjectrequest.h"
#include "addfacettoobjectrequest_p.h"
#include "addfacettoobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  AddFacetToObjectRequest
 *
 * @brief  Implements CloudDirectory AddFacetToObject requests.
 *
 * @see    CloudDirectoryClient::addFacetToObject
 */

/**
 * @brief  Constructs a new AddFacetToObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddFacetToObjectResponse::AddFacetToObjectResponse(

/**
 * @brief  Constructs a new AddFacetToObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddFacetToObjectRequest::AddFacetToObjectRequest(const AddFacetToObjectRequest &other)
    : CloudDirectoryRequest(new AddFacetToObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddFacetToObjectRequest object.
 */
AddFacetToObjectRequest::AddFacetToObjectRequest()
    : CloudDirectoryRequest(new AddFacetToObjectRequestPrivate(CloudDirectoryRequest::AddFacetToObjectAction, this))
{

}

bool AddFacetToObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddFacetToObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddFacetToObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * AddFacetToObjectRequest::response(QNetworkReply * const reply) const
{
    return new AddFacetToObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddFacetToObjectRequestPrivate
 *
 * @brief  Private implementation for AddFacetToObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddFacetToObjectRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public AddFacetToObjectRequest instance.
 */
AddFacetToObjectRequestPrivate::AddFacetToObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, AddFacetToObjectRequest * const q)
    : AddFacetToObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddFacetToObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddFacetToObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddFacetToObjectRequest instance.
 */
AddFacetToObjectRequestPrivate::AddFacetToObjectRequestPrivate(
    const AddFacetToObjectRequestPrivate &other, AddFacetToObjectRequest * const q)
    : AddFacetToObjectPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
