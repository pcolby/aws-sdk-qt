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

#include "describedatabaserequest.h"
#include "describedatabaserequest_p.h"
#include "describedatabaseresponse.h"
#include "timestreamwriterequest_p.h"

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::DescribeDatabaseRequest
 * \brief The DescribeDatabaseRequest class provides an interface for TimestreamWrite DescribeDatabase requests.
 *
 * \inmodule QtAwsTimestreamWrite
 *
 *  <fullname>Amazon Timestream Write</fullname>
 * 
 *  Amazon Timestream is a fast, scalable, fully managed time series database service that makes it easy to store and
 *  analyze trillions of time series data points per day. With Timestream, you can easily store and analyze IoT sensor data
 *  to derive insights from your IoT applications. You can analyze industrial telemetry to streamline equipment management
 *  and maintenance. You can also store and analyze log data and metrics to improve the performance and availability of your
 *  applications. Timestream is built from the ground up to effectively ingest, process, and store time series data. It
 *  organizes data to optimize query processing. It automatically scales based on the volume of data ingested and on the
 *  query volume to ensure you receive optimal performance while inserting and querying data. As your data grows over time,
 *  Timestream’s adaptive query processing engine spans across storage tiers to provide fast analysis while reducing
 *
 * \sa TimestreamWriteClient::describeDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatabaseRequest::DescribeDatabaseRequest(const DescribeDatabaseRequest &other)
    : TimestreamWriteRequest(new DescribeDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatabaseRequest object.
 */
DescribeDatabaseRequest::DescribeDatabaseRequest()
    : TimestreamWriteRequest(new DescribeDatabaseRequestPrivate(TimestreamWriteRequest::DescribeDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamWrite::DescribeDatabaseRequestPrivate
 * \brief The DescribeDatabaseRequestPrivate class provides private implementation for DescribeDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a DescribeDatabaseRequestPrivate object for TimestreamWrite \a action,
 * with public implementation \a q.
 */
DescribeDatabaseRequestPrivate::DescribeDatabaseRequestPrivate(
    const TimestreamWriteRequest::Action action, DescribeDatabaseRequest * const q)
    : TimestreamWriteRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatabaseRequest
 * class' copy constructor.
 */
DescribeDatabaseRequestPrivate::DescribeDatabaseRequestPrivate(
    const DescribeDatabaseRequestPrivate &other, DescribeDatabaseRequest * const q)
    : TimestreamWriteRequestPrivate(other, q)
{

}

} // namespace TimestreamWrite
} // namespace QtAws
