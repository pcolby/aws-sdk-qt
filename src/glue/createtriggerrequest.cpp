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

#include "createtriggerrequest.h"
#include "createtriggerrequest_p.h"
#include "createtriggerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  CreateTriggerRequest
 *
 * @brief  Implements Glue CreateTrigger requests.
 *
 * @see    GlueClient::createTrigger
 */

/**
 * @brief  Constructs a new CreateTriggerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTriggerRequest::CreateTriggerRequest(const CreateTriggerRequest &other)
    : GlueRequest(new CreateTriggerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTriggerRequest object.
 */
CreateTriggerRequest::CreateTriggerRequest()
    : GlueRequest(new CreateTriggerRequestPrivate(GlueRequest::CreateTriggerAction, this))
{

}

bool CreateTriggerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTriggerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTriggerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * CreateTriggerRequest::response(QNetworkReply * const reply) const
{
    return new CreateTriggerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTriggerRequestPrivate
 *
 * @brief  Private implementation for CreateTriggerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTriggerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreateTriggerRequest instance.
 */
CreateTriggerRequestPrivate::CreateTriggerRequestPrivate(
    const GlueRequest::Action action, CreateTriggerRequest * const q)
    : CreateTriggerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTriggerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTriggerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTriggerRequest instance.
 */
CreateTriggerRequestPrivate::CreateTriggerRequestPrivate(
    const CreateTriggerRequestPrivate &other, CreateTriggerRequest * const q)
    : CreateTriggerPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
