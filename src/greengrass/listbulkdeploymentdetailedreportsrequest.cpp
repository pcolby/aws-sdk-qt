/*
    Copyright 2013-2020 Paul Colby

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

#include "listbulkdeploymentdetailedreportsrequest.h"
#include "listbulkdeploymentdetailedreportsrequest_p.h"
#include "listbulkdeploymentdetailedreportsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentDetailedReportsRequest
 * \brief The ListBulkDeploymentDetailedReportsRequest class provides an interface for Greengrass ListBulkDeploymentDetailedReports requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listBulkDeploymentDetailedReports
 */

/*!
 * Constructs a copy of \a other.
 */
ListBulkDeploymentDetailedReportsRequest::ListBulkDeploymentDetailedReportsRequest(const ListBulkDeploymentDetailedReportsRequest &other)
    : GreengrassRequest(new ListBulkDeploymentDetailedReportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBulkDeploymentDetailedReportsRequest object.
 */
ListBulkDeploymentDetailedReportsRequest::ListBulkDeploymentDetailedReportsRequest()
    : GreengrassRequest(new ListBulkDeploymentDetailedReportsRequestPrivate(GreengrassRequest::ListBulkDeploymentDetailedReportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBulkDeploymentDetailedReportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBulkDeploymentDetailedReportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBulkDeploymentDetailedReportsRequest::response(QNetworkReply * const reply) const
{
    return new ListBulkDeploymentDetailedReportsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListBulkDeploymentDetailedReportsRequestPrivate
 * \brief The ListBulkDeploymentDetailedReportsRequestPrivate class provides private implementation for ListBulkDeploymentDetailedReportsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListBulkDeploymentDetailedReportsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListBulkDeploymentDetailedReportsRequestPrivate::ListBulkDeploymentDetailedReportsRequestPrivate(
    const GreengrassRequest::Action action, ListBulkDeploymentDetailedReportsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBulkDeploymentDetailedReportsRequest
 * class' copy constructor.
 */
ListBulkDeploymentDetailedReportsRequestPrivate::ListBulkDeploymentDetailedReportsRequestPrivate(
    const ListBulkDeploymentDetailedReportsRequestPrivate &other, ListBulkDeploymentDetailedReportsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
