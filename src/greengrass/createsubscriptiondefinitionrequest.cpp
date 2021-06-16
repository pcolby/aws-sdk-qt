/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createsubscriptiondefinitionrequest.h"
#include "createsubscriptiondefinitionrequest_p.h"
#include "createsubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionRequest
 * \brief The CreateSubscriptionDefinitionRequest class provides an interface for Greengrass CreateSubscriptionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createSubscriptionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSubscriptionDefinitionRequest::CreateSubscriptionDefinitionRequest(const CreateSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new CreateSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSubscriptionDefinitionRequest object.
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
 * Returns a CreateSubscriptionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionRequestPrivate
 * \brief The CreateSubscriptionDefinitionRequestPrivate class provides private implementation for CreateSubscriptionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateSubscriptionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateSubscriptionDefinitionRequestPrivate::CreateSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSubscriptionDefinitionRequest
 * class' copy constructor.
 */
CreateSubscriptionDefinitionRequestPrivate::CreateSubscriptionDefinitionRequestPrivate(
    const CreateSubscriptionDefinitionRequestPrivate &other, CreateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
