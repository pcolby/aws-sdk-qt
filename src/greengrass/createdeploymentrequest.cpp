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

#include "createdeploymentrequest.h"
#include "createdeploymentrequest_p.h"
#include "createdeploymentresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateDeploymentRequest
 *
 * @brief  Implements Greengrass CreateDeployment requests.
 *
 * @see    GreengrassClient::createDeployment
 */

/**
 * @brief  Constructs a new CreateDeploymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDeploymentRequest::CreateDeploymentRequest(const CreateDeploymentRequest &other)
    : GreengrassRequest(new CreateDeploymentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDeploymentRequest object.
 */
CreateDeploymentRequest::CreateDeploymentRequest()
    : GreengrassRequest(new CreateDeploymentRequestPrivate(GreengrassRequest::CreateDeploymentAction, this))
{

}

bool CreateDeploymentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDeploymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDeploymentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeploymentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDeploymentRequestPrivate
 *
 * @brief  Private implementation for CreateDeploymentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateDeploymentRequest instance.
 */
CreateDeploymentRequestPrivate::CreateDeploymentRequestPrivate(
    const GreengrassRequest::Action action, CreateDeploymentRequest * const q)
    : CreateDeploymentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDeploymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDeploymentRequest instance.
 */
CreateDeploymentRequestPrivate::CreateDeploymentRequestPrivate(
    const CreateDeploymentRequestPrivate &other, CreateDeploymentRequest * const q)
    : CreateDeploymentPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
