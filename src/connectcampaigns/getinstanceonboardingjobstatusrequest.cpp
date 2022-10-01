// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
