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

#include "createdirectoryrequest.h"
#include "createdirectoryrequest_p.h"
#include "createdirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  CreateDirectoryRequest
 *
 * @brief  Implements CloudDirectory CreateDirectory requests.
 *
 * @see    CloudDirectoryClient::createDirectory
 */

/**
 * @brief  Constructs a new CreateDirectoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDirectoryRequest::CreateDirectoryRequest(const CreateDirectoryRequest &other)
    : CloudDirectoryRequest(new CreateDirectoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDirectoryRequest object.
 */
CreateDirectoryRequest::CreateDirectoryRequest()
    : CloudDirectoryRequest(new CreateDirectoryRequestPrivate(CloudDirectoryRequest::CreateDirectoryAction, this))
{

}

bool CreateDirectoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDirectoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDirectoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * CreateDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDirectoryRequestPrivate
 *
 * @brief  Private implementation for CreateDirectoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public CreateDirectoryRequest instance.
 */
CreateDirectoryRequestPrivate::CreateDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateDirectoryRequest * const q)
    : CreateDirectoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDirectoryRequest instance.
 */
CreateDirectoryRequestPrivate::CreateDirectoryRequestPrivate(
    const CreateDirectoryRequestPrivate &other, CreateDirectoryRequest * const q)
    : CreateDirectoryPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
