// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignsrequest.h"
#include "getcampaignsrequest_p.h"
#include "getcampaignsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignsRequest
 * \brief The GetCampaignsRequest class provides an interface for Pinpoint GetCampaigns requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaigns
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignsRequest::GetCampaignsRequest(const GetCampaignsRequest &other)
    : PinpointRequest(new GetCampaignsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignsRequest object.
 */
GetCampaignsRequest::GetCampaignsRequest()
    : PinpointRequest(new GetCampaignsRequestPrivate(PinpointRequest::GetCampaignsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignsRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignsRequestPrivate
 * \brief The GetCampaignsRequestPrivate class provides private implementation for GetCampaignsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignsRequestPrivate::GetCampaignsRequestPrivate(
    const PinpointRequest::Action action, GetCampaignsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignsRequest
 * class' copy constructor.
 */
GetCampaignsRequestPrivate::GetCampaignsRequestPrivate(
    const GetCampaignsRequestPrivate &other, GetCampaignsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
