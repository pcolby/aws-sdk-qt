// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
