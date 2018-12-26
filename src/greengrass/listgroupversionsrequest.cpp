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

#include "listgroupversionsrequest.h"
#include "listgroupversionsrequest_p.h"
#include "listgroupversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupVersionsRequest
 * \brief The ListGroupVersionsRequest class provides an interface for Greengrass ListGroupVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listGroupVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupVersionsRequest::ListGroupVersionsRequest(const ListGroupVersionsRequest &other)
    : GreengrassRequest(new ListGroupVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupVersionsRequest object.
 */
ListGroupVersionsRequest::ListGroupVersionsRequest()
    : GreengrassRequest(new ListGroupVersionsRequestPrivate(GreengrassRequest::ListGroupVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListGroupVersionsRequestPrivate
 * \brief The ListGroupVersionsRequestPrivate class provides private implementation for ListGroupVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListGroupVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListGroupVersionsRequestPrivate::ListGroupVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListGroupVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupVersionsRequest
 * class' copy constructor.
 */
ListGroupVersionsRequestPrivate::ListGroupVersionsRequestPrivate(
    const ListGroupVersionsRequestPrivate &other, ListGroupVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
