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

#include "cloudfrontclient.h"
#include "cloudfrontclient_p.h"

#include "core/awssignaturev4.h"
#include "associatealiasrequest.h"
#include "associatealiasresponse.h"
#include "createcachepolicyrequest.h"
#include "createcachepolicyresponse.h"
#include "createcloudfrontoriginaccessidentityrequest.h"
#include "createcloudfrontoriginaccessidentityresponse.h"
#include "createdistributionrequest.h"
#include "createdistributionresponse.h"
#include "createdistributionwithtagsrequest.h"
#include "createdistributionwithtagsresponse.h"
#include "createfieldlevelencryptionconfigrequest.h"
#include "createfieldlevelencryptionconfigresponse.h"
#include "createfieldlevelencryptionprofilerequest.h"
#include "createfieldlevelencryptionprofileresponse.h"
#include "createfunctionrequest.h"
#include "createfunctionresponse.h"
#include "createinvalidationrequest.h"
#include "createinvalidationresponse.h"
#include "createkeygrouprequest.h"
#include "createkeygroupresponse.h"
#include "createmonitoringsubscriptionrequest.h"
#include "createmonitoringsubscriptionresponse.h"
#include "createoriginaccesscontrolrequest.h"
#include "createoriginaccesscontrolresponse.h"
#include "createoriginrequestpolicyrequest.h"
#include "createoriginrequestpolicyresponse.h"
#include "createpublickeyrequest.h"
#include "createpublickeyresponse.h"
#include "createrealtimelogconfigrequest.h"
#include "createrealtimelogconfigresponse.h"
#include "createresponseheaderspolicyrequest.h"
#include "createresponseheaderspolicyresponse.h"
#include "createstreamingdistributionrequest.h"
#include "createstreamingdistributionresponse.h"
#include "createstreamingdistributionwithtagsrequest.h"
#include "createstreamingdistributionwithtagsresponse.h"
#include "deletecachepolicyrequest.h"
#include "deletecachepolicyresponse.h"
#include "deletecloudfrontoriginaccessidentityrequest.h"
#include "deletecloudfrontoriginaccessidentityresponse.h"
#include "deletedistributionrequest.h"
#include "deletedistributionresponse.h"
#include "deletefieldlevelencryptionconfigrequest.h"
#include "deletefieldlevelencryptionconfigresponse.h"
#include "deletefieldlevelencryptionprofilerequest.h"
#include "deletefieldlevelencryptionprofileresponse.h"
#include "deletefunctionrequest.h"
#include "deletefunctionresponse.h"
#include "deletekeygrouprequest.h"
#include "deletekeygroupresponse.h"
#include "deletemonitoringsubscriptionrequest.h"
#include "deletemonitoringsubscriptionresponse.h"
#include "deleteoriginaccesscontrolrequest.h"
#include "deleteoriginaccesscontrolresponse.h"
#include "deleteoriginrequestpolicyrequest.h"
#include "deleteoriginrequestpolicyresponse.h"
#include "deletepublickeyrequest.h"
#include "deletepublickeyresponse.h"
#include "deleterealtimelogconfigrequest.h"
#include "deleterealtimelogconfigresponse.h"
#include "deleteresponseheaderspolicyrequest.h"
#include "deleteresponseheaderspolicyresponse.h"
#include "deletestreamingdistributionrequest.h"
#include "deletestreamingdistributionresponse.h"
#include "describefunctionrequest.h"
#include "describefunctionresponse.h"
#include "getcachepolicyrequest.h"
#include "getcachepolicyresponse.h"
#include "getcachepolicyconfigrequest.h"
#include "getcachepolicyconfigresponse.h"
#include "getcloudfrontoriginaccessidentityrequest.h"
#include "getcloudfrontoriginaccessidentityresponse.h"
#include "getcloudfrontoriginaccessidentityconfigrequest.h"
#include "getcloudfrontoriginaccessidentityconfigresponse.h"
#include "getdistributionrequest.h"
#include "getdistributionresponse.h"
#include "getdistributionconfigrequest.h"
#include "getdistributionconfigresponse.h"
#include "getfieldlevelencryptionrequest.h"
#include "getfieldlevelencryptionresponse.h"
#include "getfieldlevelencryptionconfigrequest.h"
#include "getfieldlevelencryptionconfigresponse.h"
#include "getfieldlevelencryptionprofilerequest.h"
#include "getfieldlevelencryptionprofileresponse.h"
#include "getfieldlevelencryptionprofileconfigrequest.h"
#include "getfieldlevelencryptionprofileconfigresponse.h"
#include "getfunctionrequest.h"
#include "getfunctionresponse.h"
#include "getinvalidationrequest.h"
#include "getinvalidationresponse.h"
#include "getkeygrouprequest.h"
#include "getkeygroupresponse.h"
#include "getkeygroupconfigrequest.h"
#include "getkeygroupconfigresponse.h"
#include "getmonitoringsubscriptionrequest.h"
#include "getmonitoringsubscriptionresponse.h"
#include "getoriginaccesscontrolrequest.h"
#include "getoriginaccesscontrolresponse.h"
#include "getoriginaccesscontrolconfigrequest.h"
#include "getoriginaccesscontrolconfigresponse.h"
#include "getoriginrequestpolicyrequest.h"
#include "getoriginrequestpolicyresponse.h"
#include "getoriginrequestpolicyconfigrequest.h"
#include "getoriginrequestpolicyconfigresponse.h"
#include "getpublickeyrequest.h"
#include "getpublickeyresponse.h"
#include "getpublickeyconfigrequest.h"
#include "getpublickeyconfigresponse.h"
#include "getrealtimelogconfigrequest.h"
#include "getrealtimelogconfigresponse.h"
#include "getresponseheaderspolicyrequest.h"
#include "getresponseheaderspolicyresponse.h"
#include "getresponseheaderspolicyconfigrequest.h"
#include "getresponseheaderspolicyconfigresponse.h"
#include "getstreamingdistributionrequest.h"
#include "getstreamingdistributionresponse.h"
#include "getstreamingdistributionconfigrequest.h"
#include "getstreamingdistributionconfigresponse.h"
#include "listcachepoliciesrequest.h"
#include "listcachepoliciesresponse.h"
#include "listcloudfrontoriginaccessidentitiesrequest.h"
#include "listcloudfrontoriginaccessidentitiesresponse.h"
#include "listconflictingaliasesrequest.h"
#include "listconflictingaliasesresponse.h"
#include "listdistributionsrequest.h"
#include "listdistributionsresponse.h"
#include "listdistributionsbycachepolicyidrequest.h"
#include "listdistributionsbycachepolicyidresponse.h"
#include "listdistributionsbykeygrouprequest.h"
#include "listdistributionsbykeygroupresponse.h"
#include "listdistributionsbyoriginrequestpolicyidrequest.h"
#include "listdistributionsbyoriginrequestpolicyidresponse.h"
#include "listdistributionsbyrealtimelogconfigrequest.h"
#include "listdistributionsbyrealtimelogconfigresponse.h"
#include "listdistributionsbyresponseheaderspolicyidrequest.h"
#include "listdistributionsbyresponseheaderspolicyidresponse.h"
#include "listdistributionsbywebaclidrequest.h"
#include "listdistributionsbywebaclidresponse.h"
#include "listfieldlevelencryptionconfigsrequest.h"
#include "listfieldlevelencryptionconfigsresponse.h"
#include "listfieldlevelencryptionprofilesrequest.h"
#include "listfieldlevelencryptionprofilesresponse.h"
#include "listfunctionsrequest.h"
#include "listfunctionsresponse.h"
#include "listinvalidationsrequest.h"
#include "listinvalidationsresponse.h"
#include "listkeygroupsrequest.h"
#include "listkeygroupsresponse.h"
#include "listoriginaccesscontrolsrequest.h"
#include "listoriginaccesscontrolsresponse.h"
#include "listoriginrequestpoliciesrequest.h"
#include "listoriginrequestpoliciesresponse.h"
#include "listpublickeysrequest.h"
#include "listpublickeysresponse.h"
#include "listrealtimelogconfigsrequest.h"
#include "listrealtimelogconfigsresponse.h"
#include "listresponseheaderspoliciesrequest.h"
#include "listresponseheaderspoliciesresponse.h"
#include "liststreamingdistributionsrequest.h"
#include "liststreamingdistributionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "publishfunctionrequest.h"
#include "publishfunctionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testfunctionrequest.h"
#include "testfunctionresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecachepolicyrequest.h"
#include "updatecachepolicyresponse.h"
#include "updatecloudfrontoriginaccessidentityrequest.h"
#include "updatecloudfrontoriginaccessidentityresponse.h"
#include "updatedistributionrequest.h"
#include "updatedistributionresponse.h"
#include "updatefieldlevelencryptionconfigrequest.h"
#include "updatefieldlevelencryptionconfigresponse.h"
#include "updatefieldlevelencryptionprofilerequest.h"
#include "updatefieldlevelencryptionprofileresponse.h"
#include "updatefunctionrequest.h"
#include "updatefunctionresponse.h"
#include "updatekeygrouprequest.h"
#include "updatekeygroupresponse.h"
#include "updateoriginaccesscontrolrequest.h"
#include "updateoriginaccesscontrolresponse.h"
#include "updateoriginrequestpolicyrequest.h"
#include "updateoriginrequestpolicyresponse.h"
#include "updatepublickeyrequest.h"
#include "updatepublickeyresponse.h"
#include "updaterealtimelogconfigrequest.h"
#include "updaterealtimelogconfigresponse.h"
#include "updateresponseheaderspolicyrequest.h"
#include "updateresponseheaderspolicyresponse.h"
#include "updatestreamingdistributionrequest.h"
#include "updatestreamingdistributionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudFront
 * \brief Contains classess for accessing Amazon CloudFront.
 *
 * \inmodule QtAwsCloudFront
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CloudFrontClient
 * \brief The CloudFrontClient class provides access to the Amazon CloudFront service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 */

/*!
 * \brief Constructs a CloudFrontClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudFrontClient::CloudFrontClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudFrontClientPrivate(this), parent)
{
    Q_D(CloudFrontClient);
    d->apiVersion = QStringLiteral("2020-05-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudfront");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudFront");
    d->serviceName = QStringLiteral("cloudfront");
}

/*!
 * \overload CloudFrontClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudFrontClient::CloudFrontClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudFrontClientPrivate(this), parent)
{
    Q_D(CloudFrontClient);
    d->apiVersion = QStringLiteral("2020-05-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudfront");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudFront");
    d->serviceName = QStringLiteral("cloudfront");
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * AssociateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an alias (also known as a CNAME or an alternate domain name) with a CloudFront
 *
 * distribution>
 *
 * With this operation you can move an alias that’s already in use on a CloudFront distribution to a different distribution
 * in one step. This prevents the downtime that could occur if you first remove the alias from one distribution and then
 * separately add the alias to another
 *
 * distribution>
 *
 * To use this operation to associate an alias with a distribution, you provide the alias and the ID of the target
 * distribution for the alias. For more information, including how to set up the target distribution, prerequisites that
 * you must complete, and other restrictions, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/CNAMEs.html#alternate-domain-names-move">Moving
 * an alternate domain name to a different distribution</a> in the <i>Amazon CloudFront Developer
 */
AssociateAliasResponse * CloudFrontClient::associateAlias(const AssociateAliasRequest &request)
{
    return qobject_cast<AssociateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateCachePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a cache
 *
 * policy>
 *
 * After you create a cache policy, you can attach it to one or more cache behaviors. When it’s attached to a cache
 * behavior, the cache policy determines the
 *
 * following> <ul> <li>
 *
 * The values that CloudFront includes in the <i>cache key</i>. These values can include HTTP headers, cookies, and URL
 * query strings. CloudFront uses the cache key to find an object in its cache that it can return to the
 *
 * viewer> </li> <li>
 *
 * The default, minimum, and maximum time to live (TTL) values that you want objects to stay in the CloudFront
 *
 * cache> </li> </ul>
 *
 * The headers, cookies, and query strings that are included in the cache key are automatically included in requests that
 * CloudFront sends to the origin. CloudFront sends a request when it can’t find an object in its cache that matches the
 * request’s cache key. If you want to send values to the origin but <i>not</i> include them in the cache key, use
 *
 * <code>OriginRequestPolicy</code>>
 *
 * For more information about cache policies, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html">Controlling the
 * cache key</a> in the <i>Amazon CloudFront Developer
 */
CreateCachePolicyResponse * CloudFrontClient::createCachePolicy(const CreateCachePolicyRequest &request)
{
    return qobject_cast<CreateCachePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new origin access identity. If you're using Amazon S3 for your origin, you can use an origin access identity
 * to require users to access your content using a CloudFront URL instead of the Amazon S3 URL. For more information about
 * how to use origin access identities, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving Private Content
 * through CloudFront</a> in the <i>Amazon CloudFront Developer
 */
CreateCloudFrontOriginAccessIdentityResponse * CloudFrontClient::createCloudFrontOriginAccessIdentity(const CreateCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<CreateCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new web distribution. You create a CloudFront distribution to tell CloudFront where you want content to be
 * delivered from, and the details about how to track and manage content delivery. Send a <code>POST</code> request to the
 * <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution ID</code>
 *
 * resource> <b>
 *
 * When you update a distribution, there are more required fields than when you create a distribution. When you update your
 * distribution by using <a
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
 * follow the steps included in the documentation to get the current configuration and then make your updates. This helps
 * to make sure that you include all of the required fields. To view a summary, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
 * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon CloudFront Developer
 */
CreateDistributionResponse * CloudFrontClient::createDistribution(const CreateDistributionRequest &request)
{
    return qobject_cast<CreateDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateDistributionWithTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new distribution with
 */
CreateDistributionWithTagsResponse * CloudFrontClient::createDistributionWithTags(const CreateDistributionWithTagsRequest &request)
{
    return qobject_cast<CreateDistributionWithTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new field-level encryption
 */
CreateFieldLevelEncryptionConfigResponse * CloudFrontClient::createFieldLevelEncryptionConfig(const CreateFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<CreateFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a field-level encryption
 */
CreateFieldLevelEncryptionProfileResponse * CloudFrontClient::createFieldLevelEncryptionProfile(const CreateFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<CreateFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a CloudFront
 *
 * function>
 *
 * To create a function, you provide the function code and some configuration information about the function. The response
 * contains an Amazon Resource Name (ARN) that uniquely identifies the
 *
 * function>
 *
 * When you create a function, it’s in the <code>DEVELOPMENT</code> stage. In this stage, you can test the function with
 * <code>TestFunction</code>, and update it with
 *
 * <code>UpdateFunction</code>>
 *
 * When you’re ready to use your function with a CloudFront distribution, use <code>PublishFunction</code> to copy the
 * function from the <code>DEVELOPMENT</code> stage to <code>LIVE</code>. When it’s live, you can attach the function to a
 * distribution’s cache behavior, using the function’s
 */
CreateFunctionResponse * CloudFrontClient::createFunction(const CreateFunctionRequest &request)
{
    return qobject_cast<CreateFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateInvalidationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new invalidation.
 */
CreateInvalidationResponse * CloudFrontClient::createInvalidation(const CreateInvalidationRequest &request)
{
    return qobject_cast<CreateInvalidationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateKeyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a key group that you can use with <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">CloudFront signed URLs and
 * signed
 *
 * cookies</a>>
 *
 * To create a key group, you must specify at least one public key for the key group. After you create a key group, you can
 * reference it from one or more cache behaviors. When you reference a key group in a cache behavior, CloudFront requires
 * signed URLs or signed cookies for all requests that match the cache behavior. The URLs or cookies must be signed with a
 * private key whose corresponding public key is in the key group. The signed URL or cookie contains information about
 * which public key CloudFront should use to verify the signature. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving private
 * content</a> in the <i>Amazon CloudFront Developer
 */
CreateKeyGroupResponse * CloudFrontClient::createKeyGroup(const CreateKeyGroupRequest &request)
{
    return qobject_cast<CreateKeyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateMonitoringSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables additional CloudWatch metrics for the specified CloudFront distribution. The additional metrics incur an
 * additional
 *
 * cost>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/viewing-cloudfront-metrics.html#monitoring-console.distributions-additional">Viewing
 * additional CloudFront distribution metrics</a> in the <i>Amazon CloudFront Developer
 */
CreateMonitoringSubscriptionResponse * CloudFrontClient::createMonitoringSubscription(const CreateMonitoringSubscriptionRequest &request)
{
    return qobject_cast<CreateMonitoringSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateOriginAccessControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new origin access control in CloudFront. After you create an origin access control, you can add it to an
 * origin in a CloudFront distribution so that CloudFront sends authenticated (signed) requests to the
 *
 * origin>
 *
 * For an Amazon S3 origin, this makes it possible to block public access to the Amazon S3 bucket so that viewers (users)
 * can access the content in the bucket only through
 *
 * CloudFront>
 *
 * For more information about using a CloudFront origin access control, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
 * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
 */
CreateOriginAccessControlResponse * CloudFrontClient::createOriginAccessControl(const CreateOriginAccessControlRequest &request)
{
    return qobject_cast<CreateOriginAccessControlResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateOriginRequestPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an origin request
 *
 * policy>
 *
 * After you create an origin request policy, you can attach it to one or more cache behaviors. When it’s attached to a
 * cache behavior, the origin request policy determines the values that CloudFront includes in requests that it sends to
 * the origin. Each request that CloudFront sends to the origin includes the
 *
 * following> <ul> <li>
 *
 * The request body and the URL path (without the domain name) from the viewer
 *
 * request> </li> <li>
 *
 * The headers that CloudFront automatically includes in every origin request, including <code>Host</code>,
 * <code>User-Agent</code>, and
 *
 * <code>X-Amz-Cf-Id</code>> </li> <li>
 *
 * All HTTP headers, cookies, and URL query strings that are specified in the cache policy or the origin request policy.
 * These can include items from the viewer request and, in the case of headers, additional ones that are added by
 *
 * CloudFront> </li> </ul>
 *
 * CloudFront sends a request when it can’t find a valid object in its cache that matches the request. If you want to send
 * values to the origin and also include them in the cache key, use
 *
 * <code>CachePolicy</code>>
 *
 * For more information about origin request policies, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html">Controlling
 * origin requests</a> in the <i>Amazon CloudFront Developer
 */
CreateOriginRequestPolicyResponse * CloudFrontClient::createOriginRequestPolicy(const CreateOriginRequestPolicyRequest &request)
{
    return qobject_cast<CreateOriginRequestPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreatePublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads a public key to CloudFront that you can use with <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed URLs and signed
 * cookies</a>, or with <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
 */
CreatePublicKeyResponse * CloudFrontClient::createPublicKey(const CreatePublicKeyRequest &request)
{
    return qobject_cast<CreatePublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateRealtimeLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a real-time log
 *
 * configuration>
 *
 * After you create a real-time log configuration, you can attach it to one or more cache behaviors to send real-time log
 * data to the specified Amazon Kinesis data
 *
 * stream>
 *
 * For more information about real-time log configurations, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time logs</a> in the
 * <i>Amazon CloudFront Developer
 */
CreateRealtimeLogConfigResponse * CloudFrontClient::createRealtimeLogConfig(const CreateRealtimeLogConfigRequest &request)
{
    return qobject_cast<CreateRealtimeLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateResponseHeadersPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a response headers
 *
 * policy>
 *
 * A response headers policy contains information about a set of HTTP response headers and their values. To create a
 * response headers policy, you provide some metadata about the policy, and a set of configurations that specify the
 * response
 *
 * headers>
 *
 * After you create a response headers policy, you can use its ID to attach it to one or more cache behaviors in a
 * CloudFront distribution. When it’s attached to a cache behavior, CloudFront adds the headers in the policy to HTTP
 * responses that it sends for requests that match the cache
 */
CreateResponseHeadersPolicyResponse * CloudFrontClient::createResponseHeadersPolicy(const CreateResponseHeadersPolicyRequest &request)
{
    return qobject_cast<CreateResponseHeadersPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is deprecated. Amazon CloudFront is deprecating real-time messaging protocol (RTMP) distributions on December
 * 31, 2020. For more information, <a href="http://forums.aws.amazon.com/ann.jspa?annID=7356">read the announcement</a> on
 * the Amazon CloudFront discussion
 */
CreateStreamingDistributionResponse * CloudFrontClient::createStreamingDistribution(const CreateStreamingDistributionRequest &request)
{
    return qobject_cast<CreateStreamingDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateStreamingDistributionWithTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is deprecated. Amazon CloudFront is deprecating real-time messaging protocol (RTMP) distributions on December
 * 31, 2020. For more information, <a href="http://forums.aws.amazon.com/ann.jspa?annID=7356">read the announcement</a> on
 * the Amazon CloudFront discussion
 */
CreateStreamingDistributionWithTagsResponse * CloudFrontClient::createStreamingDistributionWithTags(const CreateStreamingDistributionWithTagsRequest &request)
{
    return qobject_cast<CreateStreamingDistributionWithTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteCachePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a cache
 *
 * policy>
 *
 * You cannot delete a cache policy if it’s attached to a cache behavior. First update your distributions to remove the
 * cache policy from all cache behaviors, then delete the cache
 *
 * policy>
 *
 * To delete a cache policy, you must provide the policy’s identifier and version. To get these values, you can use
 * <code>ListCachePolicies</code> or
 */
DeleteCachePolicyResponse * CloudFrontClient::deleteCachePolicy(const DeleteCachePolicyRequest &request)
{
    return qobject_cast<DeleteCachePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an origin access identity.
 */
DeleteCloudFrontOriginAccessIdentityResponse * CloudFrontClient::deleteCloudFrontOriginAccessIdentity(const DeleteCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<DeleteCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a distribution.
 */
DeleteDistributionResponse * CloudFrontClient::deleteDistribution(const DeleteDistributionRequest &request)
{
    return qobject_cast<DeleteDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a field-level encryption
 */
DeleteFieldLevelEncryptionConfigResponse * CloudFrontClient::deleteFieldLevelEncryptionConfig(const DeleteFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<DeleteFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a field-level encryption
 */
DeleteFieldLevelEncryptionProfileResponse * CloudFrontClient::deleteFieldLevelEncryptionProfile(const DeleteFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<DeleteFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a CloudFront
 *
 * function>
 *
 * You cannot delete a function if it’s associated with a cache behavior. First, update your distributions to remove the
 * function association from all cache behaviors, then delete the
 *
 * function>
 *
 * To delete a function, you must provide the function’s name and version (<code>ETag</code> value). To get these values,
 * you can use <code>ListFunctions</code> and
 */
DeleteFunctionResponse * CloudFrontClient::deleteFunction(const DeleteFunctionRequest &request)
{
    return qobject_cast<DeleteFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteKeyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a key
 *
 * group>
 *
 * You cannot delete a key group that is referenced in a cache behavior. First update your distributions to remove the key
 * group from all cache behaviors, then delete the key
 *
 * group>
 *
 * To delete a key group, you must provide the key group’s identifier and version. To get these values, use
 * <code>ListKeyGroups</code> followed by <code>GetKeyGroup</code> or
 */
DeleteKeyGroupResponse * CloudFrontClient::deleteKeyGroup(const DeleteKeyGroupRequest &request)
{
    return qobject_cast<DeleteKeyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteMonitoringSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables additional CloudWatch metrics for the specified CloudFront
 */
DeleteMonitoringSubscriptionResponse * CloudFrontClient::deleteMonitoringSubscription(const DeleteMonitoringSubscriptionRequest &request)
{
    return qobject_cast<DeleteMonitoringSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteOriginAccessControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a CloudFront origin access
 *
 * control>
 *
 * You cannot delete an origin access control if it's in use. First, update all distributions to remove the origin access
 * control from all origins, then delete the origin access
 */
DeleteOriginAccessControlResponse * CloudFrontClient::deleteOriginAccessControl(const DeleteOriginAccessControlRequest &request)
{
    return qobject_cast<DeleteOriginAccessControlResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteOriginRequestPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an origin request
 *
 * policy>
 *
 * You cannot delete an origin request policy if it’s attached to any cache behaviors. First update your distributions to
 * remove the origin request policy from all cache behaviors, then delete the origin request
 *
 * policy>
 *
 * To delete an origin request policy, you must provide the policy’s identifier and version. To get the identifier, you can
 * use <code>ListOriginRequestPolicies</code> or
 */
DeleteOriginRequestPolicyResponse * CloudFrontClient::deleteOriginRequestPolicy(const DeleteOriginRequestPolicyRequest &request)
{
    return qobject_cast<DeleteOriginRequestPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeletePublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a public key you previously added to
 */
DeletePublicKeyResponse * CloudFrontClient::deletePublicKey(const DeletePublicKeyRequest &request)
{
    return qobject_cast<DeletePublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteRealtimeLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a real-time log
 *
 * configuration>
 *
 * You cannot delete a real-time log configuration if it’s attached to a cache behavior. First update your distributions to
 * remove the real-time log configuration from all cache behaviors, then delete the real-time log
 *
 * configuration>
 *
 * To delete a real-time log configuration, you can provide the configuration’s name or its Amazon Resource Name (ARN). You
 * must provide at least one. If you provide both, CloudFront uses the name to identify the real-time log configuration to
 */
DeleteRealtimeLogConfigResponse * CloudFrontClient::deleteRealtimeLogConfig(const DeleteRealtimeLogConfigRequest &request)
{
    return qobject_cast<DeleteRealtimeLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteResponseHeadersPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a response headers
 *
 * policy>
 *
 * You cannot delete a response headers policy if it’s attached to a cache behavior. First update your distributions to
 * remove the response headers policy from all cache behaviors, then delete the response headers
 *
 * policy>
 *
 * To delete a response headers policy, you must provide the policy’s identifier and version. To get these values, you can
 * use <code>ListResponseHeadersPolicies</code> or <code>GetResponseHeadersPolicy</code>.
 */
DeleteResponseHeadersPolicyResponse * CloudFrontClient::deleteResponseHeadersPolicy(const DeleteResponseHeadersPolicyRequest &request)
{
    return qobject_cast<DeleteResponseHeadersPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a streaming distribution. To delete an RTMP distribution using the CloudFront API, perform the following
 *
 * steps>
 *
 * <b>To delete an RTMP distribution using the CloudFront
 *
 * API</b>> <ol> <li>
 *
 * Disable the RTMP
 *
 * distribution> </li> <li>
 *
 * Submit a <code>GET Streaming Distribution Config</code> request to get the current configuration and the
 * <code>Etag</code> header for the distribution.
 *
 * </p </li> <li>
 *
 * Update the XML document that was returned in the response to your <code>GET Streaming Distribution Config</code> request
 * to change the value of <code>Enabled</code> to
 *
 * <code>false</code>> </li> <li>
 *
 * Submit a <code>PUT Streaming Distribution Config</code> request to update the configuration for your distribution. In
 * the request body, include the XML document that you updated in Step 3. Then set the value of the HTTP
 * <code>If-Match</code> header to the value of the <code>ETag</code> header that CloudFront returned when you submitted
 * the <code>GET Streaming Distribution Config</code> request in Step
 *
 * 2> </li> <li>
 *
 * Review the response to the <code>PUT Streaming Distribution Config</code> request to confirm that the distribution was
 * successfully
 *
 * disabled> </li> <li>
 *
 * Submit a <code>GET Streaming Distribution Config</code> request to confirm that your changes have propagated. When
 * propagation is complete, the value of <code>Status</code> is
 *
 * <code>Deployed</code>> </li> <li>
 *
 * Submit a <code>DELETE Streaming Distribution</code> request. Set the value of the HTTP <code>If-Match</code> header to
 * the value of the <code>ETag</code> header that CloudFront returned when you submitted the <code>GET Streaming
 * Distribution Config</code> request in Step
 *
 * 2> </li> <li>
 *
 * Review the response to your <code>DELETE Streaming Distribution</code> request to confirm that the distribution was
 * successfully
 *
 * deleted> </li> </ol>
 *
 * For information about deleting a distribution using the CloudFront console, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting a
 * Distribution</a> in the <i>Amazon CloudFront Developer
 */
DeleteStreamingDistributionResponse * CloudFrontClient::deleteStreamingDistribution(const DeleteStreamingDistributionRequest &request)
{
    return qobject_cast<DeleteStreamingDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DescribeFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets configuration information and metadata about a CloudFront function, but not the function’s code. To get a
 * function’s code, use
 *
 * <code>GetFunction</code>>
 *
 * To get configuration information and metadata about a function, you must provide the function’s name and stage. To get
 * these values, you can use
 */
DescribeFunctionResponse * CloudFrontClient::describeFunction(const DescribeFunctionRequest &request)
{
    return qobject_cast<DescribeFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetCachePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a cache policy, including the following
 *
 * metadata> <ul> <li>
 *
 * The policy’s
 *
 * identifier> </li> <li>
 *
 * The date and time when the policy was last
 *
 * modified> </li> </ul>
 *
 * To get a cache policy, you must provide the policy’s identifier. If the cache policy is attached to a distribution’s
 * cache behavior, you can get the policy’s identifier using <code>ListDistributions</code> or
 * <code>GetDistribution</code>. If the cache policy is not attached to a cache behavior, you can get the identifier using
 */
GetCachePolicyResponse * CloudFrontClient::getCachePolicy(const GetCachePolicyRequest &request)
{
    return qobject_cast<GetCachePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetCachePolicyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a cache policy
 *
 * configuration>
 *
 * To get a cache policy configuration, you must provide the policy’s identifier. If the cache policy is attached to a
 * distribution’s cache behavior, you can get the policy’s identifier using <code>ListDistributions</code> or
 * <code>GetDistribution</code>. If the cache policy is not attached to a cache behavior, you can get the identifier using
 */
GetCachePolicyConfigResponse * CloudFrontClient::getCachePolicyConfig(const GetCachePolicyConfigRequest &request)
{
    return qobject_cast<GetCachePolicyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the information about an origin access identity.
 */
GetCloudFrontOriginAccessIdentityResponse * CloudFrontClient::getCloudFrontOriginAccessIdentity(const GetCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<GetCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetCloudFrontOriginAccessIdentityConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the configuration information about an origin access identity.
 */
GetCloudFrontOriginAccessIdentityConfigResponse * CloudFrontClient::getCloudFrontOriginAccessIdentityConfig(const GetCloudFrontOriginAccessIdentityConfigRequest &request)
{
    return qobject_cast<GetCloudFrontOriginAccessIdentityConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the information about a
 */
GetDistributionResponse * CloudFrontClient::getDistribution(const GetDistributionRequest &request)
{
    return qobject_cast<GetDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetDistributionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the configuration information about a distribution.
 */
GetDistributionConfigResponse * CloudFrontClient::getDistributionConfig(const GetDistributionConfigRequest &request)
{
    return qobject_cast<GetDistributionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption configuration
 */
GetFieldLevelEncryptionResponse * CloudFrontClient::getFieldLevelEncryption(const GetFieldLevelEncryptionRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption configuration
 */
GetFieldLevelEncryptionConfigResponse * CloudFrontClient::getFieldLevelEncryptionConfig(const GetFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption profile
 */
GetFieldLevelEncryptionProfileResponse * CloudFrontClient::getFieldLevelEncryptionProfile(const GetFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionProfileConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption profile configuration
 */
GetFieldLevelEncryptionProfileConfigResponse * CloudFrontClient::getFieldLevelEncryptionProfileConfig(const GetFieldLevelEncryptionProfileConfigRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionProfileConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the code of a CloudFront function. To get configuration information and metadata about a function, use
 *
 * <code>DescribeFunction</code>>
 *
 * To get a function’s code, you must provide the function’s name and stage. To get these values, you can use
 */
GetFunctionResponse * CloudFrontClient::getFunction(const GetFunctionRequest &request)
{
    return qobject_cast<GetFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetInvalidationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the information about an invalidation.
 */
GetInvalidationResponse * CloudFrontClient::getInvalidation(const GetInvalidationRequest &request)
{
    return qobject_cast<GetInvalidationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetKeyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a key group, including the date and time when the key group was last
 *
 * modified>
 *
 * To get a key group, you must provide the key group’s identifier. If the key group is referenced in a distribution’s
 * cache behavior, you can get the key group’s identifier using <code>ListDistributions</code> or
 * <code>GetDistribution</code>. If the key group is not referenced in a cache behavior, you can get the identifier using
 */
GetKeyGroupResponse * CloudFrontClient::getKeyGroup(const GetKeyGroupRequest &request)
{
    return qobject_cast<GetKeyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetKeyGroupConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a key group
 *
 * configuration>
 *
 * To get a key group configuration, you must provide the key group’s identifier. If the key group is referenced in a
 * distribution’s cache behavior, you can get the key group’s identifier using <code>ListDistributions</code> or
 * <code>GetDistribution</code>. If the key group is not referenced in a cache behavior, you can get the identifier using
 */
GetKeyGroupConfigResponse * CloudFrontClient::getKeyGroupConfig(const GetKeyGroupConfigRequest &request)
{
    return qobject_cast<GetKeyGroupConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetMonitoringSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about whether additional CloudWatch metrics are enabled for the specified CloudFront
 */
GetMonitoringSubscriptionResponse * CloudFrontClient::getMonitoringSubscription(const GetMonitoringSubscriptionRequest &request)
{
    return qobject_cast<GetMonitoringSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetOriginAccessControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a CloudFront origin access control, including its unique
 */
GetOriginAccessControlResponse * CloudFrontClient::getOriginAccessControl(const GetOriginAccessControlRequest &request)
{
    return qobject_cast<GetOriginAccessControlResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetOriginAccessControlConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a CloudFront origin access control
 */
GetOriginAccessControlConfigResponse * CloudFrontClient::getOriginAccessControlConfig(const GetOriginAccessControlConfigRequest &request)
{
    return qobject_cast<GetOriginAccessControlConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetOriginRequestPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an origin request policy, including the following
 *
 * metadata> <ul> <li>
 *
 * The policy’s
 *
 * identifier> </li> <li>
 *
 * The date and time when the policy was last
 *
 * modified> </li> </ul>
 *
 * To get an origin request policy, you must provide the policy’s identifier. If the origin request policy is attached to a
 * distribution’s cache behavior, you can get the policy’s identifier using <code>ListDistributions</code> or
 * <code>GetDistribution</code>. If the origin request policy is not attached to a cache behavior, you can get the
 * identifier using
 */
GetOriginRequestPolicyResponse * CloudFrontClient::getOriginRequestPolicy(const GetOriginRequestPolicyRequest &request)
{
    return qobject_cast<GetOriginRequestPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetOriginRequestPolicyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an origin request policy
 *
 * configuration>
 *
 * To get an origin request policy configuration, you must provide the policy’s identifier. If the origin request policy is
 * attached to a distribution’s cache behavior, you can get the policy’s identifier using <code>ListDistributions</code> or
 * <code>GetDistribution</code>. If the origin request policy is not attached to a cache behavior, you can get the
 * identifier using
 */
GetOriginRequestPolicyConfigResponse * CloudFrontClient::getOriginRequestPolicyConfig(const GetOriginRequestPolicyConfigRequest &request)
{
    return qobject_cast<GetOriginRequestPolicyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a public
 */
GetPublicKeyResponse * CloudFrontClient::getPublicKey(const GetPublicKeyRequest &request)
{
    return qobject_cast<GetPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetPublicKeyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a public key
 */
GetPublicKeyConfigResponse * CloudFrontClient::getPublicKeyConfig(const GetPublicKeyConfigRequest &request)
{
    return qobject_cast<GetPublicKeyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetRealtimeLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a real-time log
 *
 * configuration>
 *
 * To get a real-time log configuration, you can provide the configuration’s name or its Amazon Resource Name (ARN). You
 * must provide at least one. If you provide both, CloudFront uses the name to identify the real-time log configuration to
 */
GetRealtimeLogConfigResponse * CloudFrontClient::getRealtimeLogConfig(const GetRealtimeLogConfigRequest &request)
{
    return qobject_cast<GetRealtimeLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetResponseHeadersPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a response headers policy, including metadata (the policy’s identifier and the date and time when the policy was
 * last
 *
 * modified)>
 *
 * To get a response headers policy, you must provide the policy’s identifier. If the response headers policy is attached
 * to a distribution’s cache behavior, you can get the policy’s identifier using <code>ListDistributions</code> or
 * <code>GetDistribution</code>. If the response headers policy is not attached to a cache behavior, you can get the
 * identifier using
 */
GetResponseHeadersPolicyResponse * CloudFrontClient::getResponseHeadersPolicy(const GetResponseHeadersPolicyRequest &request)
{
    return qobject_cast<GetResponseHeadersPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetResponseHeadersPolicyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a response headers policy
 *
 * configuration>
 *
 * To get a response headers policy configuration, you must provide the policy’s identifier. If the response headers policy
 * is attached to a distribution’s cache behavior, you can get the policy’s identifier using <code>ListDistributions</code>
 * or <code>GetDistribution</code>. If the response headers policy is not attached to a cache behavior, you can get the
 * identifier using
 */
GetResponseHeadersPolicyConfigResponse * CloudFrontClient::getResponseHeadersPolicyConfig(const GetResponseHeadersPolicyConfigRequest &request)
{
    return qobject_cast<GetResponseHeadersPolicyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified RTMP distribution, including the distribution
 */
GetStreamingDistributionResponse * CloudFrontClient::getStreamingDistribution(const GetStreamingDistributionRequest &request)
{
    return qobject_cast<GetStreamingDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetStreamingDistributionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the configuration information about a streaming distribution.
 */
GetStreamingDistributionConfigResponse * CloudFrontClient::getStreamingDistributionConfig(const GetStreamingDistributionConfigRequest &request)
{
    return qobject_cast<GetStreamingDistributionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListCachePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of cache
 *
 * policies>
 *
 * You can optionally apply a filter to return only the managed policies created by Amazon Web Services, or only the custom
 * policies created in your Amazon Web Services
 *
 * account>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListCachePoliciesResponse * CloudFrontClient::listCachePolicies(const ListCachePoliciesRequest &request)
{
    return qobject_cast<ListCachePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListCloudFrontOriginAccessIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists origin access
 */
ListCloudFrontOriginAccessIdentitiesResponse * CloudFrontClient::listCloudFrontOriginAccessIdentities(const ListCloudFrontOriginAccessIdentitiesRequest &request)
{
    return qobject_cast<ListCloudFrontOriginAccessIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListConflictingAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of aliases (also called CNAMEs or alternate domain names) that conflict or overlap with the provided alias,
 * and the associated CloudFront distributions and Amazon Web Services accounts for each conflicting alias. In the returned
 * list, the distribution and account IDs are partially hidden, which allows you to identify the distributions and accounts
 * that you own, but helps to protect the information of ones that you don’t
 *
 * own>
 *
 * Use this operation to find aliases that are in use in CloudFront that conflict or overlap with the provided alias. For
 * example, if you provide <code>www.example.com</code> as input, the returned list can include
 * <code>www.example.com</code> and the overlapping wildcard alternate domain name (<code>*.example.com</code>), if they
 * exist. If you provide <code>*.example.com</code> as input, the returned list can include <code>*.example.com</code> and
 * any alternate domain names covered by that wildcard (for example, <code>www.example.com</code>,
 * <code>test.example.com</code>, <code>dev.example.com</code>, and so on), if they
 *
 * exist>
 *
 * To list conflicting aliases, you provide the alias to search and the ID of a distribution in your account that has an
 * attached SSL/TLS certificate that includes the provided alias. For more information, including how to set up the
 * distribution and certificate, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/CNAMEs.html#alternate-domain-names-move">Moving
 * an alternate domain name to a different distribution</a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListConflictingAliasesResponse * CloudFrontClient::listConflictingAliases(const ListConflictingAliasesRequest &request)
{
    return qobject_cast<ListConflictingAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List CloudFront
 */
ListDistributionsResponse * CloudFrontClient::listDistributions(const ListDistributionsRequest &request)
{
    return qobject_cast<ListDistributionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsByCachePolicyIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of distribution IDs for distributions that have a cache behavior that’s associated with the specified cache
 *
 * policy>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListDistributionsByCachePolicyIdResponse * CloudFrontClient::listDistributionsByCachePolicyId(const ListDistributionsByCachePolicyIdRequest &request)
{
    return qobject_cast<ListDistributionsByCachePolicyIdResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsByKeyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of distribution IDs for distributions that have a cache behavior that references the specified key
 *
 * group>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListDistributionsByKeyGroupResponse * CloudFrontClient::listDistributionsByKeyGroup(const ListDistributionsByKeyGroupRequest &request)
{
    return qobject_cast<ListDistributionsByKeyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsByOriginRequestPolicyIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of distribution IDs for distributions that have a cache behavior that’s associated with the specified origin
 * request
 *
 * policy>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListDistributionsByOriginRequestPolicyIdResponse * CloudFrontClient::listDistributionsByOriginRequestPolicyId(const ListDistributionsByOriginRequestPolicyIdRequest &request)
{
    return qobject_cast<ListDistributionsByOriginRequestPolicyIdResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsByRealtimeLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of distributions that have a cache behavior that’s associated with the specified real-time log
 *
 * configuration>
 *
 * You can specify the real-time log configuration by its name or its Amazon Resource Name (ARN). You must provide at least
 * one. If you provide both, CloudFront uses the name to identify the real-time log configuration to list distributions
 *
 * for>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent request.
 */
ListDistributionsByRealtimeLogConfigResponse * CloudFrontClient::listDistributionsByRealtimeLogConfig(const ListDistributionsByRealtimeLogConfigRequest &request)
{
    return qobject_cast<ListDistributionsByRealtimeLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsByResponseHeadersPolicyIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of distribution IDs for distributions that have a cache behavior that’s associated with the specified
 * response headers
 *
 * policy>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListDistributionsByResponseHeadersPolicyIdResponse * CloudFrontClient::listDistributionsByResponseHeadersPolicyId(const ListDistributionsByResponseHeadersPolicyIdRequest &request)
{
    return qobject_cast<ListDistributionsByResponseHeadersPolicyIdResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsByWebACLIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the distributions that are associated with a specified WAF web
 */
ListDistributionsByWebACLIdResponse * CloudFrontClient::listDistributionsByWebACLId(const ListDistributionsByWebACLIdRequest &request)
{
    return qobject_cast<ListDistributionsByWebACLIdResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListFieldLevelEncryptionConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all field-level encryption configurations that have been created in CloudFront for this
 */
ListFieldLevelEncryptionConfigsResponse * CloudFrontClient::listFieldLevelEncryptionConfigs(const ListFieldLevelEncryptionConfigsRequest &request)
{
    return qobject_cast<ListFieldLevelEncryptionConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListFieldLevelEncryptionProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Request a list of field-level encryption profiles that have been created in CloudFront for this
 */
ListFieldLevelEncryptionProfilesResponse * CloudFrontClient::listFieldLevelEncryptionProfiles(const ListFieldLevelEncryptionProfilesRequest &request)
{
    return qobject_cast<ListFieldLevelEncryptionProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListFunctionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all CloudFront functions in your Amazon Web Services
 *
 * account>
 *
 * You can optionally apply a filter to return only the functions that are in the specified stage, either
 * <code>DEVELOPMENT</code> or
 *
 * <code>LIVE</code>>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListFunctionsResponse * CloudFrontClient::listFunctions(const ListFunctionsRequest &request)
{
    return qobject_cast<ListFunctionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListInvalidationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists invalidation batches.
 */
ListInvalidationsResponse * CloudFrontClient::listInvalidations(const ListInvalidationsRequest &request)
{
    return qobject_cast<ListInvalidationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListKeyGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of key
 *
 * groups>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListKeyGroupsResponse * CloudFrontClient::listKeyGroups(const ListKeyGroupsRequest &request)
{
    return qobject_cast<ListKeyGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListOriginAccessControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the list of CloudFront origin access controls in this Amazon Web Services
 *
 * account>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send another request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the next
 */
ListOriginAccessControlsResponse * CloudFrontClient::listOriginAccessControls(const ListOriginAccessControlsRequest &request)
{
    return qobject_cast<ListOriginAccessControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListOriginRequestPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of origin request
 *
 * policies>
 *
 * You can optionally apply a filter to return only the managed policies created by Amazon Web Services, or only the custom
 * policies created in your Amazon Web Services
 *
 * account>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListOriginRequestPoliciesResponse * CloudFrontClient::listOriginRequestPolicies(const ListOriginRequestPoliciesRequest &request)
{
    return qobject_cast<ListOriginRequestPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListPublicKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all public keys that have been added to CloudFront for this
 */
ListPublicKeysResponse * CloudFrontClient::listPublicKeys(const ListPublicKeysRequest &request)
{
    return qobject_cast<ListPublicKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListRealtimeLogConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of real-time log
 *
 * configurations>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent request.
 */
ListRealtimeLogConfigsResponse * CloudFrontClient::listRealtimeLogConfigs(const ListRealtimeLogConfigsRequest &request)
{
    return qobject_cast<ListRealtimeLogConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListResponseHeadersPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of response headers
 *
 * policies>
 *
 * You can optionally apply a filter to get only the managed policies created by Amazon Web Services, or only the custom
 * policies created in your Amazon Web Services
 *
 * account>
 *
 * You can optionally specify the maximum number of items to receive in the response. If the total number of items in the
 * list exceeds the maximum that you specify, or the default maximum, the response is paginated. To get the next page of
 * items, send a subsequent request that specifies the <code>NextMarker</code> value from the current response as the
 * <code>Marker</code> value in the subsequent
 */
ListResponseHeadersPoliciesResponse * CloudFrontClient::listResponseHeadersPolicies(const ListResponseHeadersPoliciesRequest &request)
{
    return qobject_cast<ListResponseHeadersPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListStreamingDistributionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List streaming distributions.
 */
ListStreamingDistributionsResponse * CloudFrontClient::listStreamingDistributions(const ListStreamingDistributionsRequest &request)
{
    return qobject_cast<ListStreamingDistributionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List tags for a CloudFront
 */
ListTagsForResourceResponse * CloudFrontClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * PublishFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes a CloudFront function by copying the function code from the <code>DEVELOPMENT</code> stage to
 * <code>LIVE</code>. This automatically updates all cache behaviors that are using this function to use the newly
 * published copy in the <code>LIVE</code>
 *
 * stage>
 *
 * When a function is published to the <code>LIVE</code> stage, you can attach the function to a distribution’s cache
 * behavior, using the function’s Amazon Resource Name
 *
 * (ARN)>
 *
 * To publish a function, you must provide the function’s name and version (<code>ETag</code> value). To get these values,
 * you can use <code>ListFunctions</code> and
 */
PublishFunctionResponse * CloudFrontClient::publishFunction(const PublishFunctionRequest &request)
{
    return qobject_cast<PublishFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add tags to a CloudFront
 */
TagResourceResponse * CloudFrontClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * TestFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests a CloudFront
 *
 * function>
 *
 * To test a function, you provide an <i>event object</i> that represents an HTTP request or response that your CloudFront
 * distribution could receive in production. CloudFront runs the function, passing it the event object that you provided,
 * and returns the function’s result (the modified event object) in the response. The response also contains function logs
 * and error messages, if any exist. For more information about testing functions, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/managing-functions.html#test-function">Testing
 * functions</a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>>
 *
 * To test a function, you provide the function’s name and version (<code>ETag</code> value) along with the event object.
 * To get the function’s name and version, you can use <code>ListFunctions</code> and
 */
TestFunctionResponse * CloudFrontClient::testFunction(const TestFunctionRequest &request)
{
    return qobject_cast<TestFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove tags from a CloudFront
 */
UntagResourceResponse * CloudFrontClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateCachePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a cache policy
 *
 * configuration>
 *
 * When you update a cache policy configuration, all the fields are updated with the values provided in the request. You
 * cannot update some fields independent of others. To update a cache policy
 *
 * configuration> <ol> <li>
 *
 * Use <code>GetCachePolicyConfig</code> to get the current
 *
 * configuration> </li> <li>
 *
 * Locally modify the fields in the cache policy configuration that you want to
 *
 * update> </li> <li>
 *
 * Call <code>UpdateCachePolicy</code> by providing the entire cache policy configuration, including the fields that you
 * modified and those that you
 */
UpdateCachePolicyResponse * CloudFrontClient::updateCachePolicy(const UpdateCachePolicyRequest &request)
{
    return qobject_cast<UpdateCachePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an origin access identity.
 */
UpdateCloudFrontOriginAccessIdentityResponse * CloudFrontClient::updateCloudFrontOriginAccessIdentity(const UpdateCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<UpdateCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration for a web distribution.
 *
 * </p <b>
 *
 * When you update a distribution, there are more required fields than when you create a distribution. When you update your
 * distribution by using this API action, follow the steps here to get the current configuration and then make your
 * updates, to make sure that you include all of the required fields. To view a summary, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
 * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>> </b>
 *
 * The update process includes getting the current distribution configuration, updating the XML document that is returned
 * to make your changes, and then submitting an <code>UpdateDistribution</code> request to make the
 *
 * updates>
 *
 * For information about updating a distribution using the CloudFront console instead, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
 * a Distribution</a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>>
 *
 * <b>To update a web distribution using the CloudFront API</b>
 *
 * </p <ol> <li>
 *
 * Submit a <a
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
 * request to get the current configuration and an <code>Etag</code> header for the
 *
 * distribution> <note>
 *
 * If you update the distribution again, you must get a new <code>Etag</code>
 *
 * header> </note> </li> <li>
 *
 * Update the XML document that was returned in the response to your <code>GetDistributionConfig</code> request to include
 * your changes.
 *
 * </p <b>
 *
 * When you edit the XML file, be aware of the
 *
 * following> <ul> <li>
 *
 * You must strip out the ETag parameter that is
 *
 * returned> </li> <li>
 *
 * Additional fields are required when you update a distribution. There may be fields included in the XML file for features
 * that you haven't configured for your distribution. This is expected and required to successfully update the
 *
 * distribution> </li> <li>
 *
 * You can't change the value of <code>CallerReference</code>. If you try to change this value, CloudFront returns an
 * <code>IllegalUpdate</code> error.
 *
 * </p </li> <li>
 *
 * The new configuration replaces the existing configuration; the values that you specify in an
 * <code>UpdateDistribution</code> request are not merged into your existing configuration. When you add, delete, or
 * replace values in an element that allows multiple values (for example, <code>CNAME</code>), you must specify all of the
 * values that you want to appear in the updated distribution. In addition, you must update the corresponding
 * <code>Quantity</code>
 *
 * element> </li> </ul> </b> </li> <li>
 *
 * Submit an <code>UpdateDistribution</code> request to update the configuration for your
 *
 * distribution> <ul> <li>
 *
 * In the request body, include the XML document that you updated in Step 2. The request body must include an XML document
 * with a <code>DistributionConfig</code>
 *
 * element> </li> <li>
 *
 * Set the value of the HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header that CloudFront
 * returned when you submitted the <code>GetDistributionConfig</code> request in Step
 *
 * 1> </li> </ul> </li> <li>
 *
 * Review the response to the <code>UpdateDistribution</code> request to confirm that the configuration was successfully
 *
 * updated> </li> <li>
 *
 * Optional: Submit a <a
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a> request
 * to confirm that your changes have propagated. When propagation is complete, the value of <code>Status</code> is
 */
UpdateDistributionResponse * CloudFrontClient::updateDistribution(const UpdateDistributionRequest &request)
{
    return qobject_cast<UpdateDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a field-level encryption configuration.
 */
UpdateFieldLevelEncryptionConfigResponse * CloudFrontClient::updateFieldLevelEncryptionConfig(const UpdateFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<UpdateFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a field-level encryption profile.
 */
UpdateFieldLevelEncryptionProfileResponse * CloudFrontClient::updateFieldLevelEncryptionProfile(const UpdateFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<UpdateFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a CloudFront
 *
 * function>
 *
 * You can update a function’s code or the comment that describes the function. You cannot update a function’s
 *
 * name>
 *
 * To update a function, you provide the function’s name and version (<code>ETag</code> value) along with the updated
 * function code. To get the name and version, you can use <code>ListFunctions</code> and
 */
UpdateFunctionResponse * CloudFrontClient::updateFunction(const UpdateFunctionRequest &request)
{
    return qobject_cast<UpdateFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateKeyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a key
 *
 * group>
 *
 * When you update a key group, all the fields are updated with the values provided in the request. You cannot update some
 * fields independent of others. To update a key
 *
 * group> <ol> <li>
 *
 * Get the current key group with <code>GetKeyGroup</code> or
 *
 * <code>GetKeyGroupConfig</code>> </li> <li>
 *
 * Locally modify the fields in the key group that you want to update. For example, add or remove public key
 *
 * IDs> </li> <li>
 *
 * Call <code>UpdateKeyGroup</code> with the entire key group object, including the fields that you modified and those that
 * you
 */
UpdateKeyGroupResponse * CloudFrontClient::updateKeyGroup(const UpdateKeyGroupRequest &request)
{
    return qobject_cast<UpdateKeyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateOriginAccessControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a CloudFront origin access
 */
UpdateOriginAccessControlResponse * CloudFrontClient::updateOriginAccessControl(const UpdateOriginAccessControlRequest &request)
{
    return qobject_cast<UpdateOriginAccessControlResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateOriginRequestPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an origin request policy
 *
 * configuration>
 *
 * When you update an origin request policy configuration, all the fields are updated with the values provided in the
 * request. You cannot update some fields independent of others. To update an origin request policy
 *
 * configuration> <ol> <li>
 *
 * Use <code>GetOriginRequestPolicyConfig</code> to get the current
 *
 * configuration> </li> <li>
 *
 * Locally modify the fields in the origin request policy configuration that you want to
 *
 * update> </li> <li>
 *
 * Call <code>UpdateOriginRequestPolicy</code> by providing the entire origin request policy configuration, including the
 * fields that you modified and those that you
 */
UpdateOriginRequestPolicyResponse * CloudFrontClient::updateOriginRequestPolicy(const UpdateOriginRequestPolicyRequest &request)
{
    return qobject_cast<UpdateOriginRequestPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdatePublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update public key information. Note that the only value you can change is the
 */
UpdatePublicKeyResponse * CloudFrontClient::updatePublicKey(const UpdatePublicKeyRequest &request)
{
    return qobject_cast<UpdatePublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateRealtimeLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a real-time log
 *
 * configuration>
 *
 * When you update a real-time log configuration, all the parameters are updated with the values provided in the request.
 * You cannot update some parameters independent of others. To update a real-time log
 *
 * configuration> <ol> <li>
 *
 * Call <code>GetRealtimeLogConfig</code> to get the current real-time log
 *
 * configuration> </li> <li>
 *
 * Locally modify the parameters in the real-time log configuration that you want to
 *
 * update> </li> <li>
 *
 * Call this API (<code>UpdateRealtimeLogConfig</code>) by providing the entire real-time log configuration, including the
 * parameters that you modified and those that you
 *
 * didn’t> </li> </ol>
 *
 * You cannot update a real-time log configuration’s <code>Name</code> or
 */
UpdateRealtimeLogConfigResponse * CloudFrontClient::updateRealtimeLogConfig(const UpdateRealtimeLogConfigRequest &request)
{
    return qobject_cast<UpdateRealtimeLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateResponseHeadersPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a response headers
 *
 * policy>
 *
 * When you update a response headers policy, the entire policy is replaced. You cannot update some policy fields
 * independent of others. To update a response headers policy
 *
 * configuration> <ol> <li>
 *
 * Use <code>GetResponseHeadersPolicyConfig</code> to get the current policy’s
 *
 * configuration> </li> <li>
 *
 * Modify the fields in the response headers policy configuration that you want to
 *
 * update> </li> <li>
 *
 * Call <code>UpdateResponseHeadersPolicy</code>, providing the entire response headers policy configuration, including the
 * fields that you modified and those that you
 */
UpdateResponseHeadersPolicyResponse * CloudFrontClient::updateResponseHeadersPolicy(const UpdateResponseHeadersPolicyRequest &request)
{
    return qobject_cast<UpdateResponseHeadersPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a streaming distribution.
 */
UpdateStreamingDistributionResponse * CloudFrontClient::updateStreamingDistribution(const UpdateStreamingDistributionRequest &request)
{
    return qobject_cast<UpdateStreamingDistributionResponse *>(send(request));
}

/*!
 * \class QtAws::CloudFront::CloudFrontClientPrivate
 * \brief The CloudFrontClientPrivate class provides private implementation for CloudFrontClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CloudFrontClientPrivate object with public implementation \a q.
 */
CloudFrontClientPrivate::CloudFrontClientPrivate(CloudFrontClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudFront
} // namespace QtAws
