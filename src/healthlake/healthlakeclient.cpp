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

#include "healthlakeclient.h"
#include "healthlakeclient_p.h"

#include "core/awssignaturev4.h"
#include "createfhirdatastorerequest.h"
#include "createfhirdatastoreresponse.h"
#include "deletefhirdatastorerequest.h"
#include "deletefhirdatastoreresponse.h"
#include "describefhirdatastorerequest.h"
#include "describefhirdatastoreresponse.h"
#include "describefhirexportjobrequest.h"
#include "describefhirexportjobresponse.h"
#include "describefhirimportjobrequest.h"
#include "describefhirimportjobresponse.h"
#include "listfhirdatastoresrequest.h"
#include "listfhirdatastoresresponse.h"
#include "startfhirexportjobrequest.h"
#include "startfhirexportjobresponse.h"
#include "startfhirimportjobrequest.h"
#include "startfhirimportjobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::HealthLake
 * \brief Contains classess for accessing Amazon HealthLake.
 *
 * \inmodule QtAwsHealthLake
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::HealthLakeClient
 * \brief The HealthLakeClient class provides access to the Amazon HealthLake service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 */

/*!
 * \brief Constructs a HealthLakeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
HealthLakeClient::HealthLakeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new HealthLakeClientPrivate(this), parent)
{
    Q_D(HealthLakeClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("healthlake");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon HealthLake");
    d->serviceName = QStringLiteral("healthlake");
}

/*!
 * \overload HealthLakeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
HealthLakeClient::HealthLakeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new HealthLakeClientPrivate(this), parent)
{
    Q_D(HealthLakeClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("healthlake");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon HealthLake");
    d->serviceName = QStringLiteral("healthlake");
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * CreateFHIRDatastoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Data Store that can ingest and export FHIR formatted
 */
CreateFHIRDatastoreResponse * HealthLakeClient::createFHIRDatastore(const CreateFHIRDatastoreRequest &request)
{
    return qobject_cast<CreateFHIRDatastoreResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * DeleteFHIRDatastoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Data Store.
 */
DeleteFHIRDatastoreResponse * HealthLakeClient::deleteFHIRDatastore(const DeleteFHIRDatastoreRequest &request)
{
    return qobject_cast<DeleteFHIRDatastoreResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * DescribeFHIRDatastoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with the FHIR Data Store, including the Data Store ID, Data Store ARN, Data Store name,
 * Data Store status, created at, Data Store type version, and Data Store
 */
DescribeFHIRDatastoreResponse * HealthLakeClient::describeFHIRDatastore(const DescribeFHIRDatastoreRequest &request)
{
    return qobject_cast<DescribeFHIRDatastoreResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * DescribeFHIRExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the properties of a FHIR export job, including the ID, ARN, name, and the status of the
 */
DescribeFHIRExportJobResponse * HealthLakeClient::describeFHIRExportJob(const DescribeFHIRExportJobRequest &request)
{
    return qobject_cast<DescribeFHIRExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * DescribeFHIRImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the properties of a FHIR import job, including the ID, ARN, name, and the status of the
 */
DescribeFHIRImportJobResponse * HealthLakeClient::describeFHIRImportJob(const DescribeFHIRImportJobRequest &request)
{
    return qobject_cast<DescribeFHIRImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * ListFHIRDatastoresResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all FHIR Data Stores that are in the user’s account, regardless of Data Store
 */
ListFHIRDatastoresResponse * HealthLakeClient::listFHIRDatastores(const ListFHIRDatastoresRequest &request)
{
    return qobject_cast<ListFHIRDatastoresResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * StartFHIRExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Begins a FHIR export
 */
StartFHIRExportJobResponse * HealthLakeClient::startFHIRExportJob(const StartFHIRExportJobRequest &request)
{
    return qobject_cast<StartFHIRExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * StartFHIRImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Begins a FHIR Import
 */
StartFHIRImportJobResponse * HealthLakeClient::startFHIRImportJob(const StartFHIRImportJobRequest &request)
{
    return qobject_cast<StartFHIRImportJobResponse *>(send(request));
}

/*!
 * \class QtAws::HealthLake::HealthLakeClientPrivate
 * \brief The HealthLakeClientPrivate class provides private implementation for HealthLakeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a HealthLakeClientPrivate object with public implementation \a q.
 */
HealthLakeClientPrivate::HealthLakeClientPrivate(HealthLakeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace HealthLake
} // namespace QtAws
