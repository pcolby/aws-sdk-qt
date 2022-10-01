// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
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
 * Constructs a CreateSubscriptionDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
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
