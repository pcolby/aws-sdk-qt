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

#include "deregisterjobdefinitionrequest.h"
#include "deregisterjobdefinitionrequest_p.h"
#include "deregisterjobdefinitionresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  DeregisterJobDefinitionRequest
 *
 * @brief  Implements Batch DeregisterJobDefinition requests.
 *
 * @see    BatchClient::deregisterJobDefinition
 */

/**
 * @brief  Constructs a new DeregisterJobDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterJobDefinitionResponse::DeregisterJobDefinitionResponse(

/**
 * @brief  Constructs a new DeregisterJobDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterJobDefinitionRequest::DeregisterJobDefinitionRequest(const DeregisterJobDefinitionRequest &other)
    : BatchRequest(new DeregisterJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterJobDefinitionRequest object.
 */
DeregisterJobDefinitionRequest::DeregisterJobDefinitionRequest()
    : BatchRequest(new DeregisterJobDefinitionRequestPrivate(BatchRequest::DeregisterJobDefinitionAction, this))
{

}

bool DeregisterJobDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterJobDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterJobDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * DeregisterJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterJobDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterJobDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeregisterJobDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterJobDefinitionRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DeregisterJobDefinitionRequest instance.
 */
DeregisterJobDefinitionRequestPrivate::DeregisterJobDefinitionRequestPrivate(
    const BatchRequest::Action action, DeregisterJobDefinitionRequest * const q)
    : DeregisterJobDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterJobDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterJobDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterJobDefinitionRequest instance.
 */
DeregisterJobDefinitionRequestPrivate::DeregisterJobDefinitionRequestPrivate(
    const DeregisterJobDefinitionRequestPrivate &other, DeregisterJobDefinitionRequest * const q)
    : DeregisterJobDefinitionPrivate(other, q)
{

}

} // namespace Batch
} // namespace AWS
