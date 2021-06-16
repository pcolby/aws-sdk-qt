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

#include "getjourneydaterangekpirequest.h"
#include "getjourneydaterangekpirequest_p.h"
#include "getjourneydaterangekpiresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyDateRangeKpiRequest
 * \brief The GetJourneyDateRangeKpiRequest class provides an interface for Pinpoint GetJourneyDateRangeKpi requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourneyDateRangeKpi
 */

/*!
 * Constructs a copy of \a other.
 */
GetJourneyDateRangeKpiRequest::GetJourneyDateRangeKpiRequest(const GetJourneyDateRangeKpiRequest &other)
    : PinpointRequest(new GetJourneyDateRangeKpiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJourneyDateRangeKpiRequest object.
 */
GetJourneyDateRangeKpiRequest::GetJourneyDateRangeKpiRequest()
    : PinpointRequest(new GetJourneyDateRangeKpiRequestPrivate(PinpointRequest::GetJourneyDateRangeKpiAction, this))
{

}

/*!
 * \reimp
 */
bool GetJourneyDateRangeKpiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJourneyDateRangeKpiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJourneyDateRangeKpiRequest::response(QNetworkReply * const reply) const
{
    return new GetJourneyDateRangeKpiResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetJourneyDateRangeKpiRequestPrivate
 * \brief The GetJourneyDateRangeKpiRequestPrivate class provides private implementation for GetJourneyDateRangeKpiRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyDateRangeKpiRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetJourneyDateRangeKpiRequestPrivate::GetJourneyDateRangeKpiRequestPrivate(
    const PinpointRequest::Action action, GetJourneyDateRangeKpiRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJourneyDateRangeKpiRequest
 * class' copy constructor.
 */
GetJourneyDateRangeKpiRequestPrivate::GetJourneyDateRangeKpiRequestPrivate(
    const GetJourneyDateRangeKpiRequestPrivate &other, GetJourneyDateRangeKpiRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
