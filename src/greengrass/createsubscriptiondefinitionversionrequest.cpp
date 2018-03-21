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

#include "createsubscriptiondefinitionversionrequest.h"
#include "createsubscriptiondefinitionversionrequest_p.h"
#include "createsubscriptiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateSubscriptionDefinitionVersionRequest
 *
 * @brief  Implements Greengrass CreateSubscriptionDefinitionVersion requests.
 *
 * @see    GreengrassClient::createSubscriptionDefinitionVersion
 */

/**
 * @brief  Constructs a new CreateSubscriptionDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubscriptionDefinitionVersionResponse::CreateSubscriptionDefinitionVersionResponse(

/**
 * @brief  Constructs a new CreateSubscriptionDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSubscriptionDefinitionVersionRequest::CreateSubscriptionDefinitionVersionRequest(const CreateSubscriptionDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateSubscriptionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSubscriptionDefinitionVersionRequest object.
 */
CreateSubscriptionDefinitionVersionRequest::CreateSubscriptionDefinitionVersionRequest()
    : GreengrassRequest(new CreateSubscriptionDefinitionVersionRequestPrivate(GreengrassRequest::CreateSubscriptionDefinitionVersionAction, this))
{

}

bool CreateSubscriptionDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSubscriptionDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSubscriptionDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateSubscriptionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubscriptionDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSubscriptionDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for CreateSubscriptionDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateSubscriptionDefinitionVersionRequest instance.
 */
CreateSubscriptionDefinitionVersionRequestPrivate::CreateSubscriptionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateSubscriptionDefinitionVersionRequest * const q)
    : CreateSubscriptionDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSubscriptionDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSubscriptionDefinitionVersionRequest instance.
 */
CreateSubscriptionDefinitionVersionRequestPrivate::CreateSubscriptionDefinitionVersionRequestPrivate(
    const CreateSubscriptionDefinitionVersionRequestPrivate &other, CreateSubscriptionDefinitionVersionRequest * const q)
    : CreateSubscriptionDefinitionVersionPrivate(other, q)
{

}
