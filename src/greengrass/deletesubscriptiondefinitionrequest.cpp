// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesubscriptiondefinitionrequest.h"
#include "deletesubscriptiondefinitionrequest_p.h"
#include "deletesubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteSubscriptionDefinitionRequest
 * \brief The DeleteSubscriptionDefinitionRequest class provides an interface for Greengrass DeleteSubscriptionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteSubscriptionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSubscriptionDefinitionRequest::DeleteSubscriptionDefinitionRequest(const DeleteSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new DeleteSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSubscriptionDefinitionRequest object.
 */
DeleteSubscriptionDefinitionRequest::DeleteSubscriptionDefinitionRequest()
    : GreengrassRequest(new DeleteSubscriptionDefinitionRequestPrivate(GreengrassRequest::DeleteSubscriptionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSubscriptionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteSubscriptionDefinitionRequestPrivate
 * \brief The DeleteSubscriptionDefinitionRequestPrivate class provides private implementation for DeleteSubscriptionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteSubscriptionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteSubscriptionDefinitionRequestPrivate::DeleteSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubscriptionDefinitionRequest
 * class' copy constructor.
 */
DeleteSubscriptionDefinitionRequestPrivate::DeleteSubscriptionDefinitionRequestPrivate(
    const DeleteSubscriptionDefinitionRequestPrivate &other, DeleteSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
