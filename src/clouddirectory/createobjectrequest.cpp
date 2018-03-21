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

#include "createobjectrequest.h"
#include "createobjectrequest_p.h"
#include "createobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateObjectRequest
 *
 * @brief  Implements CloudDirectory CreateObject requests.
 *
 * @see    CloudDirectoryClient::createObject
 */

/**
 * @brief  Constructs a new CreateObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateObjectResponse::CreateObjectResponse(

/**
 * @brief  Constructs a new CreateObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateObjectRequest::CreateObjectRequest(const CreateObjectRequest &other)
    : CloudDirectoryRequest(new CreateObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateObjectRequest object.
 */
CreateObjectRequest::CreateObjectRequest()
    : CloudDirectoryRequest(new CreateObjectRequestPrivate(CloudDirectoryRequest::CreateObjectAction, this))
{

}

bool CreateObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * CreateObjectRequest::response(QNetworkReply * const reply) const
{
    return new CreateObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateObjectRequestPrivate
 *
 * @brief  Private implementation for CreateObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateObjectRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public CreateObjectRequest instance.
 */
CreateObjectRequestPrivate::CreateObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateObjectRequest * const q)
    : CreateObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateObjectRequest instance.
 */
CreateObjectRequestPrivate::CreateObjectRequestPrivate(
    const CreateObjectRequestPrivate &other, CreateObjectRequest * const q)
    : CreateObjectPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
