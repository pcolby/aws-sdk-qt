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
