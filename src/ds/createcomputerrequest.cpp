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

#include "createcomputerrequest.h"
#include "createcomputerrequest_p.h"
#include "createcomputerresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  CreateComputerRequest
 *
 * @brief  Implements DirectoryService CreateComputer requests.
 *
 * @see    DirectoryServiceClient::createComputer
 */

/**
 * @brief  Constructs a new CreateComputerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateComputerRequest::CreateComputerRequest(const CreateComputerRequest &other)
    : DirectoryServiceRequest(new CreateComputerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateComputerRequest object.
 */
CreateComputerRequest::CreateComputerRequest()
    : DirectoryServiceRequest(new CreateComputerRequestPrivate(DirectoryServiceRequest::CreateComputerAction, this))
{

}

bool CreateComputerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateComputerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateComputerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * CreateComputerRequest::response(QNetworkReply * const reply) const
{
    return new CreateComputerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateComputerRequestPrivate
 *
 * @brief  Private implementation for CreateComputerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateComputerRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public CreateComputerRequest instance.
 */
CreateComputerRequestPrivate::CreateComputerRequestPrivate(
    const DirectoryServiceRequest::Action action, CreateComputerRequest * const q)
    : CreateComputerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateComputerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateComputerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateComputerRequest instance.
 */
CreateComputerRequestPrivate::CreateComputerRequestPrivate(
    const CreateComputerRequestPrivate &other, CreateComputerRequest * const q)
    : CreateComputerPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
