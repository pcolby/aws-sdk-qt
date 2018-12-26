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

#include "listloggerdefinitionversionsrequest.h"
#include "listloggerdefinitionversionsrequest_p.h"
#include "listloggerdefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionVersionsRequest
 * \brief The ListLoggerDefinitionVersionsRequest class provides an interface for Greengrass ListLoggerDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listLoggerDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListLoggerDefinitionVersionsRequest::ListLoggerDefinitionVersionsRequest(const ListLoggerDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListLoggerDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLoggerDefinitionVersionsRequest object.
 */
ListLoggerDefinitionVersionsRequest::ListLoggerDefinitionVersionsRequest()
    : GreengrassRequest(new ListLoggerDefinitionVersionsRequestPrivate(GreengrassRequest::ListLoggerDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLoggerDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLoggerDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLoggerDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLoggerDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionVersionsRequestPrivate
 * \brief The ListLoggerDefinitionVersionsRequestPrivate class provides private implementation for ListLoggerDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListLoggerDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListLoggerDefinitionVersionsRequestPrivate::ListLoggerDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListLoggerDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLoggerDefinitionVersionsRequest
 * class' copy constructor.
 */
ListLoggerDefinitionVersionsRequestPrivate::ListLoggerDefinitionVersionsRequestPrivate(
    const ListLoggerDefinitionVersionsRequestPrivate &other, ListLoggerDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
