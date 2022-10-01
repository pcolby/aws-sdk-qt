// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
#include "listfhirexportjobsrequest.h"
#include "listfhirexportjobsresponse.h"
#include "listfhirimportjobsrequest.h"
#include "listfhirimportjobsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startfhirexportjobrequest.h"
#include "startfhirexportjobresponse.h"
#include "startfhirimportjobrequest.h"
#include "startfhirimportjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

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
 * Displays the properties of a FHIR import job, including the ID, ARN, name, and the status of the job.
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
 * ListFHIRExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all FHIR export jobs associated with an account and their statuses.
 */
ListFHIRExportJobsResponse * HealthLakeClient::listFHIRExportJobs(const ListFHIRExportJobsRequest &request)
{
    return qobject_cast<ListFHIRExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * ListFHIRImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all FHIR import jobs associated with an account and their statuses.
 */
ListFHIRImportJobsResponse * HealthLakeClient::listFHIRImportJobs(const ListFHIRImportJobsRequest &request)
{
    return qobject_cast<ListFHIRImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all existing tags associated with a Data Store.
 */
ListTagsForResourceResponse * HealthLakeClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
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
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a user specifed key and value tag to a Data Store.
 */
TagResourceResponse * HealthLakeClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthLakeClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a Data Store.
 */
UntagResourceResponse * HealthLakeClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
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
