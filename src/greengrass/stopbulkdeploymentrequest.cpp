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

#include "stopbulkdeploymentrequest.h"
#include "stopbulkdeploymentrequest_p.h"
#include "stopbulkdeploymentresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::StopBulkDeploymentRequest
 * \brief The StopBulkDeploymentRequest class provides an interface for Greengrass StopBulkDeployment requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::stopBulkDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
StopBulkDeploymentRequest::StopBulkDeploymentRequest(const StopBulkDeploymentRequest &other)
    : GreengrassRequest(new StopBulkDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopBulkDeploymentRequest object.
 */
StopBulkDeploymentRequest::StopBulkDeploymentRequest()
    : GreengrassRequest(new StopBulkDeploymentRequestPrivate(GreengrassRequest::StopBulkDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool StopBulkDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopBulkDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopBulkDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StopBulkDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::StopBulkDeploymentRequestPrivate
 * \brief The StopBulkDeploymentRequestPrivate class provides private implementation for StopBulkDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a StopBulkDeploymentRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
StopBulkDeploymentRequestPrivate::StopBulkDeploymentRequestPrivate(
    const GreengrassRequest::Action action, StopBulkDeploymentRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopBulkDeploymentRequest
 * class' copy constructor.
 */
StopBulkDeploymentRequestPrivate::StopBulkDeploymentRequestPrivate(
    const StopBulkDeploymentRequestPrivate &other, StopBulkDeploymentRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
