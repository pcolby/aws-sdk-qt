// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
