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

#include "timestreamwriteclient.h"
#include "timestreamwriteclient_p.h"

#include "core/awssignaturev4.h"
#include "createdatabaserequest.h"
#include "createdatabaseresponse.h"
#include "createtablerequest.h"
#include "createtableresponse.h"
#include "deletedatabaserequest.h"
#include "deletedatabaseresponse.h"
#include "deletetablerequest.h"
#include "deletetableresponse.h"
#include "describedatabaserequest.h"
#include "describedatabaseresponse.h"
#include "describeendpointsrequest.h"
#include "describeendpointsresponse.h"
#include "describetablerequest.h"
#include "describetableresponse.h"
#include "listdatabasesrequest.h"
#include "listdatabasesresponse.h"
#include "listtablesrequest.h"
#include "listtablesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedatabaserequest.h"
#include "updatedatabaseresponse.h"
#include "updatetablerequest.h"
#include "updatetableresponse.h"
#include "writerecordsrequest.h"
#include "writerecordsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::TimestreamWrite
 * \brief Contains classess for accessing Amazon Timestream Write.
 *
 * \inmodule QtAwsTimestreamWrite
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::TimestreamWriteClient
 * \brief The TimestreamWriteClient class provides access to the Amazon Timestream Write service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTimestreamWrite
 *
 *  Amazon Timestream is a fast, scalable, fully managed time series database service that makes it easy to store and
 *  analyze trillions of time series data points per day. With Timestream, you can easily store and analyze IoT sensor data
 *  to derive insights from your IoT applications. You can analyze industrial telemetry to streamline equipment management
 *  and maintenance. You can also store and analyze log data and metrics to improve the performance and availability of your
 *  applications. Timestream is built from the ground up to effectively ingest, process, and store time series data. It
 *  organizes data to optimize query processing. It automatically scales based on the volume of data ingested and on the
 *  query volume to ensure you receive optimal performance while inserting and querying data. As your data grows over time,
 *  Timestream’s adaptive query processing engine spans across storage tiers to provide fast analysis while reducing
 */

/*!
 * \brief Constructs a TimestreamWriteClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TimestreamWriteClient::TimestreamWriteClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-01"),
    QStringLiteral("ingest.timestream"),
    QStringLiteral("Amazon Timestream Write"),
    QStringLiteral("timestream"),
    parent), d_ptr(new TimestreamWriteClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload TimestreamWriteClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TimestreamWriteClient::TimestreamWriteClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-01"),
    QStringLiteral("ingest.timestream"),
    QStringLiteral("Amazon Timestream Write"),
    QStringLiteral("timestream"),
    parent), d_ptr(new TimestreamWriteClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * CreateDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Timestream database. If the KMS key is not specified, the database will be encrypted with a Timestream
 * managed KMS key located in your account. Refer to <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">AWS managed KMS keys</a> for
 * more info. Service quotas apply. For more information, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access Management</a> in the
 * Timestream Developer Guide.
 */
CreateDatabaseResponse * TimestreamWriteClient::createDatabase(const CreateDatabaseRequest &request)
{
    return qobject_cast<CreateDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * CreateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The CreateTable operation adds a new table to an existing database in your account. In an AWS account, table names must
 * be at least unique within each Region if they are in the same database. You may have identical table names in the same
 * Region if the tables are in seperate databases. While creating the table, you must specify the table name, database
 * name, and the retention properties. Service quotas apply. For more information, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access Management</a> in the
 * Timestream Developer Guide.
 */
CreateTableResponse * TimestreamWriteClient::createTable(const CreateTableRequest &request)
{
    return qobject_cast<CreateTableResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * DeleteDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a given Timestream database. <i>This is an irreversible operation. After a database is deleted, the time series
 * data from its tables cannot be recovered.</i>
 *
 * </p
 *
 * All tables in the database must be deleted first, or a ValidationException error will be thrown.
 *
 * </p
 *
 * Due to the nature of distributed retries, the operation can return either success or a ResourceNotFoundException.
 * Clients should consider them
 */
DeleteDatabaseResponse * TimestreamWriteClient::deleteDatabase(const DeleteDatabaseRequest &request)
{
    return qobject_cast<DeleteDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * DeleteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a given Timestream table. This is an irreversible operation. After a Timestream database table is deleted, the
 * time series data stored in the table cannot be recovered.
 *
 * </p
 *
 * Due to the nature of distributed retries, the operation can return either success or a ResourceNotFoundException.
 * Clients should consider them
 */
DeleteTableResponse * TimestreamWriteClient::deleteTable(const DeleteTableRequest &request)
{
    return qobject_cast<DeleteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * DescribeDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the database, including the database name, time that the database was created, and the total
 * number of tables found within the database. Service quotas apply. For more information, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access Management</a> in the
 * Timestream Developer
 */
DescribeDatabaseResponse * TimestreamWriteClient::describeDatabase(const DescribeDatabaseRequest &request)
{
    return qobject_cast<DescribeDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * DescribeEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * DescribeEndpoints returns a list of available endpoints to make Timestream API calls against. This API is available
 * through both Write and
 *
 * Query>
 *
 * Because Timestream’s SDKs are designed to transparently work with the service’s architecture, including the management
 * and mapping of the service endpoints, <i>it is not recommended that you use this API
 *
 * unless</i>> <ul> <li>
 *
 * Your application uses a programming language that does not yet have SDK
 *
 * suppor> </li> <li>
 *
 * You require better control over the client-side
 *
 * implementatio> </li> </ul>
 *
 * For detailed information on how to use DescribeEndpoints, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The Endpoint
 * Discovery Pattern and REST
 */
DescribeEndpointsResponse * TimestreamWriteClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * DescribeTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the table, including the table name, database name, retention duration of the memory store and
 * the magnetic store. Service quotas apply. For more information, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access Management</a> in the
 * Timestream Developer Guide.
 */
DescribeTableResponse * TimestreamWriteClient::describeTable(const DescribeTableRequest &request)
{
    return qobject_cast<DescribeTableResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * ListDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of your Timestream databases. Service quotas apply. For more information, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access Management</a> in the
 * Timestream Developer Guide.
 */
ListDatabasesResponse * TimestreamWriteClient::listDatabases(const ListDatabasesRequest &request)
{
    return qobject_cast<ListDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * ListTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of tables, along with the name, status and retention properties of each table.
 */
ListTablesResponse * TimestreamWriteClient::listTables(const ListTablesRequest &request)
{
    return qobject_cast<ListTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tags on a Timestream resource.
 */
ListTagsForResourceResponse * TimestreamWriteClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a set of tags with a Timestream resource. You can then activate these user-defined tags so that they appear on
 * the Billing and Cost Management console for cost allocation tracking.
 */
TagResourceResponse * TimestreamWriteClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association of tags from a Timestream resource.
 */
UntagResourceResponse * TimestreamWriteClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * UpdateDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the KMS key for an existing database. While updating the database, you must specify the database name and the
 * identifier of the new KMS key to be used (<code>KmsKeyId</code>). If there are any concurrent
 * <code>UpdateDatabase</code> requests, first writer wins.
 */
UpdateDatabaseResponse * TimestreamWriteClient::updateDatabase(const UpdateDatabaseRequest &request)
{
    return qobject_cast<UpdateDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * UpdateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the retention duration of the memory store and magnetic store for your Timestream table. Note that the change
 * in retention duration takes effect immediately. For example, if the retention period of the memory store was initially
 * set to 2 hours and then changed to 24 hours, the memory store will be capable of holding 24 hours of data, but will be
 * populated with 24 hours of data 22 hours after this change was made. Timestream does not retrieve data from the magnetic
 * store to populate the memory store.
 *
 * </p
 *
 * Service quotas apply. For more information, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access Management</a> in the
 * Timestream Developer
 */
UpdateTableResponse * TimestreamWriteClient::updateTable(const UpdateTableRequest &request)
{
    return qobject_cast<UpdateTableResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamWriteClient service, and returns a pointer to an
 * WriteRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The WriteRecords operation enables you to write your time series data into Timestream. You can specify a single data
 * point or a batch of data points to be inserted into the system. Timestream offers you with a flexible schema that auto
 * detects the column names and data types for your Timestream tables based on the dimension names and data types of the
 * data points you specify when invoking writes into the database. Timestream support eventual consistency read semantics.
 * This means that when you query data immediately after writing a batch of data into Timestream, the query results might
 * not reflect the results of a recently completed write operation. The results may also include some stale data. If you
 * repeat the query request after a short time, the results should return the latest data. Service quotas apply. For more
 * information, see <a href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
 * Management</a> in the Timestream Developer Guide.
 */
WriteRecordsResponse * TimestreamWriteClient::writeRecords(const WriteRecordsRequest &request)
{
    return qobject_cast<WriteRecordsResponse *>(send(request));
}

/*!
 * \class QtAws::TimestreamWrite::TimestreamWriteClientPrivate
 * \brief The TimestreamWriteClientPrivate class provides private implementation for TimestreamWriteClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a TimestreamWriteClientPrivate object with public implementation \a q.
 */
TimestreamWriteClientPrivate::TimestreamWriteClientPrivate(TimestreamWriteClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace TimestreamWrite
} // namespace QtAws
