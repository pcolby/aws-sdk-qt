/*
    Copyright 2013-2020 Paul Colby

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
