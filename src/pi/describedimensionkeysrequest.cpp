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

#include "describedimensionkeysrequest.h"
#include "describedimensionkeysrequest_p.h"
#include "describedimensionkeysresponse.h"
#include "pirequest_p.h"

namespace QtAws {
namespace PI {

/*!
 * \class QtAws::PI::DescribeDimensionKeysRequest
 * \brief The DescribeDimensionKeysRequest class provides an interface for PI DescribeDimensionKeys requests.
 *
 * \inmodule QtAwsPI
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
 *  of your DB instance. Amazon CloudWatch provides the authoritative source for AWS service-vended monitoring metrics.
 *  Performance Insights offers a domain-specific view of DB load.
 * 
 *  </p
 * 
 *  DB load is measured as Average Active Sessions. Performance Insights provides the data to API consumers as a
 *  two-dimensional time-series dataset. The time dimension provides DB load data for each time point in the queried time
 *  range. Each time point decomposes overall load in relation to the requested dimensions, measured at that time point.
 *  Examples include SQL, Wait event, User, and
 * 
 *  Host> <ul> <li>
 * 
 *  To learn more about Performance Insights and Amazon Aurora DB instances, go to the <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">Amazon Aurora User
 * 
 *  Guide</a>> </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon RDS DB instances, go to the <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Amazon RDS User
 *
 * \sa PiClient::describeDimensionKeys
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDimensionKeysRequest::DescribeDimensionKeysRequest(const DescribeDimensionKeysRequest &other)
    : PiRequest(new DescribeDimensionKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDimensionKeysRequest object.
 */
DescribeDimensionKeysRequest::DescribeDimensionKeysRequest()
    : PiRequest(new DescribeDimensionKeysRequestPrivate(PiRequest::DescribeDimensionKeysAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDimensionKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDimensionKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDimensionKeysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDimensionKeysResponse(*this, reply);
}

/*!
 * \class QtAws::PI::DescribeDimensionKeysRequestPrivate
 * \brief The DescribeDimensionKeysRequestPrivate class provides private implementation for DescribeDimensionKeysRequest.
 * \internal
 *
 * \inmodule QtAwsPI
 */

/*!
 * Constructs a DescribeDimensionKeysRequestPrivate object for Pi \a action,
 * with public implementation \a q.
 */
DescribeDimensionKeysRequestPrivate::DescribeDimensionKeysRequestPrivate(
    const PiRequest::Action action, DescribeDimensionKeysRequest * const q)
    : PiRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDimensionKeysRequest
 * class' copy constructor.
 */
DescribeDimensionKeysRequestPrivate::DescribeDimensionKeysRequestPrivate(
    const DescribeDimensionKeysRequestPrivate &other, DescribeDimensionKeysRequest * const q)
    : PiRequestPrivate(other, q)
{

}

} // namespace PI
} // namespace QtAws
