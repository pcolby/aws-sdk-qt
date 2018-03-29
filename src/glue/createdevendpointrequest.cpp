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

#include "createdevendpointrequest.h"
#include "createdevendpointrequest_p.h"
#include "createdevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  CreateDevEndpointRequest
 *
 * @brief  Implements Glue CreateDevEndpoint requests.
 *
 * @see    GlueClient::createDevEndpoint
 */

/**
 * @brief  Constructs a new CreateDevEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDevEndpointRequest::CreateDevEndpointRequest(const CreateDevEndpointRequest &other)
    : GlueRequest(new CreateDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDevEndpointRequest object.
 */
CreateDevEndpointRequest::CreateDevEndpointRequest()
    : GlueRequest(new CreateDevEndpointRequestPrivate(GlueRequest::CreateDevEndpointAction, this))
{

}

bool CreateDevEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDevEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDevEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateDevEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDevEndpointRequestPrivate
 *
 * @brief  Private implementation for CreateDevEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDevEndpointRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreateDevEndpointRequest instance.
 */
CreateDevEndpointRequestPrivate::CreateDevEndpointRequestPrivate(
    const GlueRequest::Action action, CreateDevEndpointRequest * const q)
    : CreateDevEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDevEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDevEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDevEndpointRequest instance.
 */
CreateDevEndpointRequestPrivate::CreateDevEndpointRequestPrivate(
    const CreateDevEndpointRequestPrivate &other, CreateDevEndpointRequest * const q)
    : CreateDevEndpointPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
