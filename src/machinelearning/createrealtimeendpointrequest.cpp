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

#include "createrealtimeendpointrequest.h"
#include "createrealtimeendpointrequest_p.h"
#include "createrealtimeendpointresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/**
 * @class  CreateRealtimeEndpointRequest
 *
 * @brief  Implements MachineLearning CreateRealtimeEndpoint requests.
 *
 * @see    MachineLearningClient::createRealtimeEndpoint
 */

/**
 * @brief  Constructs a new CreateRealtimeEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRealtimeEndpointRequest::CreateRealtimeEndpointRequest(const CreateRealtimeEndpointRequest &other)
    : MachineLearningRequest(new CreateRealtimeEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRealtimeEndpointRequest object.
 */
CreateRealtimeEndpointRequest::CreateRealtimeEndpointRequest()
    : MachineLearningRequest(new CreateRealtimeEndpointRequestPrivate(MachineLearningRequest::CreateRealtimeEndpointAction, this))
{

}

bool CreateRealtimeEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRealtimeEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRealtimeEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * CreateRealtimeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateRealtimeEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRealtimeEndpointRequestPrivate
 *
 * @brief  Private implementation for CreateRealtimeEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRealtimeEndpointRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateRealtimeEndpointRequest instance.
 */
CreateRealtimeEndpointRequestPrivate::CreateRealtimeEndpointRequestPrivate(
    const MachineLearningRequest::Action action, CreateRealtimeEndpointRequest * const q)
    : CreateRealtimeEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRealtimeEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRealtimeEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRealtimeEndpointRequest instance.
 */
CreateRealtimeEndpointRequestPrivate::CreateRealtimeEndpointRequestPrivate(
    const CreateRealtimeEndpointRequestPrivate &other, CreateRealtimeEndpointRequest * const q)
    : CreateRealtimeEndpointPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
