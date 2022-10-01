// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatabaserequest.h"
#include "deletedatabaserequest_p.h"
#include "deletedatabaseresponse.h"
#include "timestreamwriterequest_p.h"

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::DeleteDatabaseRequest
 * \brief The DeleteDatabaseRequest class provides an interface for TimestreamWrite DeleteDatabase requests.
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
 * \sa TimestreamWriteClient::deleteDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatabaseRequest::DeleteDatabaseRequest(const DeleteDatabaseRequest &other)
    : TimestreamWriteRequest(new DeleteDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatabaseRequest object.
 */
DeleteDatabaseRequest::DeleteDatabaseRequest()
    : TimestreamWriteRequest(new DeleteDatabaseRequestPrivate(TimestreamWriteRequest::DeleteDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamWrite::DeleteDatabaseRequestPrivate
 * \brief The DeleteDatabaseRequestPrivate class provides private implementation for DeleteDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a DeleteDatabaseRequestPrivate object for TimestreamWrite \a action,
 * with public implementation \a q.
 */
DeleteDatabaseRequestPrivate::DeleteDatabaseRequestPrivate(
    const TimestreamWriteRequest::Action action, DeleteDatabaseRequest * const q)
    : TimestreamWriteRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatabaseRequest
 * class' copy constructor.
 */
DeleteDatabaseRequestPrivate::DeleteDatabaseRequestPrivate(
    const DeleteDatabaseRequestPrivate &other, DeleteDatabaseRequest * const q)
    : TimestreamWriteRequestPrivate(other, q)
{

}

} // namespace TimestreamWrite
} // namespace QtAws
