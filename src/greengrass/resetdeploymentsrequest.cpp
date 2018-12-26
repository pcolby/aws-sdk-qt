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

#include "resetdeploymentsrequest.h"
#include "resetdeploymentsrequest_p.h"
#include "resetdeploymentsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ResetDeploymentsRequest
 * \brief The ResetDeploymentsRequest class provides an interface for Greengrass ResetDeployments requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::resetDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
ResetDeploymentsRequest::ResetDeploymentsRequest(const ResetDeploymentsRequest &other)
    : GreengrassRequest(new ResetDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetDeploymentsRequest object.
 */
ResetDeploymentsRequest::ResetDeploymentsRequest()
    : GreengrassRequest(new ResetDeploymentsRequestPrivate(GreengrassRequest::ResetDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ResetDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ResetDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ResetDeploymentsRequestPrivate
 * \brief The ResetDeploymentsRequestPrivate class provides private implementation for ResetDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ResetDeploymentsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ResetDeploymentsRequestPrivate::ResetDeploymentsRequestPrivate(
    const GreengrassRequest::Action action, ResetDeploymentsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetDeploymentsRequest
 * class' copy constructor.
 */
ResetDeploymentsRequestPrivate::ResetDeploymentsRequestPrivate(
    const ResetDeploymentsRequestPrivate &other, ResetDeploymentsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
