// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinstanceonboardingjobrequest.h"
#include "deleteinstanceonboardingjobrequest_p.h"
#include "deleteinstanceonboardingjobresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteInstanceOnboardingJobRequest
 * \brief The DeleteInstanceOnboardingJobRequest class provides an interface for ConnectCampaigns DeleteInstanceOnboardingJob requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteInstanceOnboardingJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInstanceOnboardingJobRequest::DeleteInstanceOnboardingJobRequest(const DeleteInstanceOnboardingJobRequest &other)
    : ConnectCampaignsRequest(new DeleteInstanceOnboardingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInstanceOnboardingJobRequest object.
 */
DeleteInstanceOnboardingJobRequest::DeleteInstanceOnboardingJobRequest()
    : ConnectCampaignsRequest(new DeleteInstanceOnboardingJobRequestPrivate(ConnectCampaignsRequest::DeleteInstanceOnboardingJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInstanceOnboardingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInstanceOnboardingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInstanceOnboardingJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceOnboardingJobResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteInstanceOnboardingJobRequestPrivate
 * \brief The DeleteInstanceOnboardingJobRequestPrivate class provides private implementation for DeleteInstanceOnboardingJobRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteInstanceOnboardingJobRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
DeleteInstanceOnboardingJobRequestPrivate::DeleteInstanceOnboardingJobRequestPrivate(
    const ConnectCampaignsRequest::Action action, DeleteInstanceOnboardingJobRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceOnboardingJobRequest
 * class' copy constructor.
 */
DeleteInstanceOnboardingJobRequestPrivate::DeleteInstanceOnboardingJobRequestPrivate(
    const DeleteInstanceOnboardingJobRequestPrivate &other, DeleteInstanceOnboardingJobRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
