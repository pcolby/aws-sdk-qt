// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationdaterangekpirequest.h"
#include "getapplicationdaterangekpirequest_p.h"
#include "getapplicationdaterangekpiresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApplicationDateRangeKpiRequest
 * \brief The GetApplicationDateRangeKpiRequest class provides an interface for Pinpoint GetApplicationDateRangeKpi requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApplicationDateRangeKpi
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationDateRangeKpiRequest::GetApplicationDateRangeKpiRequest(const GetApplicationDateRangeKpiRequest &other)
    : PinpointRequest(new GetApplicationDateRangeKpiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationDateRangeKpiRequest object.
 */
GetApplicationDateRangeKpiRequest::GetApplicationDateRangeKpiRequest()
    : PinpointRequest(new GetApplicationDateRangeKpiRequestPrivate(PinpointRequest::GetApplicationDateRangeKpiAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationDateRangeKpiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationDateRangeKpiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationDateRangeKpiRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationDateRangeKpiResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApplicationDateRangeKpiRequestPrivate
 * \brief The GetApplicationDateRangeKpiRequestPrivate class provides private implementation for GetApplicationDateRangeKpiRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApplicationDateRangeKpiRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetApplicationDateRangeKpiRequestPrivate::GetApplicationDateRangeKpiRequestPrivate(
    const PinpointRequest::Action action, GetApplicationDateRangeKpiRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationDateRangeKpiRequest
 * class' copy constructor.
 */
GetApplicationDateRangeKpiRequestPrivate::GetApplicationDateRangeKpiRequestPrivate(
    const GetApplicationDateRangeKpiRequestPrivate &other, GetApplicationDateRangeKpiRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
