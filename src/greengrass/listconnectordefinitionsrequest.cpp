// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectordefinitionsrequest.h"
#include "listconnectordefinitionsrequest_p.h"
#include "listconnectordefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionsRequest
 * \brief The ListConnectorDefinitionsRequest class provides an interface for Greengrass ListConnectorDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listConnectorDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListConnectorDefinitionsRequest::ListConnectorDefinitionsRequest(const ListConnectorDefinitionsRequest &other)
    : GreengrassRequest(new ListConnectorDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConnectorDefinitionsRequest object.
 */
ListConnectorDefinitionsRequest::ListConnectorDefinitionsRequest()
    : GreengrassRequest(new ListConnectorDefinitionsRequestPrivate(GreengrassRequest::ListConnectorDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConnectorDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConnectorDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConnectorDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConnectorDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionsRequestPrivate
 * \brief The ListConnectorDefinitionsRequestPrivate class provides private implementation for ListConnectorDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListConnectorDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListConnectorDefinitionsRequestPrivate::ListConnectorDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListConnectorDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConnectorDefinitionsRequest
 * class' copy constructor.
 */
ListConnectorDefinitionsRequestPrivate::ListConnectorDefinitionsRequestPrivate(
    const ListConnectorDefinitionsRequestPrivate &other, ListConnectorDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
