// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
