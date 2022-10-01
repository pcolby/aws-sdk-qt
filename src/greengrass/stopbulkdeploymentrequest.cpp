// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
