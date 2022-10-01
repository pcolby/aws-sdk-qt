// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
