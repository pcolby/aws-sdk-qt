// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "writerecordsrequest.h"
#include "writerecordsrequest_p.h"
#include "writerecordsresponse.h"
#include "timestreamwriterequest_p.h"

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::WriteRecordsRequest
 * \brief The WriteRecordsRequest class provides an interface for TimestreamWrite WriteRecords requests.
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
 * \sa TimestreamWriteClient::writeRecords
 */

/*!
 * Constructs a copy of \a other.
 */
WriteRecordsRequest::WriteRecordsRequest(const WriteRecordsRequest &other)
    : TimestreamWriteRequest(new WriteRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a WriteRecordsRequest object.
 */
WriteRecordsRequest::WriteRecordsRequest()
    : TimestreamWriteRequest(new WriteRecordsRequestPrivate(TimestreamWriteRequest::WriteRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool WriteRecordsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a WriteRecordsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * WriteRecordsRequest::response(QNetworkReply * const reply) const
{
    return new WriteRecordsResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamWrite::WriteRecordsRequestPrivate
 * \brief The WriteRecordsRequestPrivate class provides private implementation for WriteRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a WriteRecordsRequestPrivate object for TimestreamWrite \a action,
 * with public implementation \a q.
 */
WriteRecordsRequestPrivate::WriteRecordsRequestPrivate(
    const TimestreamWriteRequest::Action action, WriteRecordsRequest * const q)
    : TimestreamWriteRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the WriteRecordsRequest
 * class' copy constructor.
 */
WriteRecordsRequestPrivate::WriteRecordsRequestPrivate(
    const WriteRecordsRequestPrivate &other, WriteRecordsRequest * const q)
    : TimestreamWriteRequestPrivate(other, q)
{

}

} // namespace TimestreamWrite
} // namespace QtAws
