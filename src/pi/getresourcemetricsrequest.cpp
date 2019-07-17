/*
    Copyright 2013-2019 Paul Colby

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

#include "getresourcemetricsrequest.h"
#include "getresourcemetricsrequest_p.h"
#include "getresourcemetricsresponse.h"
#include "pirequest_p.h"

namespace QtAws {
namespace PI {

/*!
 * \class QtAws::PI::GetResourceMetricsRequest
 * \brief The GetResourceMetricsRequest class provides an interface for PI GetResourceMetrics requests.
 *
 * \inmodule QtAwsPI
 *
 *  AWS Performance Insights enables you to monitor and explore different dimensions of database load based on data captured
 *  from a running RDS instance. The guide provides detailed information about Performance Insights data types, parameters
 *  and errors. For more information about Performance Insights capabilities see <a
 *  href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using Amazon RDS Performance
 *  Insights </a> in the <i>Amazon RDS User
 * 
 *  Guide</i>>
 * 
 *  The AWS Performance Insights API provides visibility into the performance of your RDS instance, when Performance
 *  Insights is enabled for supported engine types. While Amazon CloudWatch provides the authoritative source for AWS
 *  service vended monitoring metrics, AWS Performance Insights offers a domain-specific view of database load measured as
 *  Average Active Sessions and provided to API consumers as a 2-dimensional time-series dataset. The time dimension of the
 *  data provides DB load data for each time point in the queried time range, and each time point decomposes overall load in
 *  relation to the requested dimensions, such as SQL, Wait-event, User or Host, measured at that time
 *
 * \sa PiClient::getResourceMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceMetricsRequest::GetResourceMetricsRequest(const GetResourceMetricsRequest &other)
    : PiRequest(new GetResourceMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceMetricsRequest object.
 */
GetResourceMetricsRequest::GetResourceMetricsRequest()
    : PiRequest(new GetResourceMetricsRequestPrivate(PiRequest::GetResourceMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::PI::GetResourceMetricsRequestPrivate
 * \brief The GetResourceMetricsRequestPrivate class provides private implementation for GetResourceMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsPI
 */

/*!
 * Constructs a GetResourceMetricsRequestPrivate object for Pi \a action,
 * with public implementation \a q.
 */
GetResourceMetricsRequestPrivate::GetResourceMetricsRequestPrivate(
    const PiRequest::Action action, GetResourceMetricsRequest * const q)
    : PiRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceMetricsRequest
 * class' copy constructor.
 */
GetResourceMetricsRequestPrivate::GetResourceMetricsRequestPrivate(
    const GetResourceMetricsRequestPrivate &other, GetResourceMetricsRequest * const q)
    : PiRequestPrivate(other, q)
{

}

} // namespace PI
} // namespace QtAws
