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

#include "registerjobdefinitionrequest.h"
#include "registerjobdefinitionrequest_p.h"
#include "registerjobdefinitionresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  RegisterJobDefinitionRequest
 *
 * @brief  Implements Batch RegisterJobDefinition requests.
 *
 * @see    BatchClient::registerJobDefinition
 */

/**
 * @brief  Constructs a new RegisterJobDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterJobDefinitionResponse::RegisterJobDefinitionResponse(

/**
 * @brief  Constructs a new RegisterJobDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterJobDefinitionRequest::RegisterJobDefinitionRequest(const RegisterJobDefinitionRequest &other)
    : BatchRequest(new RegisterJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterJobDefinitionRequest object.
 */
RegisterJobDefinitionRequest::RegisterJobDefinitionRequest()
    : BatchRequest(new RegisterJobDefinitionRequestPrivate(BatchRequest::RegisterJobDefinitionAction, this))
{

}

bool RegisterJobDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterJobDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterJobDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * RegisterJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new RegisterJobDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterJobDefinitionRequestPrivate
 *
 * @brief  Private implementation for RegisterJobDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterJobDefinitionRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public RegisterJobDefinitionRequest instance.
 */
RegisterJobDefinitionRequestPrivate::RegisterJobDefinitionRequestPrivate(
    const BatchRequest::Action action, RegisterJobDefinitionRequest * const q)
    : RegisterJobDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterJobDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterJobDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterJobDefinitionRequest instance.
 */
RegisterJobDefinitionRequestPrivate::RegisterJobDefinitionRequestPrivate(
    const RegisterJobDefinitionRequestPrivate &other, RegisterJobDefinitionRequest * const q)
    : RegisterJobDefinitionPrivate(other, q)
{

}

} // namespace Batch
} // namespace AWS
