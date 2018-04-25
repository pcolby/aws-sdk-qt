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

#include "listdevicedefinitionsrequest.h"
#include "listdevicedefinitionsrequest_p.h"
#include "listdevicedefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsRequest
 * \brief The ListDeviceDefinitionsRequest class provides an interface for Greengrass ListDeviceDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listDeviceDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceDefinitionsRequest::ListDeviceDefinitionsRequest(const ListDeviceDefinitionsRequest &other)
    : GreengrassRequest(new ListDeviceDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceDefinitionsRequest object.
 */
ListDeviceDefinitionsRequest::ListDeviceDefinitionsRequest()
    : GreengrassRequest(new ListDeviceDefinitionsRequestPrivate(GreengrassRequest::ListDeviceDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsRequestPrivate
 * \brief The ListDeviceDefinitionsRequestPrivate class provides private implementation for ListDeviceDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeviceDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListDeviceDefinitionsRequestPrivate::ListDeviceDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListDeviceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceDefinitionsRequest
 * class' copy constructor.
 */
ListDeviceDefinitionsRequestPrivate::ListDeviceDefinitionsRequestPrivate(
    const ListDeviceDefinitionsRequestPrivate &other, ListDeviceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
