// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsubscriptiondefinitionrequest.h"
#include "getsubscriptiondefinitionrequest_p.h"
#include "getsubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionRequest
 * \brief The GetSubscriptionDefinitionRequest class provides an interface for Greengrass GetSubscriptionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getSubscriptionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetSubscriptionDefinitionRequest::GetSubscriptionDefinitionRequest(const GetSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new GetSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSubscriptionDefinitionRequest object.
 */
GetSubscriptionDefinitionRequest::GetSubscriptionDefinitionRequest()
    : GreengrassRequest(new GetSubscriptionDefinitionRequestPrivate(GreengrassRequest::GetSubscriptionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSubscriptionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionRequestPrivate
 * \brief The GetSubscriptionDefinitionRequestPrivate class provides private implementation for GetSubscriptionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetSubscriptionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetSubscriptionDefinitionRequestPrivate::GetSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionDefinitionRequest
 * class' copy constructor.
 */
GetSubscriptionDefinitionRequestPrivate::GetSubscriptionDefinitionRequestPrivate(
    const GetSubscriptionDefinitionRequestPrivate &other, GetSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
