/*
    Copyright 2013-2018 Paul Colby

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

#include "importexportclient.h"
#include "importexportclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "getshippinglabelrequest.h"
#include "getshippinglabelresponse.h"
#include "getstatusrequest.h"
#include "getstatusresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "updatejobrequest.h"
#include "updatejobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ImportExport
 * \brief The QtAws::ImportExport contains stuff...
 *
 * \inmodule QtAwsImportExport
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::ImportExportClient
 * \brief The ImportExportClient class provides access to the AWS Import/Export service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 */

/*!
 * \brief Constructs a ImportExportClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ImportExportClient::ImportExportClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ImportExportClientPrivate(this), parent)
{
    Q_D(ImportExportClient);
    d->apiVersion = QStringLiteral("2010-06-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("importexport");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Import/Export");
    d->serviceName = QStringLiteral("importexport");
}

/*!
 * \overload ImportExportClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ImportExportClient::ImportExportClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ImportExportClientPrivate(this), parent)
{
    Q_D(ImportExportClient);
    d->apiVersion = QStringLiteral("2010-06-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("importexport");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Import/Export");
    d->serviceName = QStringLiteral("importexport");
}

/*!
 * Sends \a request to the ImportExportClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation cancels a specified job. Only the job owner can cancel it. The operation fails if the job has already
 */
CancelJobResponse * ImportExportClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ImportExportClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation initiates the process of scheduling an upload or download of your data. You include in the request a
 * manifest that describes the data transfer specifics. The response to the request includes a job ID, which you can use in
 * other operations, a signature that you use to identify your storage device, and the address where you should ship your
 */
CreateJobResponse * ImportExportClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ImportExportClient service, and returns a pointer to an
 * GetShippingLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetShippingLabelResponse * ImportExportClient::getShippingLabel(const GetShippingLabelRequest &request)
{
    return qobject_cast<GetShippingLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the ImportExportClient service, and returns a pointer to an
 * GetStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns information about a job, including where the job is in the processing pipeline, the status of the
 */
GetStatusResponse * ImportExportClient::getStatus(const GetStatusRequest &request)
{
    return qobject_cast<GetStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ImportExportClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns the jobs associated with the requester. AWS Import/Export lists the jobs in reverse chronological
 * order based on the date of creation. For example if Job Test1 was created 2009Dec30 and Test2 was created 2010Feb05, the
 */
ListJobsResponse * ImportExportClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ImportExportClient service, and returns a pointer to an
 * UpdateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You use this operation to change the parameters specified in the original manifest file by supplying a new manifest
 * file. The manifest file attached to this request replaces the original manifest file. You can only use the operation
 */
UpdateJobResponse * ImportExportClient::updateJob(const UpdateJobRequest &request)
{
    return qobject_cast<UpdateJobResponse *>(send(request));
}

/*!
 * \class QtAws::ImportExport::ImportExportClientPrivate
 * \brief The ImportExportClientPrivate class provides private implementation for ImportExportClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a ImportExportClientPrivate object with public implementation \a q.
 */
ImportExportClientPrivate::ImportExportClientPrivate(ImportExportClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV2();
}

} // namespace ImportExport
} // namespace QtAws
