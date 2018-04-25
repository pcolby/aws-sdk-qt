/*
    Copyright 2013-2018 Paul Colby

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

#include "listcoredefinitionversionsrequest.h"
#include "listcoredefinitionversionsrequest_p.h"
#include "listcoredefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsRequest
 * \brief The ListCoreDefinitionVersionsRequest class provides an interface for Greengrass ListCoreDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listCoreDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoreDefinitionVersionsRequest::ListCoreDefinitionVersionsRequest(const ListCoreDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListCoreDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoreDefinitionVersionsRequest object.
 */
ListCoreDefinitionVersionsRequest::ListCoreDefinitionVersionsRequest()
    : GreengrassRequest(new ListCoreDefinitionVersionsRequestPrivate(GreengrassRequest::ListCoreDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoreDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoreDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoreDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCoreDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsRequestPrivate
 * \brief The ListCoreDefinitionVersionsRequestPrivate class provides private implementation for ListCoreDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListCoreDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListCoreDefinitionVersionsRequestPrivate::ListCoreDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListCoreDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoreDefinitionVersionsRequest
 * class' copy constructor.
 */
ListCoreDefinitionVersionsRequestPrivate::ListCoreDefinitionVersionsRequestPrivate(
    const ListCoreDefinitionVersionsRequestPrivate &other, ListCoreDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
