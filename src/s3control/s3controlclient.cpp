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

#include "s3controlclient.h"
#include "s3controlclient_p.h"

#include "core/awssignaturev4.h"
#include "createaccesspointrequest.h"
#include "createaccesspointresponse.h"
#include "createaccesspointforobjectlambdarequest.h"
#include "createaccesspointforobjectlambdaresponse.h"
#include "createbucketrequest.h"
#include "createbucketresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "deleteaccesspointrequest.h"
#include "deleteaccesspointresponse.h"
#include "deleteaccesspointforobjectlambdarequest.h"
#include "deleteaccesspointforobjectlambdaresponse.h"
#include "deleteaccesspointpolicyrequest.h"
#include "deleteaccesspointpolicyresponse.h"
#include "deleteaccesspointpolicyforobjectlambdarequest.h"
#include "deleteaccesspointpolicyforobjectlambdaresponse.h"
#include "deletebucketrequest.h"
#include "deletebucketresponse.h"
#include "deletebucketlifecycleconfigurationrequest.h"
#include "deletebucketlifecycleconfigurationresponse.h"
#include "deletebucketpolicyrequest.h"
#include "deletebucketpolicyresponse.h"
#include "deletebuckettaggingrequest.h"
#include "deletebuckettaggingresponse.h"
#include "deletejobtaggingrequest.h"
#include "deletejobtaggingresponse.h"
#include "deletepublicaccessblockrequest.h"
#include "deletepublicaccessblockresponse.h"
#include "deletestoragelensconfigurationrequest.h"
#include "deletestoragelensconfigurationresponse.h"
#include "deletestoragelensconfigurationtaggingrequest.h"
#include "deletestoragelensconfigurationtaggingresponse.h"
#include "describejobrequest.h"
#include "describejobresponse.h"
#include "getaccesspointrequest.h"
#include "getaccesspointresponse.h"
#include "getaccesspointconfigurationforobjectlambdarequest.h"
#include "getaccesspointconfigurationforobjectlambdaresponse.h"
#include "getaccesspointforobjectlambdarequest.h"
#include "getaccesspointforobjectlambdaresponse.h"
#include "getaccesspointpolicyrequest.h"
#include "getaccesspointpolicyresponse.h"
#include "getaccesspointpolicyforobjectlambdarequest.h"
#include "getaccesspointpolicyforobjectlambdaresponse.h"
#include "getaccesspointpolicystatusrequest.h"
#include "getaccesspointpolicystatusresponse.h"
#include "getaccesspointpolicystatusforobjectlambdarequest.h"
#include "getaccesspointpolicystatusforobjectlambdaresponse.h"
#include "getbucketrequest.h"
#include "getbucketresponse.h"
#include "getbucketlifecycleconfigurationrequest.h"
#include "getbucketlifecycleconfigurationresponse.h"
#include "getbucketpolicyrequest.h"
#include "getbucketpolicyresponse.h"
#include "getbuckettaggingrequest.h"
#include "getbuckettaggingresponse.h"
#include "getjobtaggingrequest.h"
#include "getjobtaggingresponse.h"
#include "getpublicaccessblockrequest.h"
#include "getpublicaccessblockresponse.h"
#include "getstoragelensconfigurationrequest.h"
#include "getstoragelensconfigurationresponse.h"
#include "getstoragelensconfigurationtaggingrequest.h"
#include "getstoragelensconfigurationtaggingresponse.h"
#include "listaccesspointsrequest.h"
#include "listaccesspointsresponse.h"
#include "listaccesspointsforobjectlambdarequest.h"
#include "listaccesspointsforobjectlambdaresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listregionalbucketsrequest.h"
#include "listregionalbucketsresponse.h"
#include "liststoragelensconfigurationsrequest.h"
#include "liststoragelensconfigurationsresponse.h"
#include "putaccesspointconfigurationforobjectlambdarequest.h"
#include "putaccesspointconfigurationforobjectlambdaresponse.h"
#include "putaccesspointpolicyrequest.h"
#include "putaccesspointpolicyresponse.h"
#include "putaccesspointpolicyforobjectlambdarequest.h"
#include "putaccesspointpolicyforobjectlambdaresponse.h"
#include "putbucketlifecycleconfigurationrequest.h"
#include "putbucketlifecycleconfigurationresponse.h"
#include "putbucketpolicyrequest.h"
#include "putbucketpolicyresponse.h"
#include "putbuckettaggingrequest.h"
#include "putbuckettaggingresponse.h"
#include "putjobtaggingrequest.h"
#include "putjobtaggingresponse.h"
#include "putpublicaccessblockrequest.h"
#include "putpublicaccessblockresponse.h"
#include "putstoragelensconfigurationrequest.h"
#include "putstoragelensconfigurationresponse.h"
#include "putstoragelensconfigurationtaggingrequest.h"
#include "putstoragelensconfigurationtaggingresponse.h"
#include "updatejobpriorityrequest.h"
#include "updatejobpriorityresponse.h"
#include "updatejobstatusrequest.h"
#include "updatejobstatusresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::S3Control
 * \brief Contains classess for accessing AWS S3 Control.
 *
 * \inmodule QtAwsS3Control
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::S3ControlClient
 * \brief The S3ControlClient class provides access to the AWS S3 Control service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 */

/*!
 * \brief Constructs a S3ControlClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
S3ControlClient::S3ControlClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3ControlClientPrivate(this), parent)
{
    Q_D(S3ControlClient);
    d->apiVersion = QStringLiteral("2018-08-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("s3-control");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS S3 Control");
    d->serviceName = QStringLiteral("s3");
}

/*!
 * \overload S3ControlClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
S3ControlClient::S3ControlClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3ControlClientPrivate(this), parent)
{
    Q_D(S3ControlClient);
    d->apiVersion = QStringLiteral("2018-08-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("s3-control");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS S3 Control");
    d->serviceName = QStringLiteral("s3");
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * CreateAccessPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an access point and associates it with the specified bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing Data Access with Amazon S3
 * Access Points</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <p/> <note>
 *
 * S3 on Outposts only supports VPC-style access points.
 *
 * </p
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html"> Accessing
 * Amazon S3 on Outposts using virtual private cloud (VPC) only access points</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </note>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html#API_control_CreateAccessPoint_Examples">Examples</a>
 *
 * section> <p/>
 *
 * The following actions are related to
 *
 * <code>CreateAccessPoint</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
 */
CreateAccessPointResponse * S3ControlClient::createAccessPoint(const CreateAccessPointRequest &request)
{
    return qobject_cast<CreateAccessPointResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * CreateAccessPointForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Object Lambda Access Point. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/transforming-objects.html">Transforming objects with Object
 * Lambda Access Points</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * The following actions are related to
 *
 * <code>CreateAccessPointForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
 */
CreateAccessPointForObjectLambdaResponse * S3ControlClient::createAccessPointForObjectLambda(const CreateAccessPointForObjectLambdaRequest &request)
{
    return qobject_cast<CreateAccessPointForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * CreateBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action creates an Amazon S3 on Outposts bucket. To create an S3 bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">Create Bucket</a> in the <i>Amazon S3 API
 * Reference</i>.
 *
 * </p </note>
 *
 * Creates a new Outposts bucket. By creating the bucket, you become the bucket owner. To create an Outposts bucket, you
 * must have S3 on Outposts. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * Not every string is an acceptable bucket name. For information on bucket naming restrictions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/BucketRestrictions.html#bucketnamingrules">Working with
 * Amazon S3
 *
 * Buckets</a>>
 *
 * S3 on Outposts buckets
 *
 * support> <ul> <li>
 *
 * Tag> </li> <li>
 *
 * LifecycleConfigurations for deleting expired
 *
 * object> </li> </ul>
 *
 * For a complete list of restrictions and Amazon S3 feature limitations on S3 on Outposts, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OnOutpostsRestrictionsLimitations.html"> Amazon S3 on
 * Outposts Restrictions and
 *
 * Limitations</a>>
 *
 * For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
 * <code>x-amz-outpost-id</code> in your API request, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html#API_control_CreateBucket_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to <code>CreateBucket</code> for Amazon S3 on
 *
 * Outposts> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
 */
CreateBucketResponse * S3ControlClient::createBucket(const CreateBucketRequest &request)
{
    return qobject_cast<CreateBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use S3 Batch Operations to perform large-scale batch actions on Amazon S3 objects. Batch Operations can run a
 * single action on lists of Amazon S3 objects that you specify. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3 Batch Operations</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>>
 *
 * This action creates a S3 Batch Operations
 *
 * job> <p/>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_JobOperation.html">JobOperation</a>
 */
CreateJobResponse * S3ControlClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteAccessPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified access
 *
 * point>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html#API_control_DeleteAccessPoint_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>DeleteAccessPoint</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
 */
DeleteAccessPointResponse * S3ControlClient::deleteAccessPoint(const DeleteAccessPointRequest &request)
{
    return qobject_cast<DeleteAccessPointResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteAccessPointForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Object Lambda Access
 *
 * Point>
 *
 * The following actions are related to
 *
 * <code>DeleteAccessPointForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
 */
DeleteAccessPointForObjectLambdaResponse * S3ControlClient::deleteAccessPointForObjectLambda(const DeleteAccessPointForObjectLambdaRequest &request)
{
    return qobject_cast<DeleteAccessPointForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteAccessPointPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the access point policy for the specified access
 *
 * point> <p/>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html#API_control_DeleteAccessPointPolicy_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>DeleteAccessPointPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
 */
DeleteAccessPointPolicyResponse * S3ControlClient::deleteAccessPointPolicy(const DeleteAccessPointPolicyRequest &request)
{
    return qobject_cast<DeleteAccessPointPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteAccessPointPolicyForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the resource policy for an Object Lambda Access
 *
 * Point>
 *
 * The following actions are related to
 *
 * <code>DeleteAccessPointPolicyForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicyForObjectLambda.html">GetAccessPointPolicyForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicyForObjectLambda.html">PutAccessPointPolicyForObjectLambda</a>
 */
DeleteAccessPointPolicyForObjectLambdaResponse * S3ControlClient::deleteAccessPointPolicyForObjectLambda(const DeleteAccessPointPolicyForObjectLambdaRequest &request)
{
    return qobject_cast<DeleteAccessPointPolicyForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action deletes an Amazon S3 on Outposts bucket. To delete an S3 bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a> in the <i>Amazon S3 API
 * Reference</i>.
 *
 * </p </note>
 *
 * Deletes the Amazon S3 on Outposts bucket. All objects (including all object versions and delete markers) in the bucket
 * must be deleted before the bucket itself can be deleted. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html#API_control_DeleteBucket_Examples">Examples</a>
 *
 * section> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
 */
DeleteBucketResponse * S3ControlClient::deleteBucket(const DeleteBucketRequest &request)
{
    return qobject_cast<DeleteBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteBucketLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action deletes an Amazon S3 on Outposts bucket's lifecycle configuration. To delete an S3 bucket's lifecycle
 * configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a> in the
 * <i>Amazon S3 API Reference</i>.
 *
 * </p </note>
 *
 * Deletes the lifecycle configuration from the specified Outposts bucket. Amazon S3 on Outposts removes all the lifecycle
 * configuration rules in the lifecycle subresource associated with the bucket. Your objects never expire, and Amazon S3 on
 * Outposts no longer automatically deletes any objects on the basis of rules contained in the deleted lifecycle
 * configuration. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * To use this action, you must have permission to perform the <code>s3-outposts:DeleteLifecycleConfiguration</code>
 * action. By default, the bucket owner has this permission and the Outposts bucket owner can grant this permission to
 *
 * others>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html#API_control_DeleteBucketLifecycleConfiguration_Examples">Examples</a>
 *
 * section>
 *
 * For more information about object expiration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
 * to Describe Lifecycle
 *
 * Actions</a>>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
 */
DeleteBucketLifecycleConfigurationResponse * S3ControlClient::deleteBucketLifecycleConfiguration(const DeleteBucketLifecycleConfigurationRequest &request)
{
    return qobject_cast<DeleteBucketLifecycleConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action deletes an Amazon S3 on Outposts bucket policy. To delete an S3 bucket policy, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketPolicy.html">DeleteBucketPolicy</a> in the
 * <i>Amazon S3 API Reference</i>.
 *
 * </p </note>
 *
 * This implementation of the DELETE action uses the policy subresource to delete the policy of a specified Amazon S3 on
 * Outposts bucket. If you are using an identity other than the root user of the AWS account that owns the bucket, the
 * calling identity must have the <code>s3-outposts:DeleteBucketPolicy</code> permissions on the specified Outposts bucket
 * and belong to the bucket owner's account to use this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * If you don't have <code>DeleteBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access Denied</code> error.
 * If you have the correct permissions, but you're not using an identity that belongs to the bucket owner's account, Amazon
 * S3 returns a <code>405 Method Not Allowed</code> error.
 *
 * </p <b>
 *
 * As a security precaution, the root user of the AWS account that owns a bucket can always use this action, even if the
 * policy explicitly denies the root user the ability to perform this
 *
 * action> </b>
 *
 * For more information about bucket policies, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using Bucket Policies and User
 * Policies</a>.
 *
 * </p
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html#API_control_DeleteBucketPolicy_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>DeleteBucketPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
 */
DeleteBucketPolicyResponse * S3ControlClient::deleteBucketPolicy(const DeleteBucketPolicyRequest &request)
{
    return qobject_cast<DeleteBucketPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteBucketTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action deletes an Amazon S3 on Outposts bucket's tags. To delete an S3 bucket tags, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a> in the
 * <i>Amazon S3 API Reference</i>.
 *
 * </p </note>
 *
 * Deletes the tags from the Outposts bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * To use this action, you must have permission to perform the <code>PutBucketTagging</code> action. By default, the bucket
 * owner has this permission and can grant this permission to others.
 *
 * </p
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html#API_control_DeleteBucketTagging_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>DeleteBucketTagging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
 */
DeleteBucketTaggingResponse * S3ControlClient::deleteBucketTagging(const DeleteBucketTaggingRequest &request)
{
    return qobject_cast<DeleteBucketTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteJobTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the entire tag set from the specified S3 Batch Operations job. To use this operation, you must have permission
 * to perform the <code>s3:DeleteJobTagging</code> action. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
 * access and labeling jobs using tags</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <p/>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
 */
DeleteJobTaggingResponse * S3ControlClient::deleteJobTagging(const DeleteJobTaggingRequest &request)
{
    return qobject_cast<DeleteJobTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeletePublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the <code>PublicAccessBlock</code> configuration for an AWS account. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html"> Using Amazon S3 block
 * public
 *
 * access</a>>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
 */
DeletePublicAccessBlockResponse * S3ControlClient::deletePublicAccessBlock(const DeletePublicAccessBlockRequest &request)
{
    return qobject_cast<DeletePublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteStorageLensConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon S3 Storage Lens configuration. For more information about S3 Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing your storage activity and usage with
 * Amazon S3 Storage Lens </a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * To use this action, you must have permission to perform the <code>s3:DeleteStorageLensConfiguration</code> action. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting permissions to use
 * Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
 */
DeleteStorageLensConfigurationResponse * S3ControlClient::deleteStorageLensConfiguration(const DeleteStorageLensConfigurationRequest &request)
{
    return qobject_cast<DeleteStorageLensConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeleteStorageLensConfigurationTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon S3 Storage Lens configuration tags. For more information about S3 Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing your storage activity and usage with
 * Amazon S3 Storage Lens </a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * To use this action, you must have permission to perform the <code>s3:DeleteStorageLensConfigurationTagging</code>
 * action. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting permissions to use
 * Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
 */
DeleteStorageLensConfigurationTaggingResponse * S3ControlClient::deleteStorageLensConfigurationTagging(const DeleteStorageLensConfigurationTaggingRequest &request)
{
    return qobject_cast<DeleteStorageLensConfigurationTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DescribeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the configuration parameters and status for a Batch Operations job. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3 Batch Operations</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>> <p/>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
 */
DescribeJobResponse * S3ControlClient::describeJob(const DescribeJobRequest &request)
{
    return qobject_cast<DescribeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetAccessPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration information about the specified access
 *
 * point> <p/>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>GetAccessPoint</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
 */
GetAccessPointResponse * S3ControlClient::getAccessPoint(const GetAccessPointRequest &request)
{
    return qobject_cast<GetAccessPointResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetAccessPointConfigurationForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration for an Object Lambda Access
 *
 * Point>
 *
 * The following actions are related to
 *
 * <code>GetAccessPointConfigurationForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointConfigurationForObjectLambda.html">PutAccessPointConfigurationForObjectLambda</a>
 */
GetAccessPointConfigurationForObjectLambdaResponse * S3ControlClient::getAccessPointConfigurationForObjectLambda(const GetAccessPointConfigurationForObjectLambdaRequest &request)
{
    return qobject_cast<GetAccessPointConfigurationForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetAccessPointForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration information about the specified Object Lambda Access
 *
 * Poin>
 *
 * The following actions are related to
 *
 * <code>GetAccessPointForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
 */
GetAccessPointForObjectLambdaResponse * S3ControlClient::getAccessPointForObjectLambda(const GetAccessPointForObjectLambdaRequest &request)
{
    return qobject_cast<GetAccessPointForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetAccessPointPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the access point policy associated with the specified access
 *
 * point>
 *
 * The following actions are related to
 *
 * <code>GetAccessPointPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
 */
GetAccessPointPolicyResponse * S3ControlClient::getAccessPointPolicy(const GetAccessPointPolicyRequest &request)
{
    return qobject_cast<GetAccessPointPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetAccessPointPolicyForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the resource policy for an Object Lambda Access
 *
 * Point>
 *
 * The following actions are related to
 *
 * <code>GetAccessPointPolicyForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicyForObjectLambda.html">DeleteAccessPointPolicyForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicyForObjectLambda.html">PutAccessPointPolicyForObjectLambda</a>
 */
GetAccessPointPolicyForObjectLambdaResponse * S3ControlClient::getAccessPointPolicyForObjectLambda(const GetAccessPointPolicyForObjectLambdaRequest &request)
{
    return qobject_cast<GetAccessPointPolicyForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetAccessPointPolicyStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Indicates whether the specified access point currently has a policy that allows public access. For more information
 * about public access through access points, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing Data Access with Amazon S3
 * access points</a> in the <i>Amazon S3 User
 */
GetAccessPointPolicyStatusResponse * S3ControlClient::getAccessPointPolicyStatus(const GetAccessPointPolicyStatusRequest &request)
{
    return qobject_cast<GetAccessPointPolicyStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetAccessPointPolicyStatusForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the status of the resource policy associated with an Object Lambda Access
 */
GetAccessPointPolicyStatusForObjectLambdaResponse * S3ControlClient::getAccessPointPolicyStatusForObjectLambda(const GetAccessPointPolicyStatusForObjectLambdaRequest &request)
{
    return qobject_cast<GetAccessPointPolicyStatusForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an Amazon S3 on Outposts bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html"> Using Amazon S3 on Outposts</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * If you are using an identity other than the root user of the AWS account that owns the Outposts bucket, the calling
 * identity must have the <code>s3-outposts:GetBucket</code> permissions on the specified Outposts bucket and belong to the
 * Outposts bucket owner's account in order to use this action. Only users from Outposts bucket owner account with the
 * right permissions can perform actions on an Outposts bucket.
 *
 * </p
 *
 * If you don't have <code>s3-outposts:GetBucket</code> permissions or you're not using an identity that belongs to the
 * bucket owner's account, Amazon S3 returns a <code>403 Access Denied</code>
 *
 * error>
 *
 * The following actions are related to <code>GetBucket</code> for Amazon S3 on
 *
 * Outposts>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html#API_control_GetBucket_Examples">Examples</a>
 *
 * section> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
 */
GetBucketResponse * S3ControlClient::getBucket(const GetBucketRequest &request)
{
    return qobject_cast<GetBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetBucketLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action gets an Amazon S3 on Outposts bucket's lifecycle configuration. To get an S3 bucket's lifecycle
 * configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
 * in the <i>Amazon S3 API Reference</i>.
 *
 * </p </note>
 *
 * Returns the lifecycle configuration information set on the Outposts bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> and for
 * information about lifecycle configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html"> Object Lifecycle Management</a> in
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * To use this action, you must have permission to perform the <code>s3-outposts:GetLifecycleConfiguration</code> action.
 * The Outposts bucket owner has this permission, by default. The bucket owner can grant this permission to others. For
 * more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html#API_control_GetBucketLifecycleConfiguration_Examples">Examples</a>
 *
 * section>
 *
 * <code>GetBucketLifecycleConfiguration</code> has the following special
 *
 * error> <ul> <li>
 *
 * Error code: <code>NoSuchLifecycleConfiguration</code>
 *
 * </p <ul> <li>
 *
 * Description: The lifecycle configuration does not
 *
 * exist> </li> <li>
 *
 * HTTP Status Code: 404 Not
 *
 * Foun> </li> <li>
 *
 * SOAP Fault Code Prefix:
 *
 * Clien> </li> </ul> </li> </ul>
 *
 * The following actions are related to
 *
 * <code>GetBucketLifecycleConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
 */
GetBucketLifecycleConfigurationResponse * S3ControlClient::getBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest &request)
{
    return qobject_cast<GetBucketLifecycleConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action gets a bucket policy for an Amazon S3 on Outposts bucket. To get a policy for an S3 bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicy.html">GetBucketPolicy</a> in the <i>Amazon S3
 * API Reference</i>.
 *
 * </p </note>
 *
 * Returns the policy of a specified Outposts bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * If you are using an identity other than the root user of the AWS account that owns the bucket, the calling identity must
 * have the <code>GetBucketPolicy</code> permissions on the specified bucket and belong to the bucket owner's account in
 * order to use this
 *
 * action>
 *
 * Only users from Outposts bucket owner account with the right permissions can perform actions on an Outposts bucket. If
 * you don't have <code>s3-outposts:GetBucketPolicy</code> permissions or you're not using an identity that belongs to the
 * bucket owner's account, Amazon S3 returns a <code>403 Access Denied</code>
 *
 * error> <b>
 *
 * As a security precaution, the root user of the AWS account that owns a bucket can always use this action, even if the
 * policy explicitly denies the root user the ability to perform this
 *
 * action> </b>
 *
 * For more information about bucket policies, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using Bucket Policies and User
 *
 * Policies</a>>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html#API_control_GetBucketPolicy_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>GetBucketPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
 */
GetBucketPolicyResponse * S3ControlClient::getBucketPolicy(const GetBucketPolicyRequest &request)
{
    return qobject_cast<GetBucketPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetBucketTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action gets an Amazon S3 on Outposts bucket's tags. To get an S3 bucket tags, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a> in the <i>Amazon
 * S3 API Reference</i>.
 *
 * </p </note>
 *
 * Returns the tag set associated with the Outposts bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * To use this action, you must have permission to perform the <code>GetBucketTagging</code> action. By default, the bucket
 * owner has this permission and can grant this permission to
 *
 * others>
 *
 * <code>GetBucketTagging</code> has the following special
 *
 * error> <ul> <li>
 *
 * Error code: <code>NoSuchTagSetError</code>
 *
 * </p <ul> <li>
 *
 * Description: There is no tag set associated with the
 *
 * bucket> </li> </ul> </li> </ul>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html#API_control_GetBucketTagging_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>GetBucketTagging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
 */
GetBucketTaggingResponse * S3ControlClient::getBucketTagging(const GetBucketTaggingRequest &request)
{
    return qobject_cast<GetBucketTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetJobTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tags on an S3 Batch Operations job. To use this operation, you must have permission to perform the
 * <code>s3:GetJobTagging</code> action. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
 * access and labeling jobs using tags</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <p/>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
 */
GetJobTaggingResponse * S3ControlClient::getJobTagging(const GetJobTaggingRequest &request)
{
    return qobject_cast<GetJobTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetPublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>PublicAccessBlock</code> configuration for an AWS account. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html"> Using Amazon S3 block
 * public
 *
 * access</a>>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
 */
GetPublicAccessBlockResponse * S3ControlClient::getPublicAccessBlock(const GetPublicAccessBlockRequest &request)
{
    return qobject_cast<GetPublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetStorageLensConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Amazon S3 Storage Lens configuration. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing your storage activity and usage with
 * Amazon S3 Storage Lens </a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * To use this action, you must have permission to perform the <code>s3:GetStorageLensConfiguration</code> action. For more
 * information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
 * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
 */
GetStorageLensConfigurationResponse * S3ControlClient::getStorageLensConfiguration(const GetStorageLensConfigurationRequest &request)
{
    return qobject_cast<GetStorageLensConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetStorageLensConfigurationTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the tags of Amazon S3 Storage Lens configuration. For more information about S3 Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing your storage activity and usage with
 * Amazon S3 Storage Lens </a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * To use this action, you must have permission to perform the <code>s3:GetStorageLensConfigurationTagging</code> action.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting permissions to use
 * Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
 */
GetStorageLensConfigurationTaggingResponse * S3ControlClient::getStorageLensConfigurationTagging(const GetStorageLensConfigurationTaggingRequest &request)
{
    return qobject_cast<GetStorageLensConfigurationTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * ListAccessPointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the access points currently associated with the specified bucket. You can retrieve up to 1000 access
 * points per call. If the specified bucket has more than 1,000 access points (or the number specified in
 * <code>maxResults</code>, whichever is less), the response will include a continuation token that you can use to list the
 * additional access
 *
 * points> <p/>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>ListAccessPoints</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
 */
ListAccessPointsResponse * S3ControlClient::listAccessPoints(const ListAccessPointsRequest &request)
{
    return qobject_cast<ListAccessPointsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * ListAccessPointsForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the access points associated with the Object Lambda Access Point. You can retrieve up to 1000 access
 * points per call. If there are more than 1,000 access points (or the number specified in <code>maxResults</code>,
 * whichever is less), the response will include a continuation token that you can use to list the additional access
 *
 * points>
 *
 * The following actions are related to
 *
 * <code>ListAccessPointsForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
 */
ListAccessPointsForObjectLambdaResponse * S3ControlClient::listAccessPointsForObjectLambda(const ListAccessPointsForObjectLambdaRequest &request)
{
    return qobject_cast<ListAccessPointsForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists current S3 Batch Operations jobs and jobs that have ended within the last 30 days for the AWS account making the
 * request. For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
 * Batch Operations</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * Related actions
 *
 * include> <p/> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
 */
ListJobsResponse * S3ControlClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * ListRegionalBucketsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all Outposts buckets in an Outpost that are owned by the authenticated sender of the request. For more
 * information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on
 * Outposts</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
 * <code>x-amz-outpost-id</code> in your request, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListRegionalBuckets.html#API_control_ListRegionalBuckets_Examples">Examples</a>
 */
ListRegionalBucketsResponse * S3ControlClient::listRegionalBuckets(const ListRegionalBucketsRequest &request)
{
    return qobject_cast<ListRegionalBucketsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * ListStorageLensConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of Amazon S3 Storage Lens configurations. For more information about S3 Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing your storage activity and usage with
 * Amazon S3 Storage Lens </a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * To use this action, you must have permission to perform the <code>s3:ListStorageLensConfigurations</code> action. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting permissions to use
 * Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
 */
ListStorageLensConfigurationsResponse * S3ControlClient::listStorageLensConfigurations(const ListStorageLensConfigurationsRequest &request)
{
    return qobject_cast<ListStorageLensConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutAccessPointConfigurationForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces configuration for an Object Lambda Access
 *
 * Point>
 *
 * The following actions are related to
 *
 * <code>PutAccessPointConfigurationForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointConfigurationForObjectLambda.html">GetAccessPointConfigurationForObjectLambda</a>
 */
PutAccessPointConfigurationForObjectLambdaResponse * S3ControlClient::putAccessPointConfigurationForObjectLambda(const PutAccessPointConfigurationForObjectLambdaRequest &request)
{
    return qobject_cast<PutAccessPointConfigurationForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutAccessPointPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an access policy with the specified access point. Each access point can have only one policy, so a request
 * made to this API replaces any existing policy associated with the specified access
 *
 * point> <p/>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html#API_control_PutAccessPointPolicy_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>PutAccessPointPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
 */
PutAccessPointPolicyResponse * S3ControlClient::putAccessPointPolicy(const PutAccessPointPolicyRequest &request)
{
    return qobject_cast<PutAccessPointPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutAccessPointPolicyForObjectLambdaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or replaces resource policy for an Object Lambda Access Point. For an example policy, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-create.html#olap-create-cli">Creating Object Lambda
 * Access Points</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * The following actions are related to
 *
 * <code>PutAccessPointPolicyForObjectLambda</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicyForObjectLambda.html">DeleteAccessPointPolicyForObjectLambda</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicyForObjectLambda.html">GetAccessPointPolicyForObjectLambda</a>
 */
PutAccessPointPolicyForObjectLambdaResponse * S3ControlClient::putAccessPointPolicyForObjectLambda(const PutAccessPointPolicyForObjectLambdaRequest &request)
{
    return qobject_cast<PutAccessPointPolicyForObjectLambdaResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutBucketLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action puts a lifecycle configuration to an Amazon S3 on Outposts bucket. To put a lifecycle configuration to an S3
 * bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
 * in the <i>Amazon S3 API Reference</i>.
 *
 * </p </note>
 *
 * Creates a new lifecycle configuration for the S3 on Outposts bucket or replaces an existing lifecycle configuration.
 * Outposts buckets only support lifecycle configurations that delete/expire objects after a certain period of time and
 * abort incomplete multipart
 *
 * uploads> <p/>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html#API_control_PutBucketLifecycleConfiguration_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>PutBucketLifecycleConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
 */
PutBucketLifecycleConfigurationResponse * S3ControlClient::putBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest &request)
{
    return qobject_cast<PutBucketLifecycleConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action puts a bucket policy to an Amazon S3 on Outposts bucket. To put a policy on an S3 bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketPolicy.html">PutBucketPolicy</a> in the <i>Amazon S3
 * API Reference</i>.
 *
 * </p </note>
 *
 * Applies an Amazon S3 bucket policy to an Outposts bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * If you are using an identity other than the root user of the AWS account that owns the Outposts bucket, the calling
 * identity must have the <code>PutBucketPolicy</code> permissions on the specified Outposts bucket and belong to the
 * bucket owner's account in order to use this
 *
 * action>
 *
 * If you don't have <code>PutBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access Denied</code> error. If
 * you have the correct permissions, but you're not using an identity that belongs to the bucket owner's account, Amazon S3
 * returns a <code>405 Method Not Allowed</code>
 *
 * error> <b>
 *
 * As a security precaution, the root user of the AWS account that owns a bucket can always use this action, even if the
 * policy explicitly denies the root user the ability to perform this action.
 *
 * </p </b>
 *
 * For more information about bucket policies, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using Bucket Policies and User
 *
 * Policies</a>>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html#API_control_PutBucketPolicy_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>PutBucketPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
 */
PutBucketPolicyResponse * S3ControlClient::putBucketPolicy(const PutBucketPolicyRequest &request)
{
    return qobject_cast<PutBucketPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutBucketTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action puts tags on an Amazon S3 on Outposts bucket. To put tags on an S3 bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a> in the <i>Amazon
 * S3 API Reference</i>.
 *
 * </p </note>
 *
 * Sets the tags for an S3 on Outposts bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using Amazon S3 on Outposts</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * Use tags to organize your AWS bill to reflect your own cost structure. To do this, sign up to get your AWS account bill
 * with tag key values included. Then, to see the cost of combined resources, organize your billing information according
 * to resources with the same tag key values. For example, you can tag several resources with a specific application name,
 * and then organize your billing information to see the total cost of that application across several services. For more
 * information, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
 * allocation and
 *
 * tagging</a>> <note>
 *
 * Within a bucket, if you add a tag that has the same key as an existing tag, the new value overwrites the old value. For
 * more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CostAllocTagging.html"> Using cost
 * allocation in Amazon S3 bucket
 *
 * tags</a>> </note>
 *
 * To use this action, you must have permissions to perform the <code>s3-outposts:PutBucketTagging</code> action. The
 * Outposts bucket owner has this permission by default and can grant this permission to others. For more information about
 * permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
 * Permissions Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing access permissions to your
 * Amazon S3
 *
 * resources</a>>
 *
 * <code>PutBucketTagging</code> has the following special
 *
 * errors> <ul> <li>
 *
 * Error code: <code>InvalidTagError</code>
 *
 * </p <ul> <li>
 *
 * Description: The tag provided was not a valid tag. This error can occur if the tag did not pass input validation. For
 * information about tag restrictions, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html"> User-Defined Tag
 * Restrictions</a> and <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">
 * AWS-Generated Cost Allocation Tag
 *
 * Restrictions</a>> </li> </ul> </li> <li>
 *
 * Error code: <code>MalformedXMLError</code>
 *
 * </p <ul> <li>
 *
 * Description: The XML provided does not match the
 *
 * schema> </li> </ul> </li> <li>
 *
 * Error code: <code>OperationAbortedError </code>
 *
 * </p <ul> <li>
 *
 * Description: A conflicting conditional action is currently in progress against this resource. Try
 *
 * again> </li> </ul> </li> <li>
 *
 * Error code: <code>InternalError</code>
 *
 * </p <ul> <li>
 *
 * Description: The service was unable to apply the provided tag to the
 *
 * bucket> </li> </ul> </li> </ul>
 *
 * All Amazon S3 on Outposts REST API requests for this action require an additional parameter of
 * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on Outposts endpoint hostname prefix instead of
 * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
 * endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html#API_control_PutBucketTagging_Examples">Examples</a>
 *
 * section>
 *
 * The following actions are related to
 *
 * <code>PutBucketTagging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
 */
PutBucketTaggingResponse * S3ControlClient::putBucketTagging(const PutBucketTaggingRequest &request)
{
    return qobject_cast<PutBucketTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutJobTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the supplied tag-set on an S3 Batch Operations
 *
 * job>
 *
 * A tag is a key-value pair. You can associate S3 Batch Operations tags with any job by sending a PUT request against the
 * tagging subresource that is associated with the job. To modify the existing tag set, you can either replace the existing
 * tag set entirely, or make changes within the existing tag set by retrieving the existing tag set using <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>, modify that tag
 * set, and use this action to replace the tag set with the one you modified. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
 * access and labeling jobs using tags</a> in the <i>Amazon S3 User Guide</i>.
 *
 * </p <p/> <note> <ul> <li>
 *
 * If you send this request with an empty tag set, Amazon S3 deletes the existing tag set on the Batch Operations job. If
 * you use this method, you are charged for a Tier 1 Request (PUT). For more information, see <a
 * href="http://aws.amazon.com/s3/pricing/">Amazon S3
 *
 * pricing</a>> </li> <li>
 *
 * For deleting existing tags for your Batch Operations job, a <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a> request is
 * preferred because it achieves the same result without incurring
 *
 * charges> </li> <li>
 *
 * A few things to consider about using
 *
 * tags> <ul> <li>
 *
 * Amazon S3 limits the maximum number of tags to 50 tags per
 *
 * job> </li> <li>
 *
 * You can associate up to 50 tags with a job as long as they have unique tag
 *
 * keys> </li> <li>
 *
 * A tag key can be up to 128 Unicode characters in length, and tag values can be up to 256 Unicode characters in
 *
 * length> </li> <li>
 *
 * The key and values are case
 *
 * sensitive> </li> <li>
 *
 * For tagging-related restrictions related to characters and encodings, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined Tag
 * Restrictions</a> in the <i>AWS Billing and Cost Management User
 *
 * Guide</i>> </li> </ul> </li> </ul> </note> <p/>
 *
 * To use this action, you must have permission to perform the <code>s3:PutJobTagging</code>
 *
 * action>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreatJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
 */
PutJobTaggingResponse * S3ControlClient::putJobTagging(const PutJobTaggingRequest &request)
{
    return qobject_cast<PutJobTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutPublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or modifies the <code>PublicAccessBlock</code> configuration for an AWS account. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html"> Using Amazon S3 block
 * public
 *
 * access</a>>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
 */
PutPublicAccessBlockResponse * S3ControlClient::putPublicAccessBlock(const PutPublicAccessBlockRequest &request)
{
    return qobject_cast<PutPublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutStorageLensConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts an Amazon S3 Storage Lens configuration. For more information about S3 Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Working with Amazon S3 Storage Lens</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * To use this action, you must have permission to perform the <code>s3:PutStorageLensConfiguration</code> action. For more
 * information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
 * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
 */
PutStorageLensConfigurationResponse * S3ControlClient::putStorageLensConfiguration(const PutStorageLensConfigurationRequest &request)
{
    return qobject_cast<PutStorageLensConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutStorageLensConfigurationTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Put or replace tags on an existing Amazon S3 Storage Lens configuration. For more information about S3 Storage Lens, see
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing your storage activity and usage
 * with Amazon S3 Storage Lens </a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * To use this action, you must have permission to perform the <code>s3:PutStorageLensConfigurationTagging</code> action.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting permissions to use
 * Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
 */
PutStorageLensConfigurationTaggingResponse * S3ControlClient::putStorageLensConfigurationTagging(const PutStorageLensConfigurationTaggingRequest &request)
{
    return qobject_cast<PutStorageLensConfigurationTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * UpdateJobPriorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing S3 Batch Operations job's priority. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3 Batch Operations</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>> <p/>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
 */
UpdateJobPriorityResponse * S3ControlClient::updateJobPriority(const UpdateJobPriorityRequest &request)
{
    return qobject_cast<UpdateJobPriorityResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * UpdateJobStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status for the specified job. Use this action to confirm that you want to run a job or to cancel an existing
 * job. For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3 Batch
 * Operations</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <p/>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
 */
UpdateJobStatusResponse * S3ControlClient::updateJobStatus(const UpdateJobStatusRequest &request)
{
    return qobject_cast<UpdateJobStatusResponse *>(send(request));
}

/*!
 * \class QtAws::S3Control::S3ControlClientPrivate
 * \brief The S3ControlClientPrivate class provides private implementation for S3ControlClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a S3ControlClientPrivate object with public implementation \a q.
 */
S3ControlClientPrivate::S3ControlClientPrivate(S3ControlClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace S3Control
} // namespace QtAws
