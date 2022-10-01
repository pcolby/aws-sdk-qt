// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "comprehendmedicalclient.h"
#include "comprehendmedicalclient_p.h"

#include "core/awssignaturev4.h"
#include "describeentitiesdetectionv2jobrequest.h"
#include "describeentitiesdetectionv2jobresponse.h"
#include "describeicd10cminferencejobrequest.h"
#include "describeicd10cminferencejobresponse.h"
#include "describephidetectionjobrequest.h"
#include "describephidetectionjobresponse.h"
#include "describerxnorminferencejobrequest.h"
#include "describerxnorminferencejobresponse.h"
#include "describesnomedctinferencejobrequest.h"
#include "describesnomedctinferencejobresponse.h"
#include "detectentitiesrequest.h"
#include "detectentitiesresponse.h"
#include "detectentitiesv2request.h"
#include "detectentitiesv2response.h"
#include "detectphirequest.h"
#include "detectphiresponse.h"
#include "infericd10cmrequest.h"
#include "infericd10cmresponse.h"
#include "inferrxnormrequest.h"
#include "inferrxnormresponse.h"
#include "infersnomedctrequest.h"
#include "infersnomedctresponse.h"
#include "listentitiesdetectionv2jobsrequest.h"
#include "listentitiesdetectionv2jobsresponse.h"
#include "listicd10cminferencejobsrequest.h"
#include "listicd10cminferencejobsresponse.h"
#include "listphidetectionjobsrequest.h"
#include "listphidetectionjobsresponse.h"
#include "listrxnorminferencejobsrequest.h"
#include "listrxnorminferencejobsresponse.h"
#include "listsnomedctinferencejobsrequest.h"
#include "listsnomedctinferencejobsresponse.h"
#include "startentitiesdetectionv2jobrequest.h"
#include "startentitiesdetectionv2jobresponse.h"
#include "starticd10cminferencejobrequest.h"
#include "starticd10cminferencejobresponse.h"
#include "startphidetectionjobrequest.h"
#include "startphidetectionjobresponse.h"
#include "startrxnorminferencejobrequest.h"
#include "startrxnorminferencejobresponse.h"
#include "startsnomedctinferencejobrequest.h"
#include "startsnomedctinferencejobresponse.h"
#include "stopentitiesdetectionv2jobrequest.h"
#include "stopentitiesdetectionv2jobresponse.h"
#include "stopicd10cminferencejobrequest.h"
#include "stopicd10cminferencejobresponse.h"
#include "stopphidetectionjobrequest.h"
#include "stopphidetectionjobresponse.h"
#include "stoprxnorminferencejobrequest.h"
#include "stoprxnorminferencejobresponse.h"
#include "stopsnomedctinferencejobrequest.h"
#include "stopsnomedctinferencejobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ComprehendMedical
 * \brief Contains classess for accessing AWS Comprehend Medical.
 *
 * \inmodule QtAwsComprehendMedical
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalClient
 * \brief The ComprehendMedicalClient class provides access to the AWS Comprehend Medical service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 */

/*!
 * \brief Constructs a ComprehendMedicalClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ComprehendMedicalClient::ComprehendMedicalClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendMedicalClientPrivate(this), parent)
{
    Q_D(ComprehendMedicalClient);
    d->apiVersion = QStringLiteral("2018-10-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("comprehendmedical");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Comprehend Medical");
    d->serviceName = QStringLiteral("comprehendmedical");
}

/*!
 * \overload ComprehendMedicalClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ComprehendMedicalClient::ComprehendMedicalClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendMedicalClientPrivate(this), parent)
{
    Q_D(ComprehendMedicalClient);
    d->apiVersion = QStringLiteral("2018-10-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("comprehendmedical");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Comprehend Medical");
    d->serviceName = QStringLiteral("comprehendmedical");
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DescribeEntitiesDetectionV2JobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a medical entities detection job. Use this operation to get the status of a
 * detection
 */
DescribeEntitiesDetectionV2JobResponse * ComprehendMedicalClient::describeEntitiesDetectionV2Job(const DescribeEntitiesDetectionV2JobRequest &request)
{
    return qobject_cast<DescribeEntitiesDetectionV2JobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DescribeICD10CMInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with an InferICD10CM job. Use this operation to get the status of an inference
 */
DescribeICD10CMInferenceJobResponse * ComprehendMedicalClient::describeICD10CMInferenceJob(const DescribeICD10CMInferenceJobRequest &request)
{
    return qobject_cast<DescribeICD10CMInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DescribePHIDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a protected health information (PHI) detection job. Use this operation to get the
 * status of a detection
 */
DescribePHIDetectionJobResponse * ComprehendMedicalClient::describePHIDetectionJob(const DescribePHIDetectionJobRequest &request)
{
    return qobject_cast<DescribePHIDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DescribeRxNormInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with an InferRxNorm job. Use this operation to get the status of an inference
 */
DescribeRxNormInferenceJobResponse * ComprehendMedicalClient::describeRxNormInferenceJob(const DescribeRxNormInferenceJobRequest &request)
{
    return qobject_cast<DescribeRxNormInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DescribeSNOMEDCTInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with an InferSNOMEDCT job. Use this operation to get the status of an inference job.
 */
DescribeSNOMEDCTInferenceJobResponse * ComprehendMedicalClient::describeSNOMEDCTInferenceJob(const DescribeSNOMEDCTInferenceJobRequest &request)
{
    return qobject_cast<DescribeSNOMEDCTInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DetectEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>DetectEntities</code> operation is deprecated. You should use the <a>DetectEntitiesV2</a> operation
 *
 * instead>
 *
 * Inspects the clinical text for a variety of medical entities and returns specific information about them such as entity
 * category, location, and confidence score on that information
 */
DetectEntitiesResponse * ComprehendMedicalClient::detectEntities(const DetectEntitiesRequest &request)
{
    return qobject_cast<DetectEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DetectEntitiesV2Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects the clinical text for a variety of medical entities and returns specific information about them such as entity
 * category, location, and confidence score on that information. Amazon Comprehend Medical only detects medical entities in
 * English language
 *
 * texts>
 *
 * The <code>DetectEntitiesV2</code> operation replaces the <a>DetectEntities</a> operation. This new action uses a
 * different model for determining the entities in your medical text and changes the way that some entities are returned in
 * the output. You should use the <code>DetectEntitiesV2</code> operation in all new
 *
 * applications>
 *
 * The <code>DetectEntitiesV2</code> operation returns the <code>Acuity</code> and <code>Direction</code> entities as
 * attributes instead of types.
 */
DetectEntitiesV2Response * ComprehendMedicalClient::detectEntitiesV2(const DetectEntitiesV2Request &request)
{
    return qobject_cast<DetectEntitiesV2Response *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DetectPHIResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects the clinical text for protected health information (PHI) entities and returns the entity category, location,
 * and confidence score for each entity. Amazon Comprehend Medical only detects entities in English language
 */
DetectPHIResponse * ComprehendMedicalClient::detectPHI(const DetectPHIRequest &request)
{
    return qobject_cast<DetectPHIResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * InferICD10CMResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * InferICD10CM detects medical conditions as entities listed in a patient record and links those entities to normalized
 * concept identifiers in the ICD-10-CM knowledge base from the Centers for Disease Control. Amazon Comprehend Medical only
 * detects medical entities in English language texts.
 */
InferICD10CMResponse * ComprehendMedicalClient::inferICD10CM(const InferICD10CMRequest &request)
{
    return qobject_cast<InferICD10CMResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * InferRxNormResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * InferRxNorm detects medications as entities listed in a patient record and links to the normalized concept identifiers
 * in the RxNorm database from the National Library of Medicine. Amazon Comprehend Medical only detects medical entities in
 * English language texts.
 */
InferRxNormResponse * ComprehendMedicalClient::inferRxNorm(const InferRxNormRequest &request)
{
    return qobject_cast<InferRxNormResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * InferSNOMEDCTResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * InferSNOMEDCT detects possible medical concepts as entities and links them to codes from the Systematized Nomenclature
 * of Medicine, Clinical Terms (SNOMED-CT)
 */
InferSNOMEDCTResponse * ComprehendMedicalClient::inferSNOMEDCT(const InferSNOMEDCTRequest &request)
{
    return qobject_cast<InferSNOMEDCTResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * ListEntitiesDetectionV2JobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of medical entity detection jobs that you have
 */
ListEntitiesDetectionV2JobsResponse * ComprehendMedicalClient::listEntitiesDetectionV2Jobs(const ListEntitiesDetectionV2JobsRequest &request)
{
    return qobject_cast<ListEntitiesDetectionV2JobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * ListICD10CMInferenceJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of InferICD10CM jobs that you have
 */
ListICD10CMInferenceJobsResponse * ComprehendMedicalClient::listICD10CMInferenceJobs(const ListICD10CMInferenceJobsRequest &request)
{
    return qobject_cast<ListICD10CMInferenceJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * ListPHIDetectionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of protected health information (PHI) detection jobs that you have
 */
ListPHIDetectionJobsResponse * ComprehendMedicalClient::listPHIDetectionJobs(const ListPHIDetectionJobsRequest &request)
{
    return qobject_cast<ListPHIDetectionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * ListRxNormInferenceJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of InferRxNorm jobs that you have
 */
ListRxNormInferenceJobsResponse * ComprehendMedicalClient::listRxNormInferenceJobs(const ListRxNormInferenceJobsRequest &request)
{
    return qobject_cast<ListRxNormInferenceJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * ListSNOMEDCTInferenceJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of InferSNOMEDCT jobs a user has submitted.
 */
ListSNOMEDCTInferenceJobsResponse * ComprehendMedicalClient::listSNOMEDCTInferenceJobs(const ListSNOMEDCTInferenceJobsRequest &request)
{
    return qobject_cast<ListSNOMEDCTInferenceJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StartEntitiesDetectionV2JobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous medical entity detection job for a collection of documents. Use the
 * <code>DescribeEntitiesDetectionV2Job</code> operation to track the status of a
 */
StartEntitiesDetectionV2JobResponse * ComprehendMedicalClient::startEntitiesDetectionV2Job(const StartEntitiesDetectionV2JobRequest &request)
{
    return qobject_cast<StartEntitiesDetectionV2JobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StartICD10CMInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous job to detect medical conditions and link them to the ICD-10-CM ontology. Use the
 * <code>DescribeICD10CMInferenceJob</code> operation to track the status of a
 */
StartICD10CMInferenceJobResponse * ComprehendMedicalClient::startICD10CMInferenceJob(const StartICD10CMInferenceJobRequest &request)
{
    return qobject_cast<StartICD10CMInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StartPHIDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous job to detect protected health information (PHI). Use the <code>DescribePHIDetectionJob</code>
 * operation to track the status of a
 */
StartPHIDetectionJobResponse * ComprehendMedicalClient::startPHIDetectionJob(const StartPHIDetectionJobRequest &request)
{
    return qobject_cast<StartPHIDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StartRxNormInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous job to detect medication entities and link them to the RxNorm ontology. Use the
 * <code>DescribeRxNormInferenceJob</code> operation to track the status of a
 */
StartRxNormInferenceJobResponse * ComprehendMedicalClient::startRxNormInferenceJob(const StartRxNormInferenceJobRequest &request)
{
    return qobject_cast<StartRxNormInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StartSNOMEDCTInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous job to detect medical concepts and link them to the SNOMED-CT ontology. Use the
 * DescribeSNOMEDCTInferenceJob operation to track the status of a job.
 */
StartSNOMEDCTInferenceJobResponse * ComprehendMedicalClient::startSNOMEDCTInferenceJob(const StartSNOMEDCTInferenceJobRequest &request)
{
    return qobject_cast<StartSNOMEDCTInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StopEntitiesDetectionV2JobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a medical entities detection job in
 */
StopEntitiesDetectionV2JobResponse * ComprehendMedicalClient::stopEntitiesDetectionV2Job(const StopEntitiesDetectionV2JobRequest &request)
{
    return qobject_cast<StopEntitiesDetectionV2JobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StopICD10CMInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an InferICD10CM inference job in
 */
StopICD10CMInferenceJobResponse * ComprehendMedicalClient::stopICD10CMInferenceJob(const StopICD10CMInferenceJobRequest &request)
{
    return qobject_cast<StopICD10CMInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StopPHIDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a protected health information (PHI) detection job in
 */
StopPHIDetectionJobResponse * ComprehendMedicalClient::stopPHIDetectionJob(const StopPHIDetectionJobRequest &request)
{
    return qobject_cast<StopPHIDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StopRxNormInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an InferRxNorm inference job in
 */
StopRxNormInferenceJobResponse * ComprehendMedicalClient::stopRxNormInferenceJob(const StopRxNormInferenceJobRequest &request)
{
    return qobject_cast<StopRxNormInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * StopSNOMEDCTInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an InferSNOMEDCT inference job in progress.
 */
StopSNOMEDCTInferenceJobResponse * ComprehendMedicalClient::stopSNOMEDCTInferenceJob(const StopSNOMEDCTInferenceJobRequest &request)
{
    return qobject_cast<StopSNOMEDCTInferenceJobResponse *>(send(request));
}

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalClientPrivate
 * \brief The ComprehendMedicalClientPrivate class provides private implementation for ComprehendMedicalClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ComprehendMedicalClientPrivate object with public implementation \a q.
 */
ComprehendMedicalClientPrivate::ComprehendMedicalClientPrivate(ComprehendMedicalClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ComprehendMedical
} // namespace QtAws
