// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsubscriptiondefinitionsrequest.h"
#include "listsubscriptiondefinitionsrequest_p.h"
#include "listsubscriptiondefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionsRequest
 * \brief The ListSubscriptionDefinitionsRequest class provides an interface for Greengrass ListSubscriptionDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listSubscriptionDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSubscriptionDefinitionsRequest::ListSubscriptionDefinitionsRequest(const ListSubscriptionDefinitionsRequest &other)
    : GreengrassRequest(new ListSubscriptionDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSubscriptionDefinitionsRequest object.
 */
ListSubscriptionDefinitionsRequest::ListSubscriptionDefinitionsRequest()
    : GreengrassRequest(new ListSubscriptionDefinitionsRequestPrivate(GreengrassRequest::ListSubscriptionDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSubscriptionDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSubscriptionDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSubscriptionDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscriptionDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionsRequestPrivate
 * \brief The ListSubscriptionDefinitionsRequestPrivate class provides private implementation for ListSubscriptionDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListSubscriptionDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListSubscriptionDefinitionsRequestPrivate::ListSubscriptionDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListSubscriptionDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSubscriptionDefinitionsRequest
 * class' copy constructor.
 */
ListSubscriptionDefinitionsRequestPrivate::ListSubscriptionDefinitionsRequestPrivate(
    const ListSubscriptionDefinitionsRequestPrivate &other, ListSubscriptionDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
