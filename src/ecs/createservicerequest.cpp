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

#include "createservicerequest.h"
#include "createservicerequest_p.h"
#include "createserviceresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  CreateServiceRequest
 *
 * @brief  Implements ECS CreateService requests.
 *
 * @see    ECSClient::createService
 */

/**
 * @brief  Constructs a new CreateServiceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateServiceRequest::CreateServiceRequest(const CreateServiceRequest &other)
    : ECSRequest(new CreateServiceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateServiceRequest object.
 */
CreateServiceRequest::CreateServiceRequest()
    : ECSRequest(new CreateServiceRequestPrivate(ECSRequest::CreateServiceAction, this))
{

}

bool CreateServiceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateServiceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateServiceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * CreateServiceRequest::response(QNetworkReply * const reply) const
{
    return new CreateServiceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateServiceRequestPrivate
 *
 * @brief  Private implementation for CreateServiceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public CreateServiceRequest instance.
 */
CreateServiceRequestPrivate::CreateServiceRequestPrivate(
    const ECSRequest::Action action, CreateServiceRequest * const q)
    : CreateServicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateServiceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateServiceRequest instance.
 */
CreateServiceRequestPrivate::CreateServiceRequestPrivate(
    const CreateServiceRequestPrivate &other, CreateServiceRequest * const q)
    : CreateServicePrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
