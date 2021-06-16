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
