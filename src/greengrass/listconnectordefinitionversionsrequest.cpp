// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectordefinitionversionsrequest.h"
#include "listconnectordefinitionversionsrequest_p.h"
#include "listconnectordefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsRequest
 * \brief The ListConnectorDefinitionVersionsRequest class provides an interface for Greengrass ListConnectorDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listConnectorDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListConnectorDefinitionVersionsRequest::ListConnectorDefinitionVersionsRequest(const ListConnectorDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListConnectorDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConnectorDefinitionVersionsRequest object.
 */
ListConnectorDefinitionVersionsRequest::ListConnectorDefinitionVersionsRequest()
    : GreengrassRequest(new ListConnectorDefinitionVersionsRequestPrivate(GreengrassRequest::ListConnectorDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConnectorDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConnectorDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConnectorDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConnectorDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsRequestPrivate
 * \brief The ListConnectorDefinitionVersionsRequestPrivate class provides private implementation for ListConnectorDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListConnectorDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListConnectorDefinitionVersionsRequestPrivate::ListConnectorDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListConnectorDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConnectorDefinitionVersionsRequest
 * class' copy constructor.
 */
ListConnectorDefinitionVersionsRequestPrivate::ListConnectorDefinitionVersionsRequestPrivate(
    const ListConnectorDefinitionVersionsRequestPrivate &other, ListConnectorDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
