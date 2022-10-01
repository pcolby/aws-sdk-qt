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

#include "frauddetectorclient.h"
#include "frauddetectorclient_p.h"

#include "core/awssignaturev4.h"
#include "batchcreatevariablerequest.h"
#include "batchcreatevariableresponse.h"
#include "batchgetvariablerequest.h"
#include "batchgetvariableresponse.h"
#include "cancelbatchimportjobrequest.h"
#include "cancelbatchimportjobresponse.h"
#include "cancelbatchpredictionjobrequest.h"
#include "cancelbatchpredictionjobresponse.h"
#include "createbatchimportjobrequest.h"
#include "createbatchimportjobresponse.h"
#include "createbatchpredictionjobrequest.h"
#include "createbatchpredictionjobresponse.h"
#include "createdetectorversionrequest.h"
#include "createdetectorversionresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "createmodelversionrequest.h"
#include "createmodelversionresponse.h"
#include "createrulerequest.h"
#include "createruleresponse.h"
#include "createvariablerequest.h"
#include "createvariableresponse.h"
#include "deletebatchimportjobrequest.h"
#include "deletebatchimportjobresponse.h"
#include "deletebatchpredictionjobrequest.h"
#include "deletebatchpredictionjobresponse.h"
#include "deletedetectorrequest.h"
#include "deletedetectorresponse.h"
#include "deletedetectorversionrequest.h"
#include "deletedetectorversionresponse.h"
#include "deleteentitytyperequest.h"
#include "deleteentitytyperesponse.h"
#include "deleteeventrequest.h"
#include "deleteeventresponse.h"
#include "deleteeventtyperequest.h"
#include "deleteeventtyperesponse.h"
#include "deleteeventsbyeventtyperequest.h"
#include "deleteeventsbyeventtyperesponse.h"
#include "deleteexternalmodelrequest.h"
#include "deleteexternalmodelresponse.h"
#include "deletelabelrequest.h"
#include "deletelabelresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "deletemodelversionrequest.h"
#include "deletemodelversionresponse.h"
#include "deleteoutcomerequest.h"
#include "deleteoutcomeresponse.h"
#include "deleterulerequest.h"
#include "deleteruleresponse.h"
#include "deletevariablerequest.h"
#include "deletevariableresponse.h"
#include "describedetectorrequest.h"
#include "describedetectorresponse.h"
#include "describemodelversionsrequest.h"
#include "describemodelversionsresponse.h"
#include "getbatchimportjobsrequest.h"
#include "getbatchimportjobsresponse.h"
#include "getbatchpredictionjobsrequest.h"
#include "getbatchpredictionjobsresponse.h"
#include "getdeleteeventsbyeventtypestatusrequest.h"
#include "getdeleteeventsbyeventtypestatusresponse.h"
#include "getdetectorversionrequest.h"
#include "getdetectorversionresponse.h"
#include "getdetectorsrequest.h"
#include "getdetectorsresponse.h"
#include "getentitytypesrequest.h"
#include "getentitytypesresponse.h"
#include "geteventrequest.h"
#include "geteventresponse.h"
#include "geteventpredictionrequest.h"
#include "geteventpredictionresponse.h"
#include "geteventpredictionmetadatarequest.h"
#include "geteventpredictionmetadataresponse.h"
#include "geteventtypesrequest.h"
#include "geteventtypesresponse.h"
#include "getexternalmodelsrequest.h"
#include "getexternalmodelsresponse.h"
#include "getkmsencryptionkeyrequest.h"
#include "getkmsencryptionkeyresponse.h"
#include "getlabelsrequest.h"
#include "getlabelsresponse.h"
#include "getmodelversionrequest.h"
#include "getmodelversionresponse.h"
#include "getmodelsrequest.h"
#include "getmodelsresponse.h"
#include "getoutcomesrequest.h"
#include "getoutcomesresponse.h"
#include "getrulesrequest.h"
#include "getrulesresponse.h"
#include "getvariablesrequest.h"
#include "getvariablesresponse.h"
#include "listeventpredictionsrequest.h"
#include "listeventpredictionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putdetectorrequest.h"
#include "putdetectorresponse.h"
#include "putentitytyperequest.h"
#include "putentitytyperesponse.h"
#include "puteventtyperequest.h"
#include "puteventtyperesponse.h"
#include "putexternalmodelrequest.h"
#include "putexternalmodelresponse.h"
#include "putkmsencryptionkeyrequest.h"
#include "putkmsencryptionkeyresponse.h"
#include "putlabelrequest.h"
#include "putlabelresponse.h"
#include "putoutcomerequest.h"
#include "putoutcomeresponse.h"
#include "sendeventrequest.h"
#include "sendeventresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedetectorversionrequest.h"
#include "updatedetectorversionresponse.h"
#include "updatedetectorversionmetadatarequest.h"
#include "updatedetectorversionmetadataresponse.h"
#include "updatedetectorversionstatusrequest.h"
#include "updatedetectorversionstatusresponse.h"
#include "updateeventlabelrequest.h"
#include "updateeventlabelresponse.h"
#include "updatemodelrequest.h"
#include "updatemodelresponse.h"
#include "updatemodelversionrequest.h"
#include "updatemodelversionresponse.h"
#include "updatemodelversionstatusrequest.h"
#include "updatemodelversionstatusresponse.h"
#include "updaterulemetadatarequest.h"
#include "updaterulemetadataresponse.h"
#include "updateruleversionrequest.h"
#include "updateruleversionresponse.h"
#include "updatevariablerequest.h"
#include "updatevariableresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::FraudDetector
 * \brief Contains classess for accessing Amazon Fraud Detector.
 *
 * \inmodule QtAwsFraudDetector
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::FraudDetectorClient
 * \brief The FraudDetectorClient class provides access to the Amazon Fraud Detector service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 * 
 *  Guide</a>>
 * 
 *  We provide the Query API as well as AWS software development kits (SDK) for Amazon Fraud Detector in Java and Python
 *  programming
 * 
 *  languages>
 * 
 *  The Amazon Fraud Detector Query API provides HTTPS requests that use the HTTP verb GET or POST and a Query parameter
 *  <code>Action</code>. AWS SDK provides libraries, sample code, tutorials, and other resources for software developers who
 *  prefer to build applications using language-specific APIs instead of submitting a request over HTTP or HTTPS. These
 *  libraries provide basic functions that automatically take care of tasks such as cryptographically signing your requests,
 *  retrying requests, and handling error responses, so that it is easier for you to get started. For more information about
 *  the AWS SDKs, see <a href="https://docs.aws.amazon.com/https:/aws.amazon.com/tools/">Tools to build on AWS</a>.
 */

/*!
 * \brief Constructs a FraudDetectorClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FraudDetectorClient::FraudDetectorClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FraudDetectorClientPrivate(this), parent)
{
    Q_D(FraudDetectorClient);
    d->apiVersion = QStringLiteral("2019-11-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("frauddetector");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Fraud Detector");
    d->serviceName = QStringLiteral("frauddetector");
}

/*!
 * \overload FraudDetectorClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
FraudDetectorClient::FraudDetectorClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FraudDetectorClientPrivate(this), parent)
{
    Q_D(FraudDetectorClient);
    d->apiVersion = QStringLiteral("2019-11-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("frauddetector");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Fraud Detector");
    d->serviceName = QStringLiteral("frauddetector");
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * BatchCreateVariableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a batch of
 */
BatchCreateVariableResponse * FraudDetectorClient::batchCreateVariable(const BatchCreateVariableRequest &request)
{
    return qobject_cast<BatchCreateVariableResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * BatchGetVariableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a batch of
 */
BatchGetVariableResponse * FraudDetectorClient::batchGetVariable(const BatchGetVariableRequest &request)
{
    return qobject_cast<BatchGetVariableResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CancelBatchImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an in-progress batch import
 */
CancelBatchImportJobResponse * FraudDetectorClient::cancelBatchImportJob(const CancelBatchImportJobRequest &request)
{
    return qobject_cast<CancelBatchImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CancelBatchPredictionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified batch prediction
 */
CancelBatchPredictionJobResponse * FraudDetectorClient::cancelBatchPredictionJob(const CancelBatchPredictionJobRequest &request)
{
    return qobject_cast<CancelBatchPredictionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CreateBatchImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a batch import job.
 */
CreateBatchImportJobResponse * FraudDetectorClient::createBatchImportJob(const CreateBatchImportJobRequest &request)
{
    return qobject_cast<CreateBatchImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CreateBatchPredictionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a batch prediction
 */
CreateBatchPredictionJobResponse * FraudDetectorClient::createBatchPredictionJob(const CreateBatchPredictionJobRequest &request)
{
    return qobject_cast<CreateBatchPredictionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CreateDetectorVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a detector version. The detector version starts in a <code>DRAFT</code>
 */
CreateDetectorVersionResponse * FraudDetectorClient::createDetectorVersion(const CreateDetectorVersionRequest &request)
{
    return qobject_cast<CreateDetectorVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a model using the specified model
 */
CreateModelResponse * FraudDetectorClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CreateModelVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a version of the model using the specified model type and model id.
 */
CreateModelVersionResponse * FraudDetectorClient::createModelVersion(const CreateModelVersionRequest &request)
{
    return qobject_cast<CreateModelVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CreateRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a rule for use with the specified detector.
 */
CreateRuleResponse * FraudDetectorClient::createRule(const CreateRuleRequest &request)
{
    return qobject_cast<CreateRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * CreateVariableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateVariableResponse * FraudDetectorClient::createVariable(const CreateVariableRequest &request)
{
    return qobject_cast<CreateVariableResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteBatchImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified batch import job ID record. This action does not delete the data that was batch imported.
 */
DeleteBatchImportJobResponse * FraudDetectorClient::deleteBatchImportJob(const DeleteBatchImportJobRequest &request)
{
    return qobject_cast<DeleteBatchImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteBatchPredictionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a batch prediction
 */
DeleteBatchPredictionJobResponse * FraudDetectorClient::deleteBatchPredictionJob(const DeleteBatchPredictionJobRequest &request)
{
    return qobject_cast<DeleteBatchPredictionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the detector. Before deleting a detector, you must first delete all detector versions and rule versions
 * associated with the
 *
 * detector>
 *
 * When you delete a detector, Amazon Fraud Detector permanently deletes the detector and the data is no longer stored in
 * Amazon Fraud
 */
DeleteDetectorResponse * FraudDetectorClient::deleteDetector(const DeleteDetectorRequest &request)
{
    return qobject_cast<DeleteDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteDetectorVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the detector version. You cannot delete detector versions that are in <code>ACTIVE</code>
 *
 * status>
 *
 * When you delete a detector version, Amazon Fraud Detector permanently deletes the detector and the data is no longer
 * stored in Amazon Fraud
 */
DeleteDetectorVersionResponse * FraudDetectorClient::deleteDetectorVersion(const DeleteDetectorVersionRequest &request)
{
    return qobject_cast<DeleteDetectorVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteEntityTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an entity
 *
 * type>
 *
 * You cannot delete an entity type that is included in an event
 *
 * type>
 *
 * When you delete an entity type, Amazon Fraud Detector permanently deletes that entity type and the data is no longer
 * stored in Amazon Fraud
 */
DeleteEntityTypeResponse * FraudDetectorClient::deleteEntityType(const DeleteEntityTypeRequest &request)
{
    return qobject_cast<DeleteEntityTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * event>
 *
 * When you delete an event, Amazon Fraud Detector permanently deletes that event and the event data is no longer stored in
 * Amazon Fraud
 */
DeleteEventResponse * FraudDetectorClient::deleteEvent(const DeleteEventRequest &request)
{
    return qobject_cast<DeleteEventResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteEventTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an event
 *
 * type>
 *
 * You cannot delete an event type that is used in a detector or a
 *
 * model>
 *
 * When you delete an event type, Amazon Fraud Detector permanently deletes that event type and the data is no longer
 * stored in Amazon Fraud
 */
DeleteEventTypeResponse * FraudDetectorClient::deleteEventType(const DeleteEventTypeRequest &request)
{
    return qobject_cast<DeleteEventTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteEventsByEventTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all events of a particular event
 */
DeleteEventsByEventTypeResponse * FraudDetectorClient::deleteEventsByEventType(const DeleteEventsByEventTypeRequest &request)
{
    return qobject_cast<DeleteEventsByEventTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteExternalModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a SageMaker model from Amazon Fraud
 *
 * Detector>
 *
 * You can remove an Amazon SageMaker model if it is not associated with a detector version. Removing a SageMaker model
 * disconnects it from Amazon Fraud Detector, but the model remains available in
 */
DeleteExternalModelResponse * FraudDetectorClient::deleteExternalModel(const DeleteExternalModelRequest &request)
{
    return qobject_cast<DeleteExternalModelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * label>
 *
 * You cannot delete labels that are included in an event type in Amazon Fraud
 *
 * Detector>
 *
 * You cannot delete a label assigned to an event ID. You must first delete the relevant event
 *
 * ID>
 *
 * When you delete a label, Amazon Fraud Detector permanently deletes that label and the data is no longer stored in Amazon
 * Fraud
 */
DeleteLabelResponse * FraudDetectorClient::deleteLabel(const DeleteLabelRequest &request)
{
    return qobject_cast<DeleteLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * model>
 *
 * You can delete models and model versions in Amazon Fraud Detector, provided that they are not associated with a detector
 *
 * version>
 *
 * When you delete a model, Amazon Fraud Detector permanently deletes that model and the data is no longer stored in Amazon
 * Fraud
 */
DeleteModelResponse * FraudDetectorClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteModelVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a model
 *
 * version>
 *
 * You can delete models and model versions in Amazon Fraud Detector, provided that they are not associated with a detector
 *
 * version>
 *
 * When you delete a model version, Amazon Fraud Detector permanently deletes that model version and the data is no longer
 * stored in Amazon Fraud
 */
DeleteModelVersionResponse * FraudDetectorClient::deleteModelVersion(const DeleteModelVersionRequest &request)
{
    return qobject_cast<DeleteModelVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteOutcomeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 *
 * outcome>
 *
 * You cannot delete an outcome that is used in a rule
 *
 * version>
 *
 * When you delete an outcome, Amazon Fraud Detector permanently deletes that outcome and the data is no longer stored in
 * Amazon Fraud
 */
DeleteOutcomeResponse * FraudDetectorClient::deleteOutcome(const DeleteOutcomeRequest &request)
{
    return qobject_cast<DeleteOutcomeResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the rule. You cannot delete a rule if it is used by an <code>ACTIVE</code> or <code>INACTIVE</code> detector
 *
 * version>
 *
 * When you delete a rule, Amazon Fraud Detector permanently deletes that rule and the data is no longer stored in Amazon
 * Fraud
 */
DeleteRuleResponse * FraudDetectorClient::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DeleteVariableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * variable>
 *
 * You can't delete variables that are included in an event type in Amazon Fraud
 *
 * Detector>
 *
 * Amazon Fraud Detector automatically deletes model output variables and SageMaker model output variables when you delete
 * the model. You can't delete these variables
 *
 * manually>
 *
 * When you delete a variable, Amazon Fraud Detector permanently deletes that variable and the data is no longer stored in
 * Amazon Fraud
 */
DeleteVariableResponse * FraudDetectorClient::deleteVariable(const DeleteVariableRequest &request)
{
    return qobject_cast<DeleteVariableResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DescribeDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all versions for a specified
 */
DescribeDetectorResponse * FraudDetectorClient::describeDetector(const DescribeDetectorRequest &request)
{
    return qobject_cast<DescribeDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * DescribeModelVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all of the model versions for the specified model type or for the specified model type and model ID. You can also
 * get details for a single, specified model version.
 */
DescribeModelVersionsResponse * FraudDetectorClient::describeModelVersions(const DescribeModelVersionsRequest &request)
{
    return qobject_cast<DescribeModelVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetBatchImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all batch import jobs or a specific job of the specified ID. This is a paginated API. If you provide a null
 * <code>maxResults</code>, this action retrieves a maximum of 50 records per page. If you provide a
 * <code>maxResults</code>, the value must be between 1 and 50. To get the next page results, provide the pagination token
 * from the <code>GetBatchImportJobsResponse</code> as part of your request. A null pagination token fetches the records
 * from the
 */
GetBatchImportJobsResponse * FraudDetectorClient::getBatchImportJobs(const GetBatchImportJobsRequest &request)
{
    return qobject_cast<GetBatchImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetBatchPredictionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all batch prediction jobs or a specific job if you specify a job ID. This is a paginated API. If you provide a null
 * maxResults, this action retrieves a maximum of 50 records per page. If you provide a maxResults, the value must be
 * between 1 and 50. To get the next page results, provide the pagination token from the GetBatchPredictionJobsResponse as
 * part of your request. A null pagination token fetches the records from the
 */
GetBatchPredictionJobsResponse * FraudDetectorClient::getBatchPredictionJobs(const GetBatchPredictionJobsRequest &request)
{
    return qobject_cast<GetBatchPredictionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetDeleteEventsByEventTypeStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status of a <code>DeleteEventsByEventType</code>
 */
GetDeleteEventsByEventTypeStatusResponse * FraudDetectorClient::getDeleteEventsByEventTypeStatus(const GetDeleteEventsByEventTypeStatusRequest &request)
{
    return qobject_cast<GetDeleteEventsByEventTypeStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetDetectorVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a particular detector version.
 */
GetDetectorVersionResponse * FraudDetectorClient::getDetectorVersion(const GetDetectorVersionRequest &request)
{
    return qobject_cast<GetDetectorVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetDetectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all detectors or a single detector if a <code>detectorId</code> is specified. This is a paginated API. If you
 * provide a null <code>maxResults</code>, this action retrieves a maximum of 10 records per page. If you provide a
 * <code>maxResults</code>, the value must be between 5 and 10. To get the next page results, provide the pagination token
 * from the <code>GetDetectorsResponse</code> as part of your request. A null pagination token fetches the records from the
 * beginning.
 */
GetDetectorsResponse * FraudDetectorClient::getDetectors(const GetDetectorsRequest &request)
{
    return qobject_cast<GetDetectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetEntityTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all entity types or a specific entity type if a name is specified. This is a paginated API. If you provide a null
 * <code>maxResults</code>, this action retrieves a maximum of 10 records per page. If you provide a
 * <code>maxResults</code>, the value must be between 5 and 10. To get the next page results, provide the pagination token
 * from the <code>GetEntityTypesResponse</code> as part of your request. A null pagination token fetches the records from
 * the beginning.
 */
GetEntityTypesResponse * FraudDetectorClient::getEntityTypes(const GetEntityTypesRequest &request)
{
    return qobject_cast<GetEntityTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details of events stored with Amazon Fraud Detector. This action does not retrieve prediction
 */
GetEventResponse * FraudDetectorClient::getEvent(const GetEventRequest &request)
{
    return qobject_cast<GetEventResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetEventPredictionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Evaluates an event against a detector version. If a version ID is not provided, the detector’s (<code>ACTIVE</code>)
 * version is
 */
GetEventPredictionResponse * FraudDetectorClient::getEventPrediction(const GetEventPredictionRequest &request)
{
    return qobject_cast<GetEventPredictionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetEventPredictionMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details of the past fraud predictions for the specified event ID, event type, detector ID, and detector version ID
 * that was generated in the specified time period.
 */
GetEventPredictionMetadataResponse * FraudDetectorClient::getEventPredictionMetadata(const GetEventPredictionMetadataRequest &request)
{
    return qobject_cast<GetEventPredictionMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetEventTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all event types or a specific event type if name is provided. This is a paginated API. If you provide a null
 * <code>maxResults</code>, this action retrieves a maximum of 10 records per page. If you provide a
 * <code>maxResults</code>, the value must be between 5 and 10. To get the next page results, provide the pagination token
 * from the <code>GetEventTypesResponse</code> as part of your request. A null pagination token fetches the records from
 * the beginning.
 */
GetEventTypesResponse * FraudDetectorClient::getEventTypes(const GetEventTypesRequest &request)
{
    return qobject_cast<GetEventTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetExternalModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details for one or more Amazon SageMaker models that have been imported into the service. This is a paginated
 * API. If you provide a null <code>maxResults</code>, this actions retrieves a maximum of 10 records per page. If you
 * provide a <code>maxResults</code>, the value must be between 5 and 10. To get the next page results, provide the
 * pagination token from the <code>GetExternalModelsResult</code> as part of your request. A null pagination token fetches
 * the records from the beginning.
 */
GetExternalModelsResponse * FraudDetectorClient::getExternalModels(const GetExternalModelsRequest &request)
{
    return qobject_cast<GetExternalModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetKMSEncryptionKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the encryption key if a KMS key has been specified to be used to encrypt content in Amazon Fraud
 */
GetKMSEncryptionKeyResponse * FraudDetectorClient::getKMSEncryptionKey(const GetKMSEncryptionKeyRequest &request)
{
    return qobject_cast<GetKMSEncryptionKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all labels or a specific label if name is provided. This is a paginated API. If you provide a null
 * <code>maxResults</code>, this action retrieves a maximum of 50 records per page. If you provide a
 * <code>maxResults</code>, the value must be between 10 and 50. To get the next page results, provide the pagination token
 * from the <code>GetGetLabelsResponse</code> as part of your request. A null pagination token fetches the records from the
 * beginning.
 */
GetLabelsResponse * FraudDetectorClient::getLabels(const GetLabelsRequest &request)
{
    return qobject_cast<GetLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetModelVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of the specified model
 */
GetModelVersionResponse * FraudDetectorClient::getModelVersion(const GetModelVersionRequest &request)
{
    return qobject_cast<GetModelVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets one or more models. Gets all models for the Amazon Web Services account if no model type and no model id provided.
 * Gets all models for the Amazon Web Services account and model type, if the model type is specified but model id is not
 * provided. Gets a specific model if (model type, model id) tuple is specified.
 *
 * </p
 *
 * This is a paginated API. If you provide a null <code>maxResults</code>, this action retrieves a maximum of 10 records
 * per page. If you provide a <code>maxResults</code>, the value must be between 1 and 10. To get the next page results,
 * provide the pagination token from the response as part of your request. A null pagination token fetches the records from
 * the
 */
GetModelsResponse * FraudDetectorClient::getModels(const GetModelsRequest &request)
{
    return qobject_cast<GetModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetOutcomesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets one or more outcomes. This is a paginated API. If you provide a null <code>maxResults</code>, this actions
 * retrieves a maximum of 100 records per page. If you provide a <code>maxResults</code>, the value must be between 50 and
 * 100. To get the next page results, provide the pagination token from the <code>GetOutcomesResult</code> as part of your
 * request. A null pagination token fetches the records from the beginning.
 */
GetOutcomesResponse * FraudDetectorClient::getOutcomes(const GetOutcomesRequest &request)
{
    return qobject_cast<GetOutcomesResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get all rules for a detector (paginated) if <code>ruleId</code> and <code>ruleVersion</code> are not specified. Gets all
 * rules for the detector and the <code>ruleId</code> if present (paginated). Gets a specific rule if both the
 * <code>ruleId</code> and the <code>ruleVersion</code> are
 *
 * specified>
 *
 * This is a paginated API. Providing null maxResults results in retrieving maximum of 100 records per page. If you provide
 * maxResults the value must be between 50 and 100. To get the next page result, a provide a pagination token from
 * GetRulesResult as part of your request. Null pagination token fetches the records from the
 */
GetRulesResponse * FraudDetectorClient::getRules(const GetRulesRequest &request)
{
    return qobject_cast<GetRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * GetVariablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all of the variables or the specific variable. This is a paginated API. Providing null <code>maxSizePerPage</code>
 * results in retrieving maximum of 100 records per page. If you provide <code>maxSizePerPage</code> the value must be
 * between 50 and 100. To get the next page result, a provide a pagination token from <code>GetVariablesResult</code> as
 * part of your request. Null pagination token fetches the records from the beginning.
 */
GetVariablesResponse * FraudDetectorClient::getVariables(const GetVariablesRequest &request)
{
    return qobject_cast<GetVariablesResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * ListEventPredictionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of past predictions. The list can be filtered by detector ID, detector version ID, event ID, event type, or
 * by specifying a time period. If filter is not specified, the most recent prediction is
 *
 * returned>
 *
 * For example, the following filter lists all past predictions for <code>xyz</code> event type - <code>{ "eventType":{
 * "value": "xyz" }” } </code>
 *
 * </p
 *
 * This is a paginated API. If you provide a null <code>maxResults</code>, this action will retrieve a maximum of 10
 * records per page. If you provide a <code>maxResults</code>, the value must be between 50 and 100. To get the next page
 * results, provide the <code>nextToken</code> from the response as part of your request. A null <code>nextToken</code>
 * fetches the records from the beginning.
 */
ListEventPredictionsResponse * FraudDetectorClient::listEventPredictions(const ListEventPredictionsRequest &request)
{
    return qobject_cast<ListEventPredictionsResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags associated with the resource. This is a paginated API. To get the next page results, provide the
 * pagination token from the response as part of your request. A null pagination token fetches the records from the
 * beginning.
 */
ListTagsForResourceResponse * FraudDetectorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * PutDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a detector.
 */
PutDetectorResponse * FraudDetectorClient::putDetector(const PutDetectorRequest &request)
{
    return qobject_cast<PutDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * PutEntityTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an entity type. An entity represents who is performing the event. As part of a fraud prediction, you
 * pass the entity ID to indicate the specific entity who performed the event. An entity type classifies the entity.
 * Example classifications include customer, merchant, or
 */
PutEntityTypeResponse * FraudDetectorClient::putEntityType(const PutEntityTypeRequest &request)
{
    return qobject_cast<PutEntityTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * PutEventTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an event type. An event is a business activity that is evaluated for fraud risk. With Amazon Fraud
 * Detector, you generate fraud predictions for events. An event type defines the structure for an event sent to Amazon
 * Fraud Detector. This includes the variables sent as part of the event, the entity performing the event (such as a
 * customer), and the labels that classify the event. Example event types include online payment transactions, account
 * registrations, and
 */
PutEventTypeResponse * FraudDetectorClient::putEventType(const PutEventTypeRequest &request)
{
    return qobject_cast<PutEventTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * PutExternalModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an Amazon SageMaker model endpoint. You can also use this action to update the configuration of the
 * model endpoint, including the IAM role and/or the mapped variables.
 */
PutExternalModelResponse * FraudDetectorClient::putExternalModel(const PutExternalModelRequest &request)
{
    return qobject_cast<PutExternalModelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * PutKMSEncryptionKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies the KMS key to be used to encrypt content in Amazon Fraud
 */
PutKMSEncryptionKeyResponse * FraudDetectorClient::putKMSEncryptionKey(const PutKMSEncryptionKeyRequest &request)
{
    return qobject_cast<PutKMSEncryptionKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * PutLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates label. A label classifies an event as fraudulent or legitimate. Labels are associated with event
 * types and used to train supervised machine learning models in Amazon Fraud Detector.
 */
PutLabelResponse * FraudDetectorClient::putLabel(const PutLabelRequest &request)
{
    return qobject_cast<PutLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * PutOutcomeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an outcome.
 */
PutOutcomeResponse * FraudDetectorClient::putOutcome(const PutOutcomeRequest &request)
{
    return qobject_cast<PutOutcomeResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * SendEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores events in Amazon Fraud Detector without generating fraud predictions for those events. For example, you can use
 * <code>SendEvent</code> to upload a historical dataset, which you can then later use to train a
 */
SendEventResponse * FraudDetectorClient::sendEvent(const SendEventRequest &request)
{
    return qobject_cast<SendEventResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns tags to a
 */
TagResourceResponse * FraudDetectorClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * FraudDetectorClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateDetectorVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a detector version. The detector version attributes that you can update include models, external model
 * endpoints, rules, rule execution mode, and description. You can only update a <code>DRAFT</code> detector
 */
UpdateDetectorVersionResponse * FraudDetectorClient::updateDetectorVersion(const UpdateDetectorVersionRequest &request)
{
    return qobject_cast<UpdateDetectorVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateDetectorVersionMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the detector version's description. You can update the metadata for any detector version (<code>DRAFT,
 * ACTIVE,</code> or <code>INACTIVE</code>).
 */
UpdateDetectorVersionMetadataResponse * FraudDetectorClient::updateDetectorVersionMetadata(const UpdateDetectorVersionMetadataRequest &request)
{
    return qobject_cast<UpdateDetectorVersionMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateDetectorVersionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the detector version’s status. You can perform the following promotions or demotions using
 * <code>UpdateDetectorVersionStatus</code>: <code>DRAFT</code> to <code>ACTIVE</code>, <code>ACTIVE</code> to
 * <code>INACTIVE</code>, and <code>INACTIVE</code> to
 */
UpdateDetectorVersionStatusResponse * FraudDetectorClient::updateDetectorVersionStatus(const UpdateDetectorVersionStatusRequest &request)
{
    return qobject_cast<UpdateDetectorVersionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateEventLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified event with a new
 */
UpdateEventLabelResponse * FraudDetectorClient::updateEventLabel(const UpdateEventLabelRequest &request)
{
    return qobject_cast<UpdateEventLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates model
 */
UpdateModelResponse * FraudDetectorClient::updateModel(const UpdateModelRequest &request)
{
    return qobject_cast<UpdateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateModelVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a model version. Updating a model version retrains an existing model version using updated training data and
 * produces a new minor version of the model. You can update the training data set location and data access role attributes
 * using this action. This action creates and trains a new minor version of the model, for example version 1.01, 1.02,
 */
UpdateModelVersionResponse * FraudDetectorClient::updateModelVersion(const UpdateModelVersionRequest &request)
{
    return qobject_cast<UpdateModelVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateModelVersionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of a model
 *
 * version>
 *
 * You can perform the following status
 *
 * updates> <ol> <li>
 *
 * Change the <code>TRAINING_IN_PROGRESS</code> status to
 *
 * <code>TRAINING_CANCELLED</code>> </li> <li>
 *
 * Change the <code>TRAINING_COMPLETE</code> status to
 *
 * <code>ACTIVE</code>> </li> <li>
 *
 * Change <code>ACTIVE</code> to
 */
UpdateModelVersionStatusResponse * FraudDetectorClient::updateModelVersionStatus(const UpdateModelVersionStatusRequest &request)
{
    return qobject_cast<UpdateModelVersionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateRuleMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a rule's metadata. The description attribute can be
 */
UpdateRuleMetadataResponse * FraudDetectorClient::updateRuleMetadata(const UpdateRuleMetadataRequest &request)
{
    return qobject_cast<UpdateRuleMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateRuleVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a rule version resulting in a new rule version. Updates a rule version resulting in a new rule version (version
 * 1, 2, 3 ...).
 */
UpdateRuleVersionResponse * FraudDetectorClient::updateRuleVersion(const UpdateRuleVersionRequest &request)
{
    return qobject_cast<UpdateRuleVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the FraudDetectorClient service, and returns a pointer to an
 * UpdateVariableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateVariableResponse * FraudDetectorClient::updateVariable(const UpdateVariableRequest &request)
{
    return qobject_cast<UpdateVariableResponse *>(send(request));
}

/*!
 * \class QtAws::FraudDetector::FraudDetectorClientPrivate
 * \brief The FraudDetectorClientPrivate class provides private implementation for FraudDetectorClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a FraudDetectorClientPrivate object with public implementation \a q.
 */
FraudDetectorClientPrivate::FraudDetectorClientPrivate(FraudDetectorClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace FraudDetector
} // namespace QtAws
