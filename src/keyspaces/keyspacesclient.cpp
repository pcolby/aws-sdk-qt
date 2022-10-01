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

#include "keyspacesclient.h"
#include "keyspacesclient_p.h"

#include "core/awssignaturev4.h"
#include "createkeyspacerequest.h"
#include "createkeyspaceresponse.h"
#include "createtablerequest.h"
#include "createtableresponse.h"
#include "deletekeyspacerequest.h"
#include "deletekeyspaceresponse.h"
#include "deletetablerequest.h"
#include "deletetableresponse.h"
#include "getkeyspacerequest.h"
#include "getkeyspaceresponse.h"
#include "gettablerequest.h"
#include "gettableresponse.h"
#include "listkeyspacesrequest.h"
#include "listkeyspacesresponse.h"
#include "listtablesrequest.h"
#include "listtablesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "restoretablerequest.h"
#include "restoretableresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatetablerequest.h"
#include "updatetableresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Keyspaces
 * \brief Contains classess for accessing Amazon Keyspaces.
 *
 * \inmodule QtAwsKeyspaces
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::KeyspacesClient
 * \brief The KeyspacesClient class provides access to the Amazon Keyspaces service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKeyspaces
 *
 *  Amazon Keyspaces (for Apache Cassandra) is a scalable, highly available, and managed Apache Cassandra-compatible
 *  database service. Amazon Keyspaces makes it easy to migrate, run, and scale Cassandra workloads in the Amazon Web
 *  Services Cloud. With just a few clicks on the Amazon Web Services Management Console or a few lines of code, you can
 *  create keyspaces and tables in Amazon Keyspaces, without deploying any infrastructure or installing software.
 * 
 *  </p
 * 
 *  In addition to supporting Cassandra Query Language (CQL) requests via open-source Cassandra drivers, Amazon Keyspaces
 *  supports data definition language (DDL) operations to manage keyspaces and tables using the Amazon Web Services SDK and
 *  CLI. This API reference describes the supported DDL operations in
 * 
 *  detail>
 * 
 *  For the list of all supported CQL APIs, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cassandra-apis.html">Supported Cassandra APIs, operations,
 *  and data types in Amazon Keyspaces</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  To learn how Amazon Keyspaces API actions are recorded with CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/logging-using-cloudtrail.html#service-name-info-in-cloudtrail">Amazon
 *  Keyspaces information in CloudTrail</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  For more information about Amazon Web Services APIs, for example how to implement retry logic or how to sign Amazon Web
 *  Services API requests, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web Services
 *  APIs</a> in the <i>General
 */

/*!
 * \brief Constructs a KeyspacesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KeyspacesClient::KeyspacesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KeyspacesClientPrivate(this), parent)
{
    Q_D(KeyspacesClient);
    d->apiVersion = QStringLiteral("2022-02-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cassandra");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Keyspaces");
    d->serviceName = QStringLiteral("cassandra");
}

/*!
 * \overload KeyspacesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KeyspacesClient::KeyspacesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KeyspacesClientPrivate(this), parent)
{
    Q_D(KeyspacesClient);
    d->apiVersion = QStringLiteral("2022-02-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cassandra");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Keyspaces");
    d->serviceName = QStringLiteral("cassandra");
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * CreateKeyspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateKeyspace</code> operation adds a new keyspace to your account. In an Amazon Web Services account,
 * keyspace names must be unique within each
 *
 * Region>
 *
 * <code>CreateKeyspace</code> is an asynchronous operation. You can monitor the creation status of the new keyspace by
 * using the <code>GetKeyspace</code>
 *
 * operation>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/working-with-keyspaces.html#keyspaces-create">Creating
 * keyspaces</a> in the <i>Amazon Keyspaces Developer
 */
CreateKeyspaceResponse * KeyspacesClient::createKeyspace(const CreateKeyspaceRequest &request)
{
    return qobject_cast<CreateKeyspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * CreateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateTable</code> operation adds a new table to the specified keyspace. Within a keyspace, table names must
 * be
 *
 * unique>
 *
 * <code>CreateTable</code> is an asynchronous operation. When the request is received, the status of the table is set to
 * <code>CREATING</code>. You can monitor the creation status of the new table by using the <code>GetTable</code>
 * operation, which returns the current <code>status</code> of the table. You can start using a table when the status is
 *
 * <code>ACTIVE</code>>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/working-with-tables.html#tables-create">Creating tables</a>
 * in the <i>Amazon Keyspaces Developer
 */
CreateTableResponse * KeyspacesClient::createTable(const CreateTableRequest &request)
{
    return qobject_cast<CreateTableResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * DeleteKeyspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>DeleteKeyspace</code> operation deletes a keyspace and all of its tables.
 */
DeleteKeyspaceResponse * KeyspacesClient::deleteKeyspace(const DeleteKeyspaceRequest &request)
{
    return qobject_cast<DeleteKeyspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * DeleteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>DeleteTable</code> operation deletes a table and all of its data. After a <code>DeleteTable</code> request is
 * received, the specified table is in the <code>DELETING</code> state until Amazon Keyspaces completes the deletion. If
 * the table is in the <code>ACTIVE</code> state, you can delete it. If a table is either in the <code>CREATING</code> or
 * <code>UPDATING</code> states, then Amazon Keyspaces returns a <code>ResourceInUseException</code>. If the specified
 * table does not exist, Amazon Keyspaces returns a <code>ResourceNotFoundException</code>. If the table is already in the
 * <code>DELETING</code> state, no error is
 */
DeleteTableResponse * KeyspacesClient::deleteTable(const DeleteTableRequest &request)
{
    return qobject_cast<DeleteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * GetKeyspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name and the Amazon Resource Name (ARN) of the specified
 */
GetKeyspaceResponse * KeyspacesClient::getKeyspace(const GetKeyspaceRequest &request)
{
    return qobject_cast<GetKeyspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * GetTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the table, including the table's name and current status, the keyspace name, configuration
 * settings, and
 *
 * metadata>
 *
 * To read table metadata using <code>GetTable</code>, <code>Select</code> action permissions for the table and system
 * tables are required to complete the
 */
GetTableResponse * KeyspacesClient::getTable(const GetTableRequest &request)
{
    return qobject_cast<GetTableResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * ListKeyspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
ListKeyspacesResponse * KeyspacesClient::listKeyspaces(const ListKeyspacesRequest &request)
{
    return qobject_cast<ListKeyspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * ListTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tables for a specified
 */
ListTablesResponse * KeyspacesClient::listTables(const ListTablesRequest &request)
{
    return qobject_cast<ListTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all tags associated with the specified Amazon Keyspaces
 */
ListTagsForResourceResponse * KeyspacesClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * RestoreTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores the specified table to the specified point in time within the <code>earliest_restorable_timestamp</code> and
 * the current time. For more information about restore points, see <a
 * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery_HowItWorks.html#howitworks_backup_window">
 * Time window for PITR continuous backups</a> in the <i>Amazon Keyspaces Developer Guide</i>.
 *
 * </p
 *
 * Any number of users can execute up to 4 concurrent restores (any type of restore) in a given
 *
 * account>
 *
 * When you restore using point in time recovery, Amazon Keyspaces restores your source table's schema and data to the
 * state based on the selected timestamp <code>(day:hour:minute:second)</code> to a new table. The Time to Live (TTL)
 * settings are also restored to the state based on the selected
 *
 * timestamp>
 *
 * In addition to the table's schema, data, and TTL settings, <code>RestoreTable</code> restores the capacity mode,
 * encryption, and point-in-time recovery settings from the source table. Unlike the table's schema data and TTL settings,
 * which are restored based on the selected timestamp, these settings are always restored based on the table's settings as
 * of the current time or when the table was
 *
 * deleted>
 *
 * You can also overwrite these settings during
 *
 * restore>
 *
 * • Read/write capacity
 *
 * mod>
 *
 * • Provisioned throughput capacity
 *
 * setting>
 *
 * • Point-in-time (PITR)
 *
 * setting>
 *
 * •
 *
 * Tag>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery_HowItWorks.html#howitworks_backup_settings">PITR
 * restore settings</a> in the <i>Amazon Keyspaces Developer
 *
 * Guide</i>>
 *
 * Note that the following settings are not restored, and you must configure them manually for the new
 *
 * table>
 *
 * • Automatic scaling policies (for tables that use provisioned capacity
 *
 * mode>
 *
 * • Identity and Access Management (IAM)
 *
 * policie>
 *
 * • Amazon CloudWatch metrics and
 */
RestoreTableResponse * KeyspacesClient::restoreTable(const RestoreTableRequest &request)
{
    return qobject_cast<RestoreTableResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a set of tags with a Amazon Keyspaces resource. You can then activate these user-defined tags so that they
 * appear on the Cost Management Console for cost allocation tracking. For more information, see <a
 * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding tags and labels to Amazon
 * Keyspaces resources</a> in the <i>Amazon Keyspaces Developer
 *
 * Guide</i>>
 *
 * For IAM policy examples that show how to control access to Amazon Keyspaces resources based on tags, see <a
 * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/security_iam_id-based-policy-examples-tags">Amazon Keyspaces
 * resource access based on tags</a> in the <i>Amazon Keyspaces Developer
 */
TagResourceResponse * KeyspacesClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association of tags from a Amazon Keyspaces
 */
UntagResourceResponse * KeyspacesClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KeyspacesClient service, and returns a pointer to an
 * UpdateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds new columns to the table or updates one of the table's settings, for example capacity mode, encryption,
 * point-in-time recovery, or ttl settings. Note that you can only update one specific table setting per update
 */
UpdateTableResponse * KeyspacesClient::updateTable(const UpdateTableRequest &request)
{
    return qobject_cast<UpdateTableResponse *>(send(request));
}

/*!
 * \class QtAws::Keyspaces::KeyspacesClientPrivate
 * \brief The KeyspacesClientPrivate class provides private implementation for KeyspacesClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a KeyspacesClientPrivate object with public implementation \a q.
 */
KeyspacesClientPrivate::KeyspacesClientPrivate(KeyspacesClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Keyspaces
} // namespace QtAws
