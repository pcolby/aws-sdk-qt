// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
