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

#include "createsubscriptiondefinitionrequest.h"
#include "createsubscriptiondefinitionrequest_p.h"
#include "createsubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionRequest
 *
 * \brief The CreateSubscriptionDefinitionRequest class encapsulates Greengrass CreateSubscriptionDefinition requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createSubscriptionDefinition
 */

/*!
 * @brief  Constructs a new CreateSubscriptionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSubscriptionDefinitionRequest::CreateSubscriptionDefinitionRequest(const CreateSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new CreateSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateSubscriptionDefinitionRequest object.
 */
CreateSubscriptionDefinitionRequest::CreateSubscriptionDefinitionRequest()
    : GreengrassRequest(new CreateSubscriptionDefinitionRequestPrivate(GreengrassRequest::CreateSubscriptionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateSubscriptionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSubscriptionDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateSubscriptionDefinitionRequestPrivate
 *
 * @brief  Private implementation for CreateSubscriptionDefinitionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateSubscriptionDefinitionRequest instance.
 */
CreateSubscriptionDefinitionRequestPrivate::CreateSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSubscriptionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSubscriptionDefinitionRequest instance.
 */
CreateSubscriptionDefinitionRequestPrivate::CreateSubscriptionDefinitionRequestPrivate(
    const CreateSubscriptionDefinitionRequestPrivate &other, CreateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
