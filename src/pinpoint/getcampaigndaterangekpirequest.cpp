// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaigndaterangekpirequest.h"
#include "getcampaigndaterangekpirequest_p.h"
#include "getcampaigndaterangekpiresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignDateRangeKpiRequest
 * \brief The GetCampaignDateRangeKpiRequest class provides an interface for Pinpoint GetCampaignDateRangeKpi requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignDateRangeKpi
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignDateRangeKpiRequest::GetCampaignDateRangeKpiRequest(const GetCampaignDateRangeKpiRequest &other)
    : PinpointRequest(new GetCampaignDateRangeKpiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignDateRangeKpiRequest object.
 */
GetCampaignDateRangeKpiRequest::GetCampaignDateRangeKpiRequest()
    : PinpointRequest(new GetCampaignDateRangeKpiRequestPrivate(PinpointRequest::GetCampaignDateRangeKpiAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignDateRangeKpiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignDateRangeKpiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignDateRangeKpiRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignDateRangeKpiResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignDateRangeKpiRequestPrivate
 * \brief The GetCampaignDateRangeKpiRequestPrivate class provides private implementation for GetCampaignDateRangeKpiRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignDateRangeKpiRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignDateRangeKpiRequestPrivate::GetCampaignDateRangeKpiRequestPrivate(
    const PinpointRequest::Action action, GetCampaignDateRangeKpiRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignDateRangeKpiRequest
 * class' copy constructor.
 */
GetCampaignDateRangeKpiRequestPrivate::GetCampaignDateRangeKpiRequestPrivate(
    const GetCampaignDateRangeKpiRequestPrivate &other, GetCampaignDateRangeKpiRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
