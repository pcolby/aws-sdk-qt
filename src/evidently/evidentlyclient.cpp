// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "evidentlyclient.h"
#include "evidentlyclient_p.h"

#include "core/awssignaturev4.h"
#include "batchevaluatefeaturerequest.h"
#include "batchevaluatefeatureresponse.h"
#include "createexperimentrequest.h"
#include "createexperimentresponse.h"
#include "createfeaturerequest.h"
#include "createfeatureresponse.h"
#include "createlaunchrequest.h"
#include "createlaunchresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createsegmentrequest.h"
#include "createsegmentresponse.h"
#include "deleteexperimentrequest.h"
#include "deleteexperimentresponse.h"
#include "deletefeaturerequest.h"
#include "deletefeatureresponse.h"
#include "deletelaunchrequest.h"
#include "deletelaunchresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deletesegmentrequest.h"
#include "deletesegmentresponse.h"
#include "evaluatefeaturerequest.h"
#include "evaluatefeatureresponse.h"
#include "getexperimentrequest.h"
#include "getexperimentresponse.h"
#include "getexperimentresultsrequest.h"
#include "getexperimentresultsresponse.h"
#include "getfeaturerequest.h"
#include "getfeatureresponse.h"
#include "getlaunchrequest.h"
#include "getlaunchresponse.h"
#include "getprojectrequest.h"
#include "getprojectresponse.h"
#include "getsegmentrequest.h"
#include "getsegmentresponse.h"
#include "listexperimentsrequest.h"
#include "listexperimentsresponse.h"
#include "listfeaturesrequest.h"
#include "listfeaturesresponse.h"
#include "listlaunchesrequest.h"
#include "listlaunchesresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listsegmentreferencesrequest.h"
#include "listsegmentreferencesresponse.h"
#include "listsegmentsrequest.h"
#include "listsegmentsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putprojecteventsrequest.h"
#include "putprojecteventsresponse.h"
#include "startexperimentrequest.h"
#include "startexperimentresponse.h"
#include "startlaunchrequest.h"
#include "startlaunchresponse.h"
#include "stopexperimentrequest.h"
#include "stopexperimentresponse.h"
#include "stoplaunchrequest.h"
#include "stoplaunchresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testsegmentpatternrequest.h"
#include "testsegmentpatternresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateexperimentrequest.h"
#include "updateexperimentresponse.h"
#include "updatefeaturerequest.h"
#include "updatefeatureresponse.h"
#include "updatelaunchrequest.h"
#include "updatelaunchresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"
#include "updateprojectdatadeliveryrequest.h"
#include "updateprojectdatadeliveryresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Evidently
 * \brief Contains classess for accessing Amazon CloudWatch Evidently.
 *
 * \inmodule QtAwsEvidently
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::EvidentlyClient
 * \brief The EvidentlyClient class provides access to the Amazon CloudWatch Evidently service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 */

/*!
 * \brief Constructs a EvidentlyClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EvidentlyClient::EvidentlyClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EvidentlyClientPrivate(this), parent)
{
    Q_D(EvidentlyClient);
    d->apiVersion = QStringLiteral("2021-02-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Evidently");
    d->serviceName = QStringLiteral("evidently");
}

/*!
 * \overload EvidentlyClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EvidentlyClient::EvidentlyClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EvidentlyClientPrivate(this), parent)
{
    Q_D(EvidentlyClient);
    d->apiVersion = QStringLiteral("2021-02-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Evidently");
    d->serviceName = QStringLiteral("evidently");
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * BatchEvaluateFeatureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation assigns feature variation to user sessions. For each user session, you pass in an <code>entityID</code>
 * that represents the user. Evidently then checks the evaluation rules and assigns the
 *
 * variation>
 *
 * The first rules that are evaluated are the override rules. If the user's <code>entityID</code> matches an override rule,
 * the user is served the variation specified by that
 *
 * rule>
 *
 * Next, if there is a launch of the feature, the user might be assigned to a variation in the launch. The chance of this
 * depends on the percentage of users that are allocated to that launch. If the user is enrolled in the launch, the
 * variation they are served depends on the allocation of the various feature variations used for the
 *
 * launch>
 *
 * If the user is not assigned to a launch, and there is an ongoing experiment for this feature, the user might be assigned
 * to a variation in the experiment. The chance of this depends on the percentage of users that are allocated to that
 * experiment. If the user is enrolled in the experiment, the variation they are served depends on the allocation of the
 * various feature variations used for the experiment.
 *
 * </p
 *
 * If the user is not assigned to a launch or experiment, they are served the default
 */
BatchEvaluateFeatureResponse * EvidentlyClient::batchEvaluateFeature(const BatchEvaluateFeatureRequest &request)
{
    return qobject_cast<BatchEvaluateFeatureResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * CreateExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Evidently <i>experiment</i>. Before you create an experiment, you must create the feature to use for the
 *
 * experiment>
 *
 * An experiment helps you make feature design decisions based on evidence and data. An experiment can test as many as five
 * variations at once. Evidently collects experiment data and analyzes it by statistical methods, and provides clear
 * recommendations about which variations perform
 *
 * better>
 *
 * You can optionally specify a <code>segment</code> to have the experiment consider only certain audience types in the
 * experiment, such as using only user sessions from a certain location or who use a certain internet
 *
 * browser>
 *
 * Don't use this operation to update an existing experiment. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateExperiment.html">UpdateExperiment</a>.
 */
CreateExperimentResponse * EvidentlyClient::createExperiment(const CreateExperimentRequest &request)
{
    return qobject_cast<CreateExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * CreateFeatureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Evidently <i>feature</i> that you want to launch or test. You can define up to five variations of a feature,
 * and use these variations in your launches and experiments. A feature must be created in a project. For information about
 * creating a project, see <a
 *
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>>
 *
 * Don't use this operation to update an existing feature. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateFeature.html">UpdateFeature</a>.
 */
CreateFeatureResponse * EvidentlyClient::createFeature(const CreateFeatureRequest &request)
{
    return qobject_cast<CreateFeatureResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * CreateLaunchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <i>launch</i> of a given feature. Before you create a launch, you must create the feature to use for the
 *
 * launch>
 *
 * You can use a launch to safely validate new features by serving them to a specified percentage of your users while you
 * roll out the feature. You can monitor the performance of the new feature to help you decide when to ramp up traffic to
 * more users. This helps you reduce risk and identify unintended consequences before you fully launch the
 *
 * feature>
 *
 * Don't use this operation to update an existing launch. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateLaunch.html">UpdateLaunch</a>.
 */
CreateLaunchResponse * EvidentlyClient::createLaunch(const CreateLaunchRequest &request)
{
    return qobject_cast<CreateLaunchResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a project, which is the logical object in Evidently that can contain features, launches, and experiments. Use
 * projects to group similar features
 *
 * together>
 *
 * To update an existing project, use <a
 */
CreateProjectResponse * EvidentlyClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * CreateSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to define a <i>segment</i> of your audience. A segment is a portion of your audience that share one
 * or more characteristics. Examples could be Chrome browser users, users in Europe, or Firefox browser users in Europe who
 * also fit other criteria that your application collects, such as
 *
 * age>
 *
 * Using a segment in an experiment limits that experiment to evaluate only the users who match the segment criteria. Using
 * one or more segments in a launch allows you to define different traffic splits for the different audience
 *
 * segments>
 *
 * For more information about segment pattern syntax, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
 * Segment rule pattern
 *
 * syntax</a>>
 *
 * The pattern that you define for a segment is matched against the value of <code>evaluationContext</code>, which is
 * passed into Evidently in the <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_EvaluateFeature.html">EvaluateFeature</a>
 * operation, when Evidently assigns a feature variation to a
 */
CreateSegmentResponse * EvidentlyClient::createSegment(const CreateSegmentRequest &request)
{
    return qobject_cast<CreateSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * DeleteExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Evidently experiment. The feature used for the experiment is not
 *
 * deleted>
 *
 * To stop an experiment without deleting it, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopExperiment.html">StopExperiment</a>.
 */
DeleteExperimentResponse * EvidentlyClient::deleteExperiment(const DeleteExperimentRequest &request)
{
    return qobject_cast<DeleteExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * DeleteFeatureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Evidently
 */
DeleteFeatureResponse * EvidentlyClient::deleteFeature(const DeleteFeatureRequest &request)
{
    return qobject_cast<DeleteFeatureResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * DeleteLaunchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Evidently launch. The feature used for the launch is not
 *
 * deleted>
 *
 * To stop a launch without deleting it, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopLaunch.html">StopLaunch</a>.
 */
DeleteLaunchResponse * EvidentlyClient::deleteLaunch(const DeleteLaunchRequest &request)
{
    return qobject_cast<DeleteLaunchResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Evidently project. Before you can delete a project, you must delete all the features that the project
 * contains. To delete a feature, use <a
 */
DeleteProjectResponse * EvidentlyClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * DeleteSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a segment. You can't delete a segment that is being used in a launch or experiment, even if that launch or
 * experiment is not currently
 */
DeleteSegmentResponse * EvidentlyClient::deleteSegment(const DeleteSegmentRequest &request)
{
    return qobject_cast<DeleteSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * EvaluateFeatureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation assigns a feature variation to one given user session. You pass in an <code>entityID</code> that
 * represents the user. Evidently then checks the evaluation rules and assigns the
 *
 * variation>
 *
 * The first rules that are evaluated are the override rules. If the user's <code>entityID</code> matches an override rule,
 * the user is served the variation specified by that
 *
 * rule>
 *
 * If there is a current launch with this feature that uses segment overrides, and if the user session's
 * <code>evaluationContext</code> matches a segment rule defined in a segment override, the configuration in the segment
 * overrides is used. For more information about segments, see <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateSegment.html">CreateSegment</a> and
 * <a href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Use segments
 * to focus your
 *
 * audience</a>>
 *
 * If there is a launch with no segment overrides, the user might be assigned to a variation in the launch. The chance of
 * this depends on the percentage of users that are allocated to that launch. If the user is enrolled in the launch, the
 * variation they are served depends on the allocation of the various feature variations used for the
 *
 * launch>
 *
 * If the user is not assigned to a launch, and there is an ongoing experiment for this feature, the user might be assigned
 * to a variation in the experiment. The chance of this depends on the percentage of users that are allocated to that
 *
 * experiment>
 *
 * If the experiment uses a segment, then only user sessions with <code>evaluationContext</code> values that match the
 * segment rule are used in the
 *
 * experiment>
 *
 * If the user is enrolled in the experiment, the variation they are served depends on the allocation of the various
 * feature variations used for the experiment.
 *
 * </p
 *
 * If the user is not assigned to a launch or experiment, they are served the default
 */
EvaluateFeatureResponse * EvidentlyClient::evaluateFeature(const EvaluateFeatureRequest &request)
{
    return qobject_cast<EvaluateFeatureResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * GetExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details about one experiment. You must already know the experiment name. To retrieve a list of experiments
 * in your account, use <a
 */
GetExperimentResponse * EvidentlyClient::getExperiment(const GetExperimentRequest &request)
{
    return qobject_cast<GetExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * GetExperimentResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the results of a running or completed experiment. No results are available until there have been 100 events
 * for each variation and at least 10 minutes have passed since the start of the experiment. To increase the statistical
 * power, Evidently performs an additional offline p-value analysis at the end of the experiment. Offline p-value analysis
 * can detect statistical significance in some cases where the anytime p-values used during the experiment do not find
 * statistical
 *
 * significance>
 *
 * Experiment results are available up to 63 days after the start of the experiment. They are not available after that
 * because of CloudWatch data retention
 */
GetExperimentResultsResponse * EvidentlyClient::getExperimentResults(const GetExperimentResultsRequest &request)
{
    return qobject_cast<GetExperimentResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * GetFeatureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details about one feature. You must already know the feature name. To retrieve a list of features in your
 * account, use <a
 */
GetFeatureResponse * EvidentlyClient::getFeature(const GetFeatureRequest &request)
{
    return qobject_cast<GetFeatureResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * GetLaunchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details about one launch. You must already know the launch name. To retrieve a list of launches in your
 * account, use <a
 */
GetLaunchResponse * EvidentlyClient::getLaunch(const GetLaunchRequest &request)
{
    return qobject_cast<GetLaunchResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * GetProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details about one launch. You must already know the project name. To retrieve a list of projects in your
 * account, use <a
 */
GetProjectResponse * EvidentlyClient::getProject(const GetProjectRequest &request)
{
    return qobject_cast<GetProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * GetSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified segment. Specify the segment you want to view by specifying its
 */
GetSegmentResponse * EvidentlyClient::getSegment(const GetSegmentRequest &request)
{
    return qobject_cast<GetSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * ListExperimentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration details about all the experiments in the specified
 */
ListExperimentsResponse * EvidentlyClient::listExperiments(const ListExperimentsRequest &request)
{
    return qobject_cast<ListExperimentsResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * ListFeaturesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration details about all the features in the specified
 */
ListFeaturesResponse * EvidentlyClient::listFeatures(const ListFeaturesRequest &request)
{
    return qobject_cast<ListFeaturesResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * ListLaunchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration details about all the launches in the specified
 */
ListLaunchesResponse * EvidentlyClient::listLaunches(const ListLaunchesRequest &request)
{
    return qobject_cast<ListLaunchesResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration details about all the projects in the current Region in your
 */
ListProjectsResponse * EvidentlyClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * ListSegmentReferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to find which experiments or launches are using a specified
 */
ListSegmentReferencesResponse * EvidentlyClient::listSegmentReferences(const ListSegmentReferencesRequest &request)
{
    return qobject_cast<ListSegmentReferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * ListSegmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of audience segments that you have created in your account in this
 */
ListSegmentsResponse * EvidentlyClient::listSegments(const ListSegmentsRequest &request)
{
    return qobject_cast<ListSegmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the tags associated with an Evidently
 */
ListTagsForResourceResponse * EvidentlyClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * PutProjectEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends performance events to Evidently. These events can be used to evaluate a launch or an
 */
PutProjectEventsResponse * EvidentlyClient::putProjectEvents(const PutProjectEventsRequest &request)
{
    return qobject_cast<PutProjectEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * StartExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an existing experiment. To create an experiment, use <a
 */
StartExperimentResponse * EvidentlyClient::startExperiment(const StartExperimentRequest &request)
{
    return qobject_cast<StartExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * StartLaunchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an existing launch. To create a launch, use <a
 */
StartLaunchResponse * EvidentlyClient::startLaunch(const StartLaunchRequest &request)
{
    return qobject_cast<StartLaunchResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * StopExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an experiment that is currently running. If you stop an experiment, you can't resume it or restart
 */
StopExperimentResponse * EvidentlyClient::stopExperiment(const StopExperimentRequest &request)
{
    return qobject_cast<StopExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * StopLaunchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a launch that is currently running. After you stop a launch, you will not be able to resume it or restart it.
 * Also, it will not be evaluated as a rule for traffic allocation, and the traffic that was allocated to the launch will
 * instead be available to the feature's experiment, if there is one. Otherwise, all traffic will be served the default
 * variation after the launch is
 */
StopLaunchResponse * EvidentlyClient::stopLaunch(const StopLaunchRequest &request)
{
    return qobject_cast<StopLaunchResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified CloudWatch Evidently resource. Projects, features, launches,
 * and experiments can be
 *
 * tagged>
 *
 * Tags can help you organize and categorize your resources. You can also use them to scope user permissions by granting a
 * user permission to access or change only resources with certain tag
 *
 * values>
 *
 * Tags don't have any semantic meaning to Amazon Web Services and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the <code>TagResource</code> action with a resource that already has tags. If you specify a new tag key for
 * the resource, this tag is appended to the list of tags associated with the alarm. If you specify a tag key that is
 * already associated with the resource, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a
 *
 * resource>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging Amazon Web
 * Services
 */
TagResourceResponse * EvidentlyClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * TestSegmentPatternResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to test a rules pattern that you plan to use to create an audience segment. For more information
 * about segments, see <a
 */
TestSegmentPatternResponse * EvidentlyClient::testSegmentPattern(const TestSegmentPatternRequest &request)
{
    return qobject_cast<TestSegmentPatternResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified
 */
UntagResourceResponse * EvidentlyClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * UpdateExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Evidently experiment.
 *
 * </p
 *
 * Don't use this operation to update an experiment's tag. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
 */
UpdateExperimentResponse * EvidentlyClient::updateExperiment(const UpdateExperimentRequest &request)
{
    return qobject_cast<UpdateExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * UpdateFeatureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing
 *
 * feature>
 *
 * You can't use this operation to update the tags of an existing feature. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
 */
UpdateFeatureResponse * EvidentlyClient::updateFeature(const UpdateFeatureRequest &request)
{
    return qobject_cast<UpdateFeatureResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * UpdateLaunchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a launch of a given feature.
 *
 * </p
 *
 * Don't use this operation to update the tags of an existing launch. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
 */
UpdateLaunchResponse * EvidentlyClient::updateLaunch(const UpdateLaunchRequest &request)
{
    return qobject_cast<UpdateLaunchResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * UpdateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description of an existing
 *
 * project>
 *
 * To create a new project, use <a
 *
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>>
 *
 * Don't use this operation to update the data storage options of a project. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateProjectDataDelivery.html">UpdateProjectDataDelivery</a>.
 *
 * </p
 *
 * Don't use this operation to update the tags of a project. Instead, use <a
 * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
 */
UpdateProjectResponse * EvidentlyClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the EvidentlyClient service, and returns a pointer to an
 * UpdateProjectDataDeliveryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the data storage options for this project. If you store evaluation events, you an keep them and analyze them on
 * your own. If you choose not to store evaluation events, Evidently deletes them after using them to produce metrics and
 * other experiment results that you can
 *
 * view>
 *
 * You can't specify both <code>cloudWatchLogs</code> and <code>s3Destination</code> in the same
 */
UpdateProjectDataDeliveryResponse * EvidentlyClient::updateProjectDataDelivery(const UpdateProjectDataDeliveryRequest &request)
{
    return qobject_cast<UpdateProjectDataDeliveryResponse *>(send(request));
}

/*!
 * \class QtAws::Evidently::EvidentlyClientPrivate
 * \brief The EvidentlyClientPrivate class provides private implementation for EvidentlyClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a EvidentlyClientPrivate object with public implementation \a q.
 */
EvidentlyClientPrivate::EvidentlyClientPrivate(EvidentlyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Evidently
} // namespace QtAws
