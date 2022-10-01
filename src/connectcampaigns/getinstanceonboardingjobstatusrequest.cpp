/*
    Copyright 2013-2021 Paul Colby

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

#include "getinstanceonboardingjobstatusrequest.h"
#include "getinstanceonboardingjobstatusrequest_p.h"
#include "getinstanceonboardingjobstatusresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetInstanceOnboardingJobStatusRequest
 * \brief The GetInstanceOnboardingJobStatusRequest class provides an interface for ConnectCampaigns GetInstanceOnboardingJobStatus requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getInstanceOnboardingJobStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstanceOnboardingJobStatusRequest::GetInstanceOnboardingJobStatusRequest(const GetInstanceOnboardingJobStatusRequest &other)
    : ConnectCampaignsRequest(new GetInstanceOnboardingJobStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstanceOnboardingJobStatusRequest object.
 */
GetInstanceOnboardingJobStatusRequest::GetInstanceOnboardingJobStatusRequest()
    : ConnectCampaignsRequest(new GetInstanceOnboardingJobStatusRequestPrivate(ConnectCampaignsRequest::GetInstanceOnboardingJobStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstanceOnboardingJobStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstanceOnboardingJobStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstanceOnboardingJobStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceOnboardingJobStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::GetInstanceOnboardingJobStatusRequestPrivate
 * \brief The GetInstanceOnboardingJobStatusRequestPrivate class provides private implementation for GetInstanceOnboardingJobStatusRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetInstanceOnboardingJobStatusRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
GetInstanceOnboardingJobStatusRequestPrivate::GetInstanceOnboardingJobStatusRequestPrivate(
    const ConnectCampaignsRequest::Action action, GetInstanceOnboardingJobStatusRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceOnboardingJobStatusRequest
 * class' copy constructor.
 */
GetInstanceOnboardingJobStatusRequestPrivate::GetInstanceOnboardingJobStatusRequestPrivate(
    const GetInstanceOnboardingJobStatusRequestPrivate &other, GetInstanceOnboardingJobStatusRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
