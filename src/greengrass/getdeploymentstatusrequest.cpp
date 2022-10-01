// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentstatusrequest.h"
#include "getdeploymentstatusrequest_p.h"
#include "getdeploymentstatusresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeploymentStatusRequest
 * \brief The GetDeploymentStatusRequest class provides an interface for Greengrass GetDeploymentStatus requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getDeploymentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentStatusRequest::GetDeploymentStatusRequest(const GetDeploymentStatusRequest &other)
    : GreengrassRequest(new GetDeploymentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentStatusRequest object.
 */
GetDeploymentStatusRequest::GetDeploymentStatusRequest()
    : GreengrassRequest(new GetDeploymentStatusRequestPrivate(GreengrassRequest::GetDeploymentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetDeploymentStatusRequestPrivate
 * \brief The GetDeploymentStatusRequestPrivate class provides private implementation for GetDeploymentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeploymentStatusRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetDeploymentStatusRequestPrivate::GetDeploymentStatusRequestPrivate(
    const GreengrassRequest::Action action, GetDeploymentStatusRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentStatusRequest
 * class' copy constructor.
 */
GetDeploymentStatusRequestPrivate::GetDeploymentStatusRequestPrivate(
    const GetDeploymentStatusRequestPrivate &other, GetDeploymentStatusRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
