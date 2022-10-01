// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignactivitiesrequest.h"
#include "getcampaignactivitiesrequest_p.h"
#include "getcampaignactivitiesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesRequest
 * \brief The GetCampaignActivitiesRequest class provides an interface for Pinpoint GetCampaignActivities requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignActivities
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignActivitiesRequest::GetCampaignActivitiesRequest(const GetCampaignActivitiesRequest &other)
    : PinpointRequest(new GetCampaignActivitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignActivitiesRequest object.
 */
GetCampaignActivitiesRequest::GetCampaignActivitiesRequest()
    : PinpointRequest(new GetCampaignActivitiesRequestPrivate(PinpointRequest::GetCampaignActivitiesAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignActivitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignActivitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignActivitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesRequestPrivate
 * \brief The GetCampaignActivitiesRequestPrivate class provides private implementation for GetCampaignActivitiesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignActivitiesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignActivitiesRequestPrivate::GetCampaignActivitiesRequestPrivate(
    const PinpointRequest::Action action, GetCampaignActivitiesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignActivitiesRequest
 * class' copy constructor.
 */
GetCampaignActivitiesRequestPrivate::GetCampaignActivitiesRequestPrivate(
    const GetCampaignActivitiesRequestPrivate &other, GetCampaignActivitiesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
