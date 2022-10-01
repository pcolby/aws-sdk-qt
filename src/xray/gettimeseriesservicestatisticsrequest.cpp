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

#include "gettimeseriesservicestatisticsrequest.h"
#include "gettimeseriesservicestatisticsrequest_p.h"
#include "gettimeseriesservicestatisticsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTimeSeriesServiceStatisticsRequest
 * \brief The GetTimeSeriesServiceStatisticsRequest class provides an interface for XRay GetTimeSeriesServiceStatistics requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getTimeSeriesServiceStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
GetTimeSeriesServiceStatisticsRequest::GetTimeSeriesServiceStatisticsRequest(const GetTimeSeriesServiceStatisticsRequest &other)
    : XRayRequest(new GetTimeSeriesServiceStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTimeSeriesServiceStatisticsRequest object.
 */
GetTimeSeriesServiceStatisticsRequest::GetTimeSeriesServiceStatisticsRequest()
    : XRayRequest(new GetTimeSeriesServiceStatisticsRequestPrivate(XRayRequest::GetTimeSeriesServiceStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTimeSeriesServiceStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTimeSeriesServiceStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTimeSeriesServiceStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetTimeSeriesServiceStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetTimeSeriesServiceStatisticsRequestPrivate
 * \brief The GetTimeSeriesServiceStatisticsRequestPrivate class provides private implementation for GetTimeSeriesServiceStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTimeSeriesServiceStatisticsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetTimeSeriesServiceStatisticsRequestPrivate::GetTimeSeriesServiceStatisticsRequestPrivate(
    const XRayRequest::Action action, GetTimeSeriesServiceStatisticsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTimeSeriesServiceStatisticsRequest
 * class' copy constructor.
 */
GetTimeSeriesServiceStatisticsRequestPrivate::GetTimeSeriesServiceStatisticsRequestPrivate(
    const GetTimeSeriesServiceStatisticsRequestPrivate &other, GetTimeSeriesServiceStatisticsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
