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

#include "getbulkdeploymentstatusrequest.h"
#include "getbulkdeploymentstatusrequest_p.h"
#include "getbulkdeploymentstatusresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetBulkDeploymentStatusRequest
 * \brief The GetBulkDeploymentStatusRequest class provides an interface for Greengrass GetBulkDeploymentStatus requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getBulkDeploymentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetBulkDeploymentStatusRequest::GetBulkDeploymentStatusRequest(const GetBulkDeploymentStatusRequest &other)
    : GreengrassRequest(new GetBulkDeploymentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBulkDeploymentStatusRequest object.
 */
GetBulkDeploymentStatusRequest::GetBulkDeploymentStatusRequest()
    : GreengrassRequest(new GetBulkDeploymentStatusRequestPrivate(GreengrassRequest::GetBulkDeploymentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetBulkDeploymentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBulkDeploymentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBulkDeploymentStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetBulkDeploymentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetBulkDeploymentStatusRequestPrivate
 * \brief The GetBulkDeploymentStatusRequestPrivate class provides private implementation for GetBulkDeploymentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetBulkDeploymentStatusRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetBulkDeploymentStatusRequestPrivate::GetBulkDeploymentStatusRequestPrivate(
    const GreengrassRequest::Action action, GetBulkDeploymentStatusRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBulkDeploymentStatusRequest
 * class' copy constructor.
 */
GetBulkDeploymentStatusRequestPrivate::GetBulkDeploymentStatusRequestPrivate(
    const GetBulkDeploymentStatusRequestPrivate &other, GetBulkDeploymentStatusRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
