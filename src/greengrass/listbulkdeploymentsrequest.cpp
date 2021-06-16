/*
    Copyright 2013-2021 Paul Colby

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

#include "listbulkdeploymentsrequest.h"
#include "listbulkdeploymentsrequest_p.h"
#include "listbulkdeploymentsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentsRequest
 * \brief The ListBulkDeploymentsRequest class provides an interface for Greengrass ListBulkDeployments requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listBulkDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
ListBulkDeploymentsRequest::ListBulkDeploymentsRequest(const ListBulkDeploymentsRequest &other)
    : GreengrassRequest(new ListBulkDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBulkDeploymentsRequest object.
 */
ListBulkDeploymentsRequest::ListBulkDeploymentsRequest()
    : GreengrassRequest(new ListBulkDeploymentsRequestPrivate(GreengrassRequest::ListBulkDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBulkDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBulkDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBulkDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListBulkDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentsRequestPrivate
 * \brief The ListBulkDeploymentsRequestPrivate class provides private implementation for ListBulkDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListBulkDeploymentsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListBulkDeploymentsRequestPrivate::ListBulkDeploymentsRequestPrivate(
    const GreengrassRequest::Action action, ListBulkDeploymentsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBulkDeploymentsRequest
 * class' copy constructor.
 */
ListBulkDeploymentsRequestPrivate::ListBulkDeploymentsRequestPrivate(
    const ListBulkDeploymentsRequestPrivate &other, ListBulkDeploymentsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
