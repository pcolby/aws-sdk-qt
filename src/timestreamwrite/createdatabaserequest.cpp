// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatabaserequest.h"
#include "createdatabaserequest_p.h"
#include "createdatabaseresponse.h"
#include "timestreamwriterequest_p.h"

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::CreateDatabaseRequest
 * \brief The CreateDatabaseRequest class provides an interface for TimestreamWrite CreateDatabase requests.
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
 * \sa TimestreamWriteClient::createDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatabaseRequest::CreateDatabaseRequest(const CreateDatabaseRequest &other)
    : TimestreamWriteRequest(new CreateDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatabaseRequest object.
 */
CreateDatabaseRequest::CreateDatabaseRequest()
    : TimestreamWriteRequest(new CreateDatabaseRequestPrivate(TimestreamWriteRequest::CreateDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamWrite::CreateDatabaseRequestPrivate
 * \brief The CreateDatabaseRequestPrivate class provides private implementation for CreateDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a CreateDatabaseRequestPrivate object for TimestreamWrite \a action,
 * with public implementation \a q.
 */
CreateDatabaseRequestPrivate::CreateDatabaseRequestPrivate(
    const TimestreamWriteRequest::Action action, CreateDatabaseRequest * const q)
    : TimestreamWriteRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatabaseRequest
 * class' copy constructor.
 */
CreateDatabaseRequestPrivate::CreateDatabaseRequestPrivate(
    const CreateDatabaseRequestPrivate &other, CreateDatabaseRequest * const q)
    : TimestreamWriteRequestPrivate(other, q)
{

}

} // namespace TimestreamWrite
} // namespace QtAws
