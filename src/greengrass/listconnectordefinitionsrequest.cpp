/*
    Copyright 2013-2019 Paul Colby

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
