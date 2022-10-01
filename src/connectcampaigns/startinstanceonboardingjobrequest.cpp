// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startinstanceonboardingjobrequest.h"
#include "startinstanceonboardingjobrequest_p.h"
#include "startinstanceonboardingjobresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StartInstanceOnboardingJobRequest
 * \brief The StartInstanceOnboardingJobRequest class provides an interface for ConnectCampaigns StartInstanceOnboardingJob requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::startInstanceOnboardingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartInstanceOnboardingJobRequest::StartInstanceOnboardingJobRequest(const StartInstanceOnboardingJobRequest &other)
    : ConnectCampaignsRequest(new StartInstanceOnboardingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartInstanceOnboardingJobRequest object.
 */
StartInstanceOnboardingJobRequest::StartInstanceOnboardingJobRequest()
    : ConnectCampaignsRequest(new StartInstanceOnboardingJobRequestPrivate(ConnectCampaignsRequest::StartInstanceOnboardingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartInstanceOnboardingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartInstanceOnboardingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartInstanceOnboardingJobRequest::response(QNetworkReply * const reply) const
{
    return new StartInstanceOnboardingJobResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::StartInstanceOnboardingJobRequestPrivate
 * \brief The StartInstanceOnboardingJobRequestPrivate class provides private implementation for StartInstanceOnboardingJobRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StartInstanceOnboardingJobRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
StartInstanceOnboardingJobRequestPrivate::StartInstanceOnboardingJobRequestPrivate(
    const ConnectCampaignsRequest::Action action, StartInstanceOnboardingJobRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartInstanceOnboardingJobRequest
 * class' copy constructor.
 */
StartInstanceOnboardingJobRequestPrivate::StartInstanceOnboardingJobRequestPrivate(
    const StartInstanceOnboardingJobRequestPrivate &other, StartInstanceOnboardingJobRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
