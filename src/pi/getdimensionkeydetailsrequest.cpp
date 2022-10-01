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

#include "getdimensionkeydetailsrequest.h"
#include "getdimensionkeydetailsrequest_p.h"
#include "getdimensionkeydetailsresponse.h"
#include "pirequest_p.h"

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::GetDimensionKeyDetailsRequest
 * \brief The GetDimensionKeyDetailsRequest class provides an interface for Pi GetDimensionKeyDetails requests.
 *
 * \inmodule QtAwsPi
 *
 *  <fullname>Amazon RDS Performance Insights</fullname>
 * 
 *  Amazon RDS Performance Insights enables you to monitor and explore different dimensions of database load based on data
 *  captured from a running DB instance. The guide provides detailed information about Performance Insights data types,
 *  parameters and
 * 
 *  errors>
 * 
 *  When Performance Insights is enabled, the Amazon RDS Performance Insights API provides visibility into the performance
 *  of your DB instance. Amazon CloudWatch provides the authoritative source for Amazon Web Services service-vended
 *  monitoring metrics. Performance Insights offers a domain-specific view of DB
 * 
 *  load>
 * 
 *  DB load is measured as average active sessions. Performance Insights provides the data to API consumers as a
 *  two-dimensional time-series dataset. The time dimension provides DB load data for each time point in the queried time
 *  range. Each time point decomposes overall load in relation to the requested dimensions, measured at that time point.
 *  Examples include SQL, Wait event, User, and
 * 
 *  Host> <ul> <li>
 * 
 *  To learn more about Performance Insights and Amazon Aurora DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html"> Amazon Aurora User Guide</a>
 *  </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon RDS DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html"> Amazon RDS User Guide</a> </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon DocumentDB clusters, go to the <i> <a
 *  href="https://docs.aws.amazon.com/documentdb/latest/developerguide/performance-insights.html"> Amazon DocumentDB
 *  Developer Guide</a>
 *
 * \sa PiClient::getDimensionKeyDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetDimensionKeyDetailsRequest::GetDimensionKeyDetailsRequest(const GetDimensionKeyDetailsRequest &other)
    : PiRequest(new GetDimensionKeyDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDimensionKeyDetailsRequest object.
 */
GetDimensionKeyDetailsRequest::GetDimensionKeyDetailsRequest()
    : PiRequest(new GetDimensionKeyDetailsRequestPrivate(PiRequest::GetDimensionKeyDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDimensionKeyDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDimensionKeyDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDimensionKeyDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetDimensionKeyDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Pi::GetDimensionKeyDetailsRequestPrivate
 * \brief The GetDimensionKeyDetailsRequestPrivate class provides private implementation for GetDimensionKeyDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a GetDimensionKeyDetailsRequestPrivate object for Pi \a action,
 * with public implementation \a q.
 */
GetDimensionKeyDetailsRequestPrivate::GetDimensionKeyDetailsRequestPrivate(
    const PiRequest::Action action, GetDimensionKeyDetailsRequest * const q)
    : PiRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDimensionKeyDetailsRequest
 * class' copy constructor.
 */
GetDimensionKeyDetailsRequestPrivate::GetDimensionKeyDetailsRequestPrivate(
    const GetDimensionKeyDetailsRequestPrivate &other, GetDimensionKeyDetailsRequest * const q)
    : PiRequestPrivate(other, q)
{

}

} // namespace Pi
} // namespace QtAws
