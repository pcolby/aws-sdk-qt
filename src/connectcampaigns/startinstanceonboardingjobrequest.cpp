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
