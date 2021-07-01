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

#include "honeycodeclient.h"
#include "honeycodeclient_p.h"

#include "core/awssignaturev4.h"
#include "batchcreatetablerowsrequest.h"
#include "batchcreatetablerowsresponse.h"
#include "batchdeletetablerowsrequest.h"
#include "batchdeletetablerowsresponse.h"
#include "batchupdatetablerowsrequest.h"
#include "batchupdatetablerowsresponse.h"
#include "batchupserttablerowsrequest.h"
#include "batchupserttablerowsresponse.h"
#include "describetabledataimportjobrequest.h"
#include "describetabledataimportjobresponse.h"
#include "getscreendatarequest.h"
#include "getscreendataresponse.h"
#include "invokescreenautomationrequest.h"
#include "invokescreenautomationresponse.h"
#include "listtablecolumnsrequest.h"
#include "listtablecolumnsresponse.h"
#include "listtablerowsrequest.h"
#include "listtablerowsresponse.h"
#include "listtablesrequest.h"
#include "listtablesresponse.h"
#include "querytablerowsrequest.h"
#include "querytablerowsresponse.h"
#include "starttabledataimportjobrequest.h"
#include "starttabledataimportjobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Honeycode
 * \brief Contains classess for accessing Amazon Honeycode.
 *
 * \inmodule QtAwsHoneycode
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::HoneycodeClient
 * \brief The HoneycodeClient class provides access to the Amazon Honeycode service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 */

/*!
 * \brief Constructs a HoneycodeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
HoneycodeClient::HoneycodeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new HoneycodeClientPrivate(this), parent)
{
    Q_D(HoneycodeClient);
    d->apiVersion = QStringLiteral("2020-03-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("honeycode");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Honeycode");
    d->serviceName = QStringLiteral("honeycode");
}

/*!
 * \overload HoneycodeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
HoneycodeClient::HoneycodeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new HoneycodeClientPrivate(this), parent)
{
    Q_D(HoneycodeClient);
    d->apiVersion = QStringLiteral("2020-03-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("honeycode");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Honeycode");
    d->serviceName = QStringLiteral("honeycode");
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * BatchCreateTableRowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The BatchCreateTableRows API allows you to create one or more rows at the end of a table in a workbook. The API allows
 * you to specify the values to set in some or all of the columns in the new rows.
 *
 * </p
 *
 * If a column is not explicitly set in a specific row, then the column level formula specified in the table will be
 * applied to the new row. If there is no column level formula but the last row of the table has a formula, then that
 * formula will be copied down to the new row. If there is no column level formula and no formula in the last row of the
 * table, then that column will be left blank for the new rows.
 */
BatchCreateTableRowsResponse * HoneycodeClient::batchCreateTableRows(const BatchCreateTableRowsRequest &request)
{
    return qobject_cast<BatchCreateTableRowsResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * BatchDeleteTableRowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The BatchDeleteTableRows API allows you to delete one or more rows from a table in a workbook. You need to specify the
 * ids of the rows that you want to delete from the table.
 */
BatchDeleteTableRowsResponse * HoneycodeClient::batchDeleteTableRows(const BatchDeleteTableRowsRequest &request)
{
    return qobject_cast<BatchDeleteTableRowsResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * BatchUpdateTableRowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The BatchUpdateTableRows API allows you to update one or more rows in a table in a workbook.
 *
 * </p
 *
 * You can specify the values to set in some or all of the columns in the table for the specified rows. If a column is not
 * explicitly specified in a particular row, then that column will not be updated for that row. To clear out the data in a
 * specific cell, you need to set the value as an empty string ("").
 */
BatchUpdateTableRowsResponse * HoneycodeClient::batchUpdateTableRows(const BatchUpdateTableRowsRequest &request)
{
    return qobject_cast<BatchUpdateTableRowsResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * BatchUpsertTableRowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The BatchUpsertTableRows API allows you to upsert one or more rows in a table. The upsert operation takes a filter
 * expression as input and evaluates it to find matching rows on the destination table. If matching rows are found, it will
 * update the cells in the matching rows to new values specified in the request. If no matching rows are found, a new row
 * is added at the end of the table and the cells in that row are set to the new values specified in the request.
 *
 * </p
 *
 * You can specify the values to set in some or all of the columns in the table for the matching or newly appended rows. If
 * a column is not explicitly specified for a particular row, then that column will not be updated for that row. To clear
 * out the data in a specific cell, you need to set the value as an empty string ("").
 */
BatchUpsertTableRowsResponse * HoneycodeClient::batchUpsertTableRows(const BatchUpsertTableRowsRequest &request)
{
    return qobject_cast<BatchUpsertTableRowsResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * DescribeTableDataImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DescribeTableDataImportJob API allows you to retrieve the status and details of a table data import job.
 */
DescribeTableDataImportJobResponse * HoneycodeClient::describeTableDataImportJob(const DescribeTableDataImportJobRequest &request)
{
    return qobject_cast<DescribeTableDataImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * GetScreenDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The GetScreenData API allows retrieval of data from a screen in a Honeycode app. The API allows setting local variables
 * in the screen to filter, sort or otherwise affect what will be displayed on the screen.
 */
GetScreenDataResponse * HoneycodeClient::getScreenData(const GetScreenDataRequest &request)
{
    return qobject_cast<GetScreenDataResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * InvokeScreenAutomationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The InvokeScreenAutomation API allows invoking an action defined in a screen in a Honeycode app. The API allows setting
 * local variables, which can then be used in the automation being invoked. This allows automating the Honeycode app
 * interactions to write, update or delete data in the workbook.
 */
InvokeScreenAutomationResponse * HoneycodeClient::invokeScreenAutomation(const InvokeScreenAutomationRequest &request)
{
    return qobject_cast<InvokeScreenAutomationResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * ListTableColumnsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ListTableColumns API allows you to retrieve a list of all the columns in a table in a workbook.
 */
ListTableColumnsResponse * HoneycodeClient::listTableColumns(const ListTableColumnsRequest &request)
{
    return qobject_cast<ListTableColumnsResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * ListTableRowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ListTableRows API allows you to retrieve a list of all the rows in a table in a workbook.
 */
ListTableRowsResponse * HoneycodeClient::listTableRows(const ListTableRowsRequest &request)
{
    return qobject_cast<ListTableRowsResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * ListTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ListTables API allows you to retrieve a list of all the tables in a workbook.
 */
ListTablesResponse * HoneycodeClient::listTables(const ListTablesRequest &request)
{
    return qobject_cast<ListTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * QueryTableRowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The QueryTableRows API allows you to use a filter formula to query for specific rows in a table.
 */
QueryTableRowsResponse * HoneycodeClient::queryTableRows(const QueryTableRowsRequest &request)
{
    return qobject_cast<QueryTableRowsResponse *>(send(request));
}

/*!
 * Sends \a request to the HoneycodeClient service, and returns a pointer to an
 * StartTableDataImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The StartTableDataImportJob API allows you to start an import job on a table. This API will only return the id of the
 * job that was started. To find out the status of the import request, you need to call the DescribeTableDataImportJob API.
 */
StartTableDataImportJobResponse * HoneycodeClient::startTableDataImportJob(const StartTableDataImportJobRequest &request)
{
    return qobject_cast<StartTableDataImportJobResponse *>(send(request));
}

/*!
 * \class QtAws::Honeycode::HoneycodeClientPrivate
 * \brief The HoneycodeClientPrivate class provides private implementation for HoneycodeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a HoneycodeClientPrivate object with public implementation \a q.
 */
HoneycodeClientPrivate::HoneycodeClientPrivate(HoneycodeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Honeycode
} // namespace QtAws
