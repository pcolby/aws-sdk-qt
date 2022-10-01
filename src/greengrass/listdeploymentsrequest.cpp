// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeploymentsrequest.h"
#include "listdeploymentsrequest_p.h"
#include "listdeploymentsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeploymentsRequest
 * \brief The ListDeploymentsRequest class provides an interface for Greengrass ListDeployments requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeploymentsRequest::ListDeploymentsRequest(const ListDeploymentsRequest &other)
    : GreengrassRequest(new ListDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeploymentsRequest object.
 */
ListDeploymentsRequest::ListDeploymentsRequest()
    : GreengrassRequest(new ListDeploymentsRequestPrivate(GreengrassRequest::ListDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListDeploymentsRequestPrivate
 * \brief The ListDeploymentsRequestPrivate class provides private implementation for ListDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeploymentsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const GreengrassRequest::Action action, ListDeploymentsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentsRequest
 * class' copy constructor.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const ListDeploymentsRequestPrivate &other, ListDeploymentsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
