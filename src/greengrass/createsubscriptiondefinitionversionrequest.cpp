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

#include "createsubscriptiondefinitionversionrequest.h"
#include "createsubscriptiondefinitionversionrequest_p.h"
#include "createsubscriptiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionVersionRequest
 * \brief The CreateSubscriptionDefinitionVersionRequest class provides an interface for Greengrass CreateSubscriptionDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createSubscriptionDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSubscriptionDefinitionVersionRequest::CreateSubscriptionDefinitionVersionRequest(const CreateSubscriptionDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateSubscriptionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSubscriptionDefinitionVersionRequest object.
 */
CreateSubscriptionDefinitionVersionRequest::CreateSubscriptionDefinitionVersionRequest()
    : GreengrassRequest(new CreateSubscriptionDefinitionVersionRequestPrivate(GreengrassRequest::CreateSubscriptionDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSubscriptionDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSubscriptionDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSubscriptionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubscriptionDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionVersionRequestPrivate
 * \brief The CreateSubscriptionDefinitionVersionRequestPrivate class provides private implementation for CreateSubscriptionDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 *
 * Constructs a CreateSubscriptionDefinitionVersionRequestPrivate object for Greengrass \a action with,
 * public implementation \a q.
 */
CreateSubscriptionDefinitionVersionRequestPrivate::CreateSubscriptionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateSubscriptionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSubscriptionDefinitionVersionRequest
 * class' copy constructor.
 */
CreateSubscriptionDefinitionVersionRequestPrivate::CreateSubscriptionDefinitionVersionRequestPrivate(
    const CreateSubscriptionDefinitionVersionRequestPrivate &other, CreateSubscriptionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
