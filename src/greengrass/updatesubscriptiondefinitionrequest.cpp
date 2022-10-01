// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubscriptiondefinitionrequest.h"
#include "updatesubscriptiondefinitionrequest_p.h"
#include "updatesubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateSubscriptionDefinitionRequest
 * \brief The UpdateSubscriptionDefinitionRequest class provides an interface for Greengrass UpdateSubscriptionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateSubscriptionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSubscriptionDefinitionRequest::UpdateSubscriptionDefinitionRequest(const UpdateSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new UpdateSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSubscriptionDefinitionRequest object.
 */
UpdateSubscriptionDefinitionRequest::UpdateSubscriptionDefinitionRequest()
    : GreengrassRequest(new UpdateSubscriptionDefinitionRequestPrivate(GreengrassRequest::UpdateSubscriptionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSubscriptionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateSubscriptionDefinitionRequestPrivate
 * \brief The UpdateSubscriptionDefinitionRequestPrivate class provides private implementation for UpdateSubscriptionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateSubscriptionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriptionDefinitionRequest
 * class' copy constructor.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const UpdateSubscriptionDefinitionRequestPrivate &other, UpdateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
