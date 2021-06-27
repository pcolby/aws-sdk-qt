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

#include "cloudtrailclient.h"
#include "cloudtrailclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "createtrailrequest.h"
#include "createtrailresponse.h"
#include "deletetrailrequest.h"
#include "deletetrailresponse.h"
#include "describetrailsrequest.h"
#include "describetrailsresponse.h"
#include "geteventselectorsrequest.h"
#include "geteventselectorsresponse.h"
#include "getinsightselectorsrequest.h"
#include "getinsightselectorsresponse.h"
#include "gettrailrequest.h"
#include "gettrailresponse.h"
#include "gettrailstatusrequest.h"
#include "gettrailstatusresponse.h"
#include "listpublickeysrequest.h"
#include "listpublickeysresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "listtrailsrequest.h"
#include "listtrailsresponse.h"
#include "lookupeventsrequest.h"
#include "lookupeventsresponse.h"
#include "puteventselectorsrequest.h"
#include "puteventselectorsresponse.h"
#include "putinsightselectorsrequest.h"
#include "putinsightselectorsresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "startloggingrequest.h"
#include "startloggingresponse.h"
#include "stoploggingrequest.h"
#include "stoploggingresponse.h"
#include "updatetrailrequest.h"
#include "updatetrailresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudTrail
 * \brief Contains classess for accessing AWS CloudTrail.
 *
 * \inmodule QtAwsCloudTrail
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CloudTrailClient
 * \brief The CloudTrailClient class provides access to the AWS CloudTrail service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudTrail
 *
 *  <fullname>AWS CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records AWS API calls for your AWS account and delivers log files to an Amazon S3
 *  bucket. The recorded information includes the identity of the user, the start time of the AWS API call, the source IP
 *  address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the AWS SDKs, which consist of libraries and sample code for various
 *  programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to create
 *  programmatic access to AWSCloudTrail. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services
 * 
 *  page</a>> </note>
 * 
 *  See the <a href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS CloudTrail
 *  User Guide</a> for information about the data that is included with each AWS API call listed in the log
 */

/*!
 * \brief Constructs a CloudTrailClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudTrailClient::CloudTrailClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2013-11-01"),
    QStringLiteral("cloudtrail"),
    QStringLiteral("AWS CloudTrail"),
    QStringLiteral("cloudtrail"),
    parent), d_ptr(new CloudTrailClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload CloudTrailClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudTrailClient::CloudTrailClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2013-11-01"),
    QStringLiteral("cloudtrail"),
    QStringLiteral("AWS CloudTrail"),
    QStringLiteral("cloudtrail"),
    parent), d_ptr(new CloudTrailClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a trail, up to a limit of 50. Overwrites an existing tag's value when a new value is specified
 * for an existing tag key. Tag key names must be unique for a trail; you cannot have two keys with the same name but
 * different values. If you specify a key without a value, the tag will be created with the specified key and a value of
 * null. You can tag a trail that applies to all AWS Regions only from the Region in which the trail was created (also
 * known as its home
 */
AddTagsResponse * CloudTrailClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * CreateTrailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a trail that specifies the settings for delivery of log data to an Amazon S3 bucket.
 */
CreateTrailResponse * CloudTrailClient::createTrail(const CreateTrailRequest &request)
{
    return qobject_cast<CreateTrailResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * DeleteTrailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a trail. This operation must be called from the region in which the trail was created. <code>DeleteTrail</code>
 * cannot be called on the shadow trails (replicated trails in other regions) of a trail that is enabled in all
 */
DeleteTrailResponse * CloudTrailClient::deleteTrail(const DeleteTrailRequest &request)
{
    return qobject_cast<DeleteTrailResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * DescribeTrailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves settings for one or more trails associated with the current region for your
 */
DescribeTrailsResponse * CloudTrailClient::describeTrails(const DescribeTrailsRequest &request)
{
    return qobject_cast<DescribeTrailsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * GetEventSelectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the settings for the event selectors that you configured for your trail. The information returned for your
 * event selectors includes the
 *
 * following> <ul> <li>
 *
 * If your event selector includes read-only events, write-only events, or all events. This applies to both management
 * events and data
 *
 * events> </li> <li>
 *
 * If your event selector includes management
 *
 * events> </li> <li>
 *
 * If your event selector includes data events, the resources on which you are logging data
 *
 * events> </li> </ul>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
 * Data and Management Events for Trails </a> in the <i>AWS CloudTrail User
 */
GetEventSelectorsResponse * CloudTrailClient::getEventSelectors(const GetEventSelectorsRequest &request)
{
    return qobject_cast<GetEventSelectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * GetInsightSelectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the settings for the Insights event selectors that you configured for your trail.
 * <code>GetInsightSelectors</code> shows if CloudTrail Insights event logging is enabled on the trail, and if it is, which
 * insight types are enabled. If you run <code>GetInsightSelectors</code> on a trail that does not have Insights events
 * enabled, the operation throws the exception <code>InsightNotEnabledException</code>
 *
 * </p
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
 * CloudTrail Insights Events for Trails </a> in the <i>AWS CloudTrail User
 */
GetInsightSelectorsResponse * CloudTrailClient::getInsightSelectors(const GetInsightSelectorsRequest &request)
{
    return qobject_cast<GetInsightSelectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * GetTrailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns settings information for a specified
 */
GetTrailResponse * CloudTrailClient::getTrail(const GetTrailRequest &request)
{
    return qobject_cast<GetTrailResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * GetTrailStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a JSON-formatted list of information about the specified trail. Fields include information on delivery errors,
 * Amazon SNS and Amazon S3 errors, and start and stop logging times for each trail. This operation returns trail status
 * from a single region. To return trail status from all regions, you must call the operation on each
 */
GetTrailStatusResponse * CloudTrailClient::getTrailStatus(const GetTrailStatusRequest &request)
{
    return qobject_cast<GetTrailStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * ListPublicKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all public keys whose private keys were used to sign the digest files within the specified time range. The
 * public key is needed to validate digest files that were signed with its corresponding private
 *
 * key> <note>
 *
 * CloudTrail uses different private/public key pairs per region. Each digest file is signed with a private key unique to
 * its region. Therefore, when you validate a digest file from a particular region, you must look in the same region for
 * its corresponding public
 */
ListPublicKeysResponse * CloudTrailClient::listPublicKeys(const ListPublicKeysRequest &request)
{
    return qobject_cast<ListPublicKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the trail in the current
 */
ListTagsResponse * CloudTrailClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * ListTrailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists trails that are in the current
 */
ListTrailsResponse * CloudTrailClient::listTrails(const ListTrailsRequest &request)
{
    return qobject_cast<ListTrailsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * LookupEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Looks up <a
 * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
 * events</a> or <a
 * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-insights-events">CloudTrail
 * Insights events</a> that are captured by CloudTrail. You can look up events that occurred in a region within the last 90
 * days. Lookup supports the following attributes for management
 *
 * events> <ul> <li>
 *
 * AWS access
 *
 * ke> </li> <li>
 *
 * Event
 *
 * I> </li> <li>
 *
 * Event
 *
 * nam> </li> <li>
 *
 * Event
 *
 * sourc> </li> <li>
 *
 * Read
 *
 * onl> </li> <li>
 *
 * Resource
 *
 * nam> </li> <li>
 *
 * Resource
 *
 * typ> </li> <li>
 *
 * User
 *
 * nam> </li> </ul>
 *
 * Lookup supports the following attributes for Insights
 *
 * events> <ul> <li>
 *
 * Event
 *
 * I> </li> <li>
 *
 * Event
 *
 * nam> </li> <li>
 *
 * Event
 *
 * sourc> </li> </ul>
 *
 * All attributes are optional. The default number of results returned is 50, with a maximum of 50 possible. The response
 * includes a token that you can use to get the next page of
 *
 * results> <b>
 *
 * The rate of lookup requests is limited to two per second, per account, per region. If this limit is exceeded, a
 * throttling error
 */
LookupEventsResponse * CloudTrailClient::lookupEvents(const LookupEventsRequest &request)
{
    return qobject_cast<LookupEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * PutEventSelectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures an event selector or advanced event selectors for your trail. Use event selectors or advanced event selectors
 * to specify management and data event settings for your trail. By default, trails created without specific event
 * selectors are configured to log all read and write management events, and no data
 *
 * events>
 *
 * When an event occurs in your account, CloudTrail evaluates the event selectors or advanced event selectors in all
 * trails. For each trail, if the event matches any event selector, the trail processes and logs the event. If the event
 * doesn't match any event selector, the trail doesn't log the event.
 *
 * </p
 *
 * Exampl> <ol> <li>
 *
 * You create an event selector for a trail and specify that you want write-only
 *
 * events> </li> <li>
 *
 * The EC2 <code>GetConsoleOutput</code> and <code>RunInstances</code> API operations occur in your
 *
 * account> </li> <li>
 *
 * CloudTrail evaluates whether the events match your event
 *
 * selectors> </li> <li>
 *
 * The <code>RunInstances</code> is a write-only event and it matches your event selector. The trail logs the
 *
 * event> </li> <li>
 *
 * The <code>GetConsoleOutput</code> is a read-only event that doesn't match your event selector. The trail doesn't log the
 * event.
 *
 * </p </li> </ol>
 *
 * The <code>PutEventSelectors</code> operation must be called from the region in which the trail was created; otherwise,
 * an <code>InvalidHomeRegionException</code> exception is
 *
 * thrown>
 *
 * You can configure up to five event selectors for each trail. For more information, see <a
 * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
 * data and management events for trails </a> and <a
 * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Quotas in AWS
 * CloudTrail</a> in the <i>AWS CloudTrail User
 *
 * Guide</i>>
 *
 * You can add advanced event selectors, and conditions for your advanced event selectors, up to a maximum of 500 values
 * for all conditions and selectors on a trail. You can use either <code>AdvancedEventSelectors</code> or
 * <code>EventSelectors</code>, but not both. If you apply <code>AdvancedEventSelectors</code> to a trail, any existing
 * <code>EventSelectors</code> are overwritten. For more information about advanced event selectors, see <a
 * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging data
 * events for trails</a> in the <i>AWS CloudTrail User
 */
PutEventSelectorsResponse * CloudTrailClient::putEventSelectors(const PutEventSelectorsRequest &request)
{
    return qobject_cast<PutEventSelectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * PutInsightSelectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lets you enable Insights event logging by specifying the Insights selectors that you want to enable on an existing
 * trail. You also use <code>PutInsightSelectors</code> to turn off Insights event logging, by passing an empty list of
 * insight types. In this release, only <code>ApiCallRateInsight</code> is supported as an Insights
 */
PutInsightSelectorsResponse * CloudTrailClient::putInsightSelectors(const PutInsightSelectorsRequest &request)
{
    return qobject_cast<PutInsightSelectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * RemoveTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from a
 */
RemoveTagsResponse * CloudTrailClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * StartLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the recording of AWS API calls and log file delivery for a trail. For a trail that is enabled in all regions,
 * this operation must be called from the region in which the trail was created. This operation cannot be called on the
 * shadow trails (replicated trails in other regions) of a trail that is enabled in all
 */
StartLoggingResponse * CloudTrailClient::startLogging(const StartLoggingRequest &request)
{
    return qobject_cast<StartLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * StopLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Suspends the recording of AWS API calls and log file delivery for the specified trail. Under most circumstances, there
 * is no need to use this action. You can update a trail without stopping it first. This action is the only way to stop
 * recording. For a trail enabled in all regions, this operation must be called from the region in which the trail was
 * created, or an <code>InvalidHomeRegionException</code> will occur. This operation cannot be called on the shadow trails
 * (replicated trails in other regions) of a trail enabled in all
 */
StopLoggingResponse * CloudTrailClient::stopLogging(const StopLoggingRequest &request)
{
    return qobject_cast<StopLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudTrailClient service, and returns a pointer to an
 * UpdateTrailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings that specify delivery of log files. Changes to a trail do not require stopping the CloudTrail
 * service. Use this action to designate an existing bucket for log delivery. If the existing bucket has previously been a
 * target for CloudTrail log files, an IAM policy exists for the bucket. <code>UpdateTrail</code> must be called from the
 * region in which the trail was created; otherwise, an <code>InvalidHomeRegionException</code> is
 */
UpdateTrailResponse * CloudTrailClient::updateTrail(const UpdateTrailRequest &request)
{
    return qobject_cast<UpdateTrailResponse *>(send(request));
}

/*!
 * \class QtAws::CloudTrail::CloudTrailClientPrivate
 * \brief The CloudTrailClientPrivate class provides private implementation for CloudTrailClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CloudTrailClientPrivate object with public implementation \a q.
 */
CloudTrailClientPrivate::CloudTrailClientPrivate(CloudTrailClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace CloudTrail
} // namespace QtAws
