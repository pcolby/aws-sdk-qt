// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbulkdeploymentrequest.h"
#include "startbulkdeploymentrequest_p.h"
#include "startbulkdeploymentresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::StartBulkDeploymentRequest
 * \brief The StartBulkDeploymentRequest class provides an interface for Greengrass StartBulkDeployment requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::startBulkDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
StartBulkDeploymentRequest::StartBulkDeploymentRequest(const StartBulkDeploymentRequest &other)
    : GreengrassRequest(new StartBulkDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBulkDeploymentRequest object.
 */
StartBulkDeploymentRequest::StartBulkDeploymentRequest()
    : GreengrassRequest(new StartBulkDeploymentRequestPrivate(GreengrassRequest::StartBulkDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool StartBulkDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBulkDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBulkDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StartBulkDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::StartBulkDeploymentRequestPrivate
 * \brief The StartBulkDeploymentRequestPrivate class provides private implementation for StartBulkDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a StartBulkDeploymentRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
StartBulkDeploymentRequestPrivate::StartBulkDeploymentRequestPrivate(
    const GreengrassRequest::Action action, StartBulkDeploymentRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBulkDeploymentRequest
 * class' copy constructor.
 */
StartBulkDeploymentRequestPrivate::StartBulkDeploymentRequestPrivate(
    const StartBulkDeploymentRequestPrivate &other, StartBulkDeploymentRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
