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

#include "listloggerdefinitionsrequest.h"
#include "listloggerdefinitionsrequest_p.h"
#include "listloggerdefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionsRequest
 * \brief The ListLoggerDefinitionsRequest class provides an interface for Greengrass ListLoggerDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listLoggerDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest(const ListLoggerDefinitionsRequest &other)
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLoggerDefinitionsRequest object.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest()
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(GreengrassRequest::ListLoggerDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLoggerDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLoggerDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLoggerDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLoggerDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionsRequestPrivate
 * \brief The ListLoggerDefinitionsRequestPrivate class provides private implementation for ListLoggerDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListLoggerDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListLoggerDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLoggerDefinitionsRequest
 * class' copy constructor.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const ListLoggerDefinitionsRequestPrivate &other, ListLoggerDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
