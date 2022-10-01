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

#include "lambdaclient.h"
#include "lambdaclient_p.h"

#include "core/awssignaturev4.h"
#include "addlayerversionpermissionrequest.h"
#include "addlayerversionpermissionresponse.h"
#include "addpermissionrequest.h"
#include "addpermissionresponse.h"
#include "createaliasrequest.h"
#include "createaliasresponse.h"
#include "createcodesigningconfigrequest.h"
#include "createcodesigningconfigresponse.h"
#include "createeventsourcemappingrequest.h"
#include "createeventsourcemappingresponse.h"
#include "createfunctionrequest.h"
#include "createfunctionresponse.h"
#include "createfunctionurlconfigrequest.h"
#include "createfunctionurlconfigresponse.h"
#include "deletealiasrequest.h"
#include "deletealiasresponse.h"
#include "deletecodesigningconfigrequest.h"
#include "deletecodesigningconfigresponse.h"
#include "deleteeventsourcemappingrequest.h"
#include "deleteeventsourcemappingresponse.h"
#include "deletefunctionrequest.h"
#include "deletefunctionresponse.h"
#include "deletefunctioncodesigningconfigrequest.h"
#include "deletefunctioncodesigningconfigresponse.h"
#include "deletefunctionconcurrencyrequest.h"
#include "deletefunctionconcurrencyresponse.h"
#include "deletefunctioneventinvokeconfigrequest.h"
#include "deletefunctioneventinvokeconfigresponse.h"
#include "deletefunctionurlconfigrequest.h"
#include "deletefunctionurlconfigresponse.h"
#include "deletelayerversionrequest.h"
#include "deletelayerversionresponse.h"
#include "deleteprovisionedconcurrencyconfigrequest.h"
#include "deleteprovisionedconcurrencyconfigresponse.h"
#include "getaccountsettingsrequest.h"
#include "getaccountsettingsresponse.h"
#include "getaliasrequest.h"
#include "getaliasresponse.h"
#include "getcodesigningconfigrequest.h"
#include "getcodesigningconfigresponse.h"
#include "geteventsourcemappingrequest.h"
#include "geteventsourcemappingresponse.h"
#include "getfunctionrequest.h"
#include "getfunctionresponse.h"
#include "getfunctioncodesigningconfigrequest.h"
#include "getfunctioncodesigningconfigresponse.h"
#include "getfunctionconcurrencyrequest.h"
#include "getfunctionconcurrencyresponse.h"
#include "getfunctionconfigurationrequest.h"
#include "getfunctionconfigurationresponse.h"
#include "getfunctioneventinvokeconfigrequest.h"
#include "getfunctioneventinvokeconfigresponse.h"
#include "getfunctionurlconfigrequest.h"
#include "getfunctionurlconfigresponse.h"
#include "getlayerversionrequest.h"
#include "getlayerversionresponse.h"
#include "getlayerversionbyarnrequest.h"
#include "getlayerversionbyarnresponse.h"
#include "getlayerversionpolicyrequest.h"
#include "getlayerversionpolicyresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "getprovisionedconcurrencyconfigrequest.h"
#include "getprovisionedconcurrencyconfigresponse.h"
#include "invokerequest.h"
#include "invokeresponse.h"
#include "invokeasyncrequest.h"
#include "invokeasyncresponse.h"
#include "listaliasesrequest.h"
#include "listaliasesresponse.h"
#include "listcodesigningconfigsrequest.h"
#include "listcodesigningconfigsresponse.h"
#include "listeventsourcemappingsrequest.h"
#include "listeventsourcemappingsresponse.h"
#include "listfunctioneventinvokeconfigsrequest.h"
#include "listfunctioneventinvokeconfigsresponse.h"
#include "listfunctionurlconfigsrequest.h"
#include "listfunctionurlconfigsresponse.h"
#include "listfunctionsrequest.h"
#include "listfunctionsresponse.h"
#include "listfunctionsbycodesigningconfigrequest.h"
#include "listfunctionsbycodesigningconfigresponse.h"
#include "listlayerversionsrequest.h"
#include "listlayerversionsresponse.h"
#include "listlayersrequest.h"
#include "listlayersresponse.h"
#include "listprovisionedconcurrencyconfigsrequest.h"
#include "listprovisionedconcurrencyconfigsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "listversionsbyfunctionrequest.h"
#include "listversionsbyfunctionresponse.h"
#include "publishlayerversionrequest.h"
#include "publishlayerversionresponse.h"
#include "publishversionrequest.h"
#include "publishversionresponse.h"
#include "putfunctioncodesigningconfigrequest.h"
#include "putfunctioncodesigningconfigresponse.h"
#include "putfunctionconcurrencyrequest.h"
#include "putfunctionconcurrencyresponse.h"
#include "putfunctioneventinvokeconfigrequest.h"
#include "putfunctioneventinvokeconfigresponse.h"
#include "putprovisionedconcurrencyconfigrequest.h"
#include "putprovisionedconcurrencyconfigresponse.h"
#include "removelayerversionpermissionrequest.h"
#include "removelayerversionpermissionresponse.h"
#include "removepermissionrequest.h"
#include "removepermissionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatealiasrequest.h"
#include "updatealiasresponse.h"
#include "updatecodesigningconfigrequest.h"
#include "updatecodesigningconfigresponse.h"
#include "updateeventsourcemappingrequest.h"
#include "updateeventsourcemappingresponse.h"
#include "updatefunctioncoderequest.h"
#include "updatefunctioncoderesponse.h"
#include "updatefunctionconfigurationrequest.h"
#include "updatefunctionconfigurationresponse.h"
#include "updatefunctioneventinvokeconfigrequest.h"
#include "updatefunctioneventinvokeconfigresponse.h"
#include "updatefunctionurlconfigrequest.h"
#include "updatefunctionurlconfigresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Lambda
 * \brief Contains classess for accessing AWS Lambda.
 *
 * \inmodule QtAwsLambda
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::LambdaClient
 * \brief The LambdaClient class provides access to the AWS Lambda service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLambda
 *
 *  <fullname>Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  Lambda is a compute service that lets you run code without provisioning or managing servers. Lambda runs your code on a
 *  high-availability compute infrastructure and performs all of the administration of the compute resources, including
 *  server and operating system maintenance, capacity provisioning and automatic scaling, code monitoring and logging. With
 *  Lambda, you can run code for virtually any type of application or backend service. For more information about the Lambda
 *  service, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is Lambda</a> in the <b>Lambda
 *  Developer
 * 
 *  Guide</b>>
 * 
 *  The <i>Lambda API Reference</i> provides information about each of the API methods, including details about the
 *  parameters in each API request and response.
 * 
 *  </p
 * 
 *  </p
 * 
 *  You can use Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line tools
 *  to access the API. For installation instructions, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *  Services</a>.
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that Lambda supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/lambda-service.html/">Lambda endpoints and quotas </a> in the
 *  <i>Amazon Web Services General Reference.</i>.
 * 
 *  </p
 * 
 *  When making the API calls, you will need to authenticate your request by providing a signature. Lambda supports
 *  signature version 4. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 signing process</a> in
 *  the <i>Amazon Web Services General Reference.</i>.
 * 
 *  </p
 * 
 *  <b>CA certificates</b>
 * 
 *  </p
 * 
 *  Because Amazon Web Services SDKs use the CA certificates from your computer, changes to the certificates on the Amazon
 *  Web Services servers can cause connection failures when you attempt to use an SDK. You can prevent these failures by
 *  keeping your computer's CA certificates and operating system up-to-date. If you encounter this issue in a corporate
 *  environment and do not manage your own computer, you might need to ask an administrator to assist with the update
 *  process. The following list shows minimum operating system and Java
 * 
 *  versions> <ul> <li>
 * 
 *  Microsoft Windows versions that have updates from January 2005 or later installed contain at least one of the required
 *  CAs in their trust list.
 * 
 *  </p </li> <li>
 * 
 *  Mac OS X 10.4 with Java for Mac OS X 10.4 Release 5 (February 2007), Mac OS X 10.5 (October 2007), and later versions
 *  contain at least one of the required CAs in their trust list.
 * 
 *  </p </li> <li>
 * 
 *  Red Hat Enterprise Linux 5 (March 2007), 6, and 7 and CentOS 5, 6, and 7 all contain at least one of the required CAs in
 *  their default trusted CA list.
 * 
 *  </p </li> <li>
 * 
 *  Java 1.4.2_12 (May 2006), 5 Update 2 (March 2005), and all later versions, including Java 6 (December 2006), 7, and 8,
 *  contain at least one of the required CAs in their default trusted CA list.
 * 
 *  </p </li> </ul>
 * 
 *  When accessing the Lambda management console or Lambda API endpoints, whether through browsers or programmatically, you
 *  will need to ensure your client machines support any of the following CAs:
 * 
 *  </p <ul> <li>
 * 
 *  Amazon Root CA
 * 
 *  > </li> <li>
 * 
 *  Starfield Services Root Certificate Authority -
 * 
 *  G> </li> <li>
 * 
 *  Starfield Class 2 Certification
 * 
 *  Authorit> </li> </ul>
 * 
 *  Root certificates from the first two authorities are available from <a
 *  href="https://www.amazontrust.com/repository/">Amazon trust services</a>, but keeping your computer up-to-date is the
 *  more straightforward solution. To learn more about ACM-provided certificates, see <a
 *  href="http://aws.amazon.com/certificate-manager/faqs/#certificates">Amazon Web Services Certificate Manager FAQs.</a>
 */

/*!
 * \brief Constructs a LambdaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LambdaClient::LambdaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LambdaClientPrivate(this), parent)
{
    Q_D(LambdaClient);
    d->apiVersion = QStringLiteral("2015-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("lambda");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Lambda");
    d->serviceName = QStringLiteral("lambda");
}

/*!
 * \overload LambdaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LambdaClient::LambdaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LambdaClientPrivate(this), parent)
{
    Q_D(LambdaClient);
    d->apiVersion = QStringLiteral("2015-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("lambda");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Lambda");
    d->serviceName = QStringLiteral("lambda");
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * AddLayerVersionPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds permissions to the resource-based policy of a version of an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda layer</a>. Use this action to grant
 * layer usage permission to other accounts. You can grant permission to a single account, all accounts in an organization,
 * or all Amazon Web Services accounts.
 *
 * </p
 *
 * To revoke permission, call <a>RemoveLayerVersionPermission</a> with the statement ID that you specified when you added
 */
AddLayerVersionPermissionResponse * LambdaClient::addLayerVersionPermission(const AddLayerVersionPermissionRequest &request)
{
    return qobject_cast<AddLayerVersionPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * AddPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants an Amazon Web Services service, account, or organization permission to use a function. You can apply the policy
 * at the function level, or specify a qualifier to restrict access to a single version or alias. If you use a qualifier,
 * the invoker must use the full Amazon Resource Name (ARN) of that version or alias to invoke the function. Note: Lambda
 * does not support adding policies to version
 *
 * $LATEST>
 *
 * To grant permission to another account, specify the account ID as the <code>Principal</code>. To grant permission to an
 * organization defined in Organizations, specify the organization ID as the <code>PrincipalOrgID</code>. For Amazon Web
 * Services services, the principal is a domain-style identifier defined by the service, like <code>s3.amazonaws.com</code>
 * or <code>sns.amazonaws.com</code>. For Amazon Web Services services, you can also specify the ARN of the associated
 * resource as the <code>SourceArn</code>. If you grant permission to a service principal without specifying the source,
 * other accounts could potentially configure resources in their account to invoke your Lambda
 *
 * function>
 *
 * This action adds a statement to a resource-based permissions policy for the function. For more information about
 * function policies, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">Lambda
 * Function Policies</a>.
 */
AddPermissionResponse * LambdaClient::addPermission(const AddPermissionRequest &request)
{
    return qobject_cast<AddPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * CreateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an <a href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a> for a Lambda
 * function version. Use aliases to provide clients with a function identifier that you can update to invoke a different
 *
 * version>
 *
 * You can also map an alias to split invocation requests between two versions. Use the <code>RoutingConfig</code>
 * parameter to specify a second version and the percentage of invocation requests that it
 */
CreateAliasResponse * LambdaClient::createAlias(const CreateAliasRequest &request)
{
    return qobject_cast<CreateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * CreateCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a code signing configuration. A <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">code signing configuration</a>
 * defines a list of allowed signing profiles and defines the code-signing validation policy (action to be taken if
 * deployment validation checks fail).
 */
CreateCodeSigningConfigResponse * LambdaClient::createCodeSigningConfig(const CreateCodeSigningConfigRequest &request)
{
    return qobject_cast<CreateCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * CreateEventSourceMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a mapping between an event source and an Lambda function. Lambda reads items from the event source and invokes
 * the
 *
 * function>
 *
 * For details about how to configure different event sources, see the following topics.
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-dynamodb-eventsourcemapping"> Amazon
 * DynamoDB Streams</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-eventsourcemapping"> Amazon
 * Kinesis</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-eventsource"> Amazon SQS</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-eventsourcemapping"> Amazon MQ and
 * RabbitMQ</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html"> Amazon MSK</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/kafka-smaa.html"> Apache Kafka</a>
 *
 * </p </li> </ul>
 *
 * The following error handling options are available only for stream sources (DynamoDB and
 *
 * Kinesis)> <ul> <li>
 *
 * <code>BisectBatchOnFunctionError</code> - If the function returns an error, split the batch in two and
 *
 * retry> </li> <li>
 *
 * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue or Amazon SNS
 *
 * topic> </li> <li>
 *
 * <code>MaximumRecordAgeInSeconds</code> - Discard records older than the specified age. The default value is infinite
 * (-1). When set to infinite (-1), failed records are retried until the record
 *
 * expire> </li> <li>
 *
 * <code>MaximumRetryAttempts</code> - Discard records after the specified number of retries. The default value is infinite
 * (-1). When set to infinite (-1), failed records are retried until the record
 *
 * expires> </li> <li>
 *
 * <code>ParallelizationFactor</code> - Process multiple batches from each shard
 *
 * concurrently> </li> </ul>
 *
 * For information about which configuration parameters apply to each event source, see the following
 *
 * topics> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-ddb-params"> Amazon DynamoDB Streams</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-params"> Amazon Kinesis</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#services-sqs-params"> Amazon SQS</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-params"> Amazon MQ and RabbitMQ</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-parms"> Amazon MSK</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-kafka-parms"> Apache Kafka</a>
 */
CreateEventSourceMappingResponse * LambdaClient::createEventSourceMapping(const CreateEventSourceMappingRequest &request)
{
    return qobject_cast<CreateEventSourceMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * CreateFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Lambda function. To create a function, you need a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html">deployment package</a> and an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
 * role</a>. The deployment package is a .zip file archive or container image that contains your function code. The
 * execution role grants the function permission to use Amazon Web Services services, such as Amazon CloudWatch Logs for
 * log streaming and X-Ray for request
 *
 * tracing>
 *
 * You set the package type to <code>Image</code> if the deployment package is a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-images.html">container image</a>. For a container image, the
 * code property must include the URI of a container image in the Amazon ECR registry. You do not need to specify the
 * handler and runtime properties.
 *
 * </p
 *
 * You set the package type to <code>Zip</code> if the deployment package is a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html#gettingstarted-package-zip">.zip file
 * archive</a>. For a .zip file archive, the code property specifies the location of the .zip file. You must also specify
 * the handler and runtime properties. The code in the deployment package must be compatible with the target instruction
 * set architecture of the function (<code>x86-64</code> or <code>arm64</code>). If you do not specify the architecture,
 * the default value is
 *
 * <code>x86-64</code>>
 *
 * When you create a function, Lambda provisions an instance of the function and its supporting resources. If your function
 * connects to a VPC, this process can take a minute or so. During this time, you can't invoke or modify the function. The
 * <code>State</code>, <code>StateReason</code>, and <code>StateReasonCode</code> fields in the response from
 * <a>GetFunctionConfiguration</a> indicate when the function is ready to invoke. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
 *
 * States</a>>
 *
 * A function has an unpublished version, and can have published versions and aliases. The unpublished version changes when
 * you update your function's code and configuration. A published version is a snapshot of your function code and
 * configuration that can't be changed. An alias is a named resource that maps to a version, and can be changed to map to a
 * different version. Use the <code>Publish</code> parameter to create version <code>1</code> of your function from its
 * initial
 *
 * configuration>
 *
 * The other parameters let you configure version-specific and function-level settings. You can modify version-specific
 * settings later with <a>UpdateFunctionConfiguration</a>. Function-level settings apply to both the unpublished and
 * published versions of the function, and include tags (<a>TagResource</a>) and per-function concurrency limits
 *
 * (<a>PutFunctionConcurrency</a>)>
 *
 * You can use code signing if your deployment package is a .zip file archive. To enable code signing for this function,
 * specify the ARN of a code-signing configuration. When a user attempts to deploy a code package with
 * <a>UpdateFunctionCode</a>, Lambda checks that the code package has a valid signature from a trusted publisher. The
 * code-signing configuration includes set set of signing profiles, which define the trusted publishers for this
 *
 * function>
 *
 * If another account or an Amazon Web Services service invokes your function, use <a>AddPermission</a> to grant permission
 * by creating a resource-based IAM policy. You can grant permissions at the function level, on a version, or on an
 *
 * alias>
 *
 * To invoke your function directly, use <a>Invoke</a>. To invoke your function in response to events in other Amazon Web
 * Services services, create an event source mapping (<a>CreateEventSourceMapping</a>), or configure a function trigger in
 * the other service. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-invocation.html">Invoking
 */
CreateFunctionResponse * LambdaClient::createFunction(const CreateFunctionRequest &request)
{
    return qobject_cast<CreateFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * CreateFunctionUrlConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Lambda function URL with the specified configuration parameters. A function URL is a dedicated HTTP(S)
 * endpoint that you can use to invoke your
 */
CreateFunctionUrlConfigResponse * LambdaClient::createFunctionUrlConfig(const CreateFunctionUrlConfigRequest &request)
{
    return qobject_cast<CreateFunctionUrlConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Lambda function <a
 */
DeleteAliasResponse * LambdaClient::deleteAlias(const DeleteAliasRequest &request)
{
    return qobject_cast<DeleteAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the code signing configuration. You can delete the code signing configuration only if no function is using it.
 */
DeleteCodeSigningConfigResponse * LambdaClient::deleteCodeSigningConfig(const DeleteCodeSigningConfigRequest &request)
{
    return qobject_cast<DeleteCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteEventSourceMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an <a href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event source mapping</a>.
 * You can get the identifier of a mapping from the output of
 *
 * <a>ListEventSourceMappings</a>>
 *
 * When you delete an event source mapping, it enters a <code>Deleting</code> state and might not be completely deleted for
 * several
 */
DeleteEventSourceMappingResponse * LambdaClient::deleteEventSourceMapping(const DeleteEventSourceMappingRequest &request)
{
    return qobject_cast<DeleteEventSourceMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Lambda function. To delete a specific function version, use the <code>Qualifier</code> parameter. Otherwise,
 * all versions and aliases are
 *
 * deleted>
 *
 * To delete Lambda event source mappings that invoke a function, use <a>DeleteEventSourceMapping</a>. For Amazon Web
 * Services services and resources that invoke your function directly, delete the trigger in the service where you
 * originally configured
 */
DeleteFunctionResponse * LambdaClient::deleteFunction(const DeleteFunctionRequest &request)
{
    return qobject_cast<DeleteFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteFunctionCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the code signing configuration from the
 */
DeleteFunctionCodeSigningConfigResponse * LambdaClient::deleteFunctionCodeSigningConfig(const DeleteFunctionCodeSigningConfigRequest &request)
{
    return qobject_cast<DeleteFunctionCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteFunctionConcurrencyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a concurrent execution limit from a
 */
DeleteFunctionConcurrencyResponse * LambdaClient::deleteFunctionConcurrency(const DeleteFunctionConcurrencyRequest &request)
{
    return qobject_cast<DeleteFunctionConcurrencyResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteFunctionEventInvokeConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the configuration for asynchronous invocation for a function, version, or
 *
 * alias>
 *
 * To configure options for asynchronous invocation, use
 */
DeleteFunctionEventInvokeConfigResponse * LambdaClient::deleteFunctionEventInvokeConfig(const DeleteFunctionEventInvokeConfigRequest &request)
{
    return qobject_cast<DeleteFunctionEventInvokeConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteFunctionUrlConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Lambda function URL. When you delete a function URL, you can't recover it. Creating a new function URL results
 * in a different URL
 */
DeleteFunctionUrlConfigResponse * LambdaClient::deleteFunctionUrlConfig(const DeleteFunctionUrlConfigRequest &request)
{
    return qobject_cast<DeleteFunctionUrlConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteLayerVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a version of an <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
 * layer</a>. Deleted versions can no longer be viewed or added to functions. To avoid breaking functions, a copy of the
 * version remains in Lambda until no functions refer to
 */
DeleteLayerVersionResponse * LambdaClient::deleteLayerVersion(const DeleteLayerVersionRequest &request)
{
    return qobject_cast<DeleteLayerVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * DeleteProvisionedConcurrencyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the provisioned concurrency configuration for a
 */
DeleteProvisionedConcurrencyConfigResponse * LambdaClient::deleteProvisionedConcurrencyConfig(const DeleteProvisionedConcurrencyConfigRequest &request)
{
    return qobject_cast<DeleteProvisionedConcurrencyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details about your account's <a href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
 * usage in an Amazon Web Services
 */
GetAccountSettingsResponse * LambdaClient::getAccountSettings(const GetAccountSettingsRequest &request)
{
    return qobject_cast<GetAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about a Lambda function <a
 */
GetAliasResponse * LambdaClient::getAlias(const GetAliasRequest &request)
{
    return qobject_cast<GetAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified code signing
 */
GetCodeSigningConfigResponse * LambdaClient::getCodeSigningConfig(const GetCodeSigningConfigRequest &request)
{
    return qobject_cast<GetCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetEventSourceMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about an event source mapping. You can get the identifier of a mapping from the output of
 */
GetEventSourceMappingResponse * LambdaClient::getEventSourceMapping(const GetEventSourceMappingRequest &request)
{
    return qobject_cast<GetEventSourceMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the function or function version, with a link to download the deployment package that's valid
 * for 10 minutes. If you specify a function version, only details that are specific to that version are
 */
GetFunctionResponse * LambdaClient::getFunction(const GetFunctionRequest &request)
{
    return qobject_cast<GetFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetFunctionCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the code signing configuration for the specified
 */
GetFunctionCodeSigningConfigResponse * LambdaClient::getFunctionCodeSigningConfig(const GetFunctionCodeSigningConfigRequest &request)
{
    return qobject_cast<GetFunctionCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetFunctionConcurrencyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about the reserved concurrency configuration for a function. To set a concurrency limit for a function,
 * use
 */
GetFunctionConcurrencyResponse * LambdaClient::getFunctionConcurrency(const GetFunctionConcurrencyRequest &request)
{
    return qobject_cast<GetFunctionConcurrencyResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetFunctionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the version-specific settings of a Lambda function or version. The output includes only options that can vary
 * between versions of a function. To modify these settings, use
 *
 * <a>UpdateFunctionConfiguration</a>>
 *
 * To get all of a function's details, including function-level settings, use
 */
GetFunctionConfigurationResponse * LambdaClient::getFunctionConfiguration(const GetFunctionConfigurationRequest &request)
{
    return qobject_cast<GetFunctionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetFunctionEventInvokeConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the configuration for asynchronous invocation for a function, version, or
 *
 * alias>
 *
 * To configure options for asynchronous invocation, use
 */
GetFunctionEventInvokeConfigResponse * LambdaClient::getFunctionEventInvokeConfig(const GetFunctionEventInvokeConfigRequest &request)
{
    return qobject_cast<GetFunctionEventInvokeConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetFunctionUrlConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about a Lambda function
 */
GetFunctionUrlConfigResponse * LambdaClient::getFunctionUrlConfig(const GetFunctionUrlConfigRequest &request)
{
    return qobject_cast<GetFunctionUrlConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetLayerVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a version of an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda layer</a>, with a link to download
 * the layer archive that's valid for 10
 */
GetLayerVersionResponse * LambdaClient::getLayerVersion(const GetLayerVersionRequest &request)
{
    return qobject_cast<GetLayerVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetLayerVersionByArnResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a version of an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda layer</a>, with a link to download
 * the layer archive that's valid for 10
 */
GetLayerVersionByArnResponse * LambdaClient::getLayerVersionByArn(const GetLayerVersionByArnRequest &request)
{
    return qobject_cast<GetLayerVersionByArnResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetLayerVersionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the permission policy for a version of an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda layer</a>. For more information,
 * see
 */
GetLayerVersionPolicyResponse * LambdaClient::getLayerVersionPolicy(const GetLayerVersionPolicyRequest &request)
{
    return qobject_cast<GetLayerVersionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the <a href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">resource-based IAM
 * policy</a> for a function, version, or
 */
GetPolicyResponse * LambdaClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetProvisionedConcurrencyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the provisioned concurrency configuration for a function's alias or
 */
GetProvisionedConcurrencyConfigResponse * LambdaClient::getProvisionedConcurrencyConfig(const GetProvisionedConcurrencyConfigRequest &request)
{
    return qobject_cast<GetProvisionedConcurrencyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * InvokeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Invokes a Lambda function. You can invoke a function synchronously (and wait for the response), or asynchronously. To
 * invoke a function asynchronously, set <code>InvocationType</code> to
 *
 * <code>Event</code>>
 *
 * For <a href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-sync.html">synchronous invocation</a>, details
 * about the function response, including errors, are included in the response body and headers. For either invocation
 * type, you can find more information in the <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution log</a> and <a
 *
 * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-x-ray.html">trace</a>>
 *
 * When an error occurs, your function may be invoked multiple times. Retry behavior varies by error type, client, event
 * source, and invocation type. For example, if you invoke a function asynchronously and it returns an error, Lambda
 * executes the function up to two more times. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
 *
 * Behavior</a>>
 *
 * For <a href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous invocation</a>, Lambda
 * adds events to a queue before sending them to your function. If your function does not have enough capacity to keep up
 * with the queue, events may be lost. Occasionally, your function may receive the same event multiple times, even if no
 * error occurs. To retain events that were not processed, configure your function with a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#dlq">dead-letter
 *
 * queue</a>>
 *
 * The status code in the API response doesn't reflect function errors. Error codes are reserved for errors that prevent
 * your function from executing, such as permissions errors, <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limit errors</a>, or issues with your function's code
 * and configuration. For example, Lambda returns <code>TooManyRequestsException</code> if executing the function would
 * cause you to exceed a concurrency limit at either the account level (<code>ConcurrentInvocationLimitExceeded</code>) or
 * function level
 *
 * (<code>ReservedFunctionConcurrentInvocationLimitExceeded</code>)>
 *
 * For functions with a long timeout, your client might be disconnected during synchronous invocation while it waits for a
 * response. Configure your HTTP client, SDK, firewall, proxy, or operating system to allow for long connections with
 * timeout or keep-alive
 *
 * settings>
 *
 * This operation requires permission for the <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_awslambda.html">lambda:InvokeFunction</a> action. For
 * details on how to set up permissions for cross-account invocations, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html#permissions-resource-xaccountinvoke">Granting
 * function access to other
 */
InvokeResponse * LambdaClient::invoke(const InvokeRequest &request)
{
    return qobject_cast<InvokeResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * InvokeAsyncResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>
 *
 * For asynchronous function invocation, use
 *
 * <a>Invoke</a>> </b>
 *
 * Invokes a function
 */
InvokeAsyncResponse * LambdaClient::invokeAsync(const InvokeAsyncRequest &request)
{
    return qobject_cast<InvokeAsyncResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">aliases</a> for a
 * Lambda
 */
ListAliasesResponse * LambdaClient::listAliases(const ListAliasesRequest &request)
{
    return qobject_cast<ListAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListCodeSigningConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuring-codesigning.html">code signing
 * configurations</a>. A request returns up to 10,000 configurations per call. You can use the <code>MaxItems</code>
 * parameter to return fewer configurations per call.
 */
ListCodeSigningConfigsResponse * LambdaClient::listCodeSigningConfigs(const ListCodeSigningConfigsRequest &request)
{
    return qobject_cast<ListCodeSigningConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListEventSourceMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists event source mappings. Specify an <code>EventSourceArn</code> to show only event source mappings for a single
 * event
 */
ListEventSourceMappingsResponse * LambdaClient::listEventSourceMappings(const ListEventSourceMappingsRequest &request)
{
    return qobject_cast<ListEventSourceMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListFunctionEventInvokeConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of configurations for asynchronous invocation for a
 *
 * function>
 *
 * To configure options for asynchronous invocation, use
 */
ListFunctionEventInvokeConfigsResponse * LambdaClient::listFunctionEventInvokeConfigs(const ListFunctionEventInvokeConfigsRequest &request)
{
    return qobject_cast<ListFunctionEventInvokeConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListFunctionUrlConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Lambda function URLs for the specified
 */
ListFunctionUrlConfigsResponse * LambdaClient::listFunctionUrlConfigs(const ListFunctionUrlConfigsRequest &request)
{
    return qobject_cast<ListFunctionUrlConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListFunctionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Lambda functions, with the version-specific configuration of each. Lambda returns up to 50 functions
 * per
 *
 * call>
 *
 * Set <code>FunctionVersion</code> to <code>ALL</code> to include all published versions of each function in addition to
 * the unpublished version.
 *
 * </p <note>
 *
 * The <code>ListFunctions</code> action returns a subset of the <a>FunctionConfiguration</a> fields. To get the additional
 * fields (State, StateReasonCode, StateReason, LastUpdateStatus, LastUpdateStatusReason, LastUpdateStatusReasonCode) for a
 * function or version, use
 */
ListFunctionsResponse * LambdaClient::listFunctions(const ListFunctionsRequest &request)
{
    return qobject_cast<ListFunctionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListFunctionsByCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the functions that use the specified code signing configuration. You can use this method prior to deleting a code
 * signing configuration, to verify that no functions are using
 */
ListFunctionsByCodeSigningConfigResponse * LambdaClient::listFunctionsByCodeSigningConfig(const ListFunctionsByCodeSigningConfigRequest &request)
{
    return qobject_cast<ListFunctionsByCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListLayerVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of an <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
 * layer</a>. Versions that have been deleted aren't listed. Specify a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime identifier</a> to list only versions
 * that indicate that they're compatible with that runtime. Specify a compatible architecture to include only layer
 * versions that are compatible with that
 */
ListLayerVersionsResponse * LambdaClient::listLayerVersions(const ListLayerVersionsRequest &request)
{
    return qobject_cast<ListLayerVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListLayersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists <a href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-layers.html">Lambda layers</a> and shows
 * information about the latest version of each. Specify a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime identifier</a> to list only layers that
 * indicate that they're compatible with that runtime. Specify a compatible architecture to include only layers that are
 * compatible with that <a href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction set
 */
ListLayersResponse * LambdaClient::listLayers(const ListLayersRequest &request)
{
    return qobject_cast<ListLayersResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListProvisionedConcurrencyConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of provisioned concurrency configurations for a
 */
ListProvisionedConcurrencyConfigsResponse * LambdaClient::listProvisionedConcurrencyConfigs(const ListProvisionedConcurrencyConfigsRequest &request)
{
    return qobject_cast<ListProvisionedConcurrencyConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a function's <a href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>. You can also view
 * tags with
 */
ListTagsResponse * LambdaClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListVersionsByFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">versions</a>, with the
 * version-specific configuration of each. Lambda returns up to 50 versions per
 */
ListVersionsByFunctionResponse * LambdaClient::listVersionsByFunction(const ListVersionsByFunctionRequest &request)
{
    return qobject_cast<ListVersionsByFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * PublishLayerVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda layer</a> from a ZIP
 * archive. Each time you call <code>PublishLayerVersion</code> with the same layer name, a new version is
 *
 * created>
 *
 * Add layers to your function with <a>CreateFunction</a> or
 */
PublishLayerVersionResponse * LambdaClient::publishLayerVersion(const PublishLayerVersionRequest &request)
{
    return qobject_cast<PublishLayerVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * PublishVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version</a> from the current
 * code and configuration of a function. Use versions to create a snapshot of your function code and configuration that
 * doesn't
 *
 * change>
 *
 * Lambda doesn't publish a version if the function's configuration and code haven't changed since the last version. Use
 * <a>UpdateFunctionCode</a> or <a>UpdateFunctionConfiguration</a> to update the function before publishing a
 *
 * version>
 *
 * Clients can invoke versions directly or with an alias. To create an alias, use
 */
PublishVersionResponse * LambdaClient::publishVersion(const PublishVersionRequest &request)
{
    return qobject_cast<PublishVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * PutFunctionCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the code signing configuration for the function. Changes to the code signing configuration take effect the next
 * time a user tries to deploy a code package to the function.
 */
PutFunctionCodeSigningConfigResponse * LambdaClient::putFunctionCodeSigningConfig(const PutFunctionCodeSigningConfigRequest &request)
{
    return qobject_cast<PutFunctionCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * PutFunctionConcurrencyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the maximum number of simultaneous executions for a function, and reserves capacity for that concurrency
 *
 * level>
 *
 * Concurrency settings apply to the function as a whole, including all published versions and the unpublished version.
 * Reserving concurrency both ensures that your function has capacity to process the specified number of events
 * simultaneously, and prevents it from scaling beyond that level. Use <a>GetFunction</a> to see the current setting for a
 *
 * function>
 *
 * Use <a>GetAccountSettings</a> to see your Regional concurrency limit. You can reserve concurrency for as many functions
 * as you like, as long as you leave at least 100 simultaneous executions unreserved for functions that aren't configured
 * with a per-function limit. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
 */
PutFunctionConcurrencyResponse * LambdaClient::putFunctionConcurrency(const PutFunctionConcurrencyRequest &request)
{
    return qobject_cast<PutFunctionConcurrencyResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * PutFunctionEventInvokeConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures options for <a href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
 * invocation</a> on a function, version, or alias. If a configuration already exists for a function, version, or alias,
 * this operation overwrites it. If you exclude any settings, they are removed. To set one option without affecting
 * existing settings for other options, use
 *
 * <a>UpdateFunctionEventInvokeConfig</a>>
 *
 * By default, Lambda retries an asynchronous invocation twice if the function returns an error. It retains events in a
 * queue for up to six hours. When an event fails all processing attempts or stays in the asynchronous invocation queue for
 * too long, Lambda discards it. To retain discarded events, configure a dead-letter queue with
 *
 * <a>UpdateFunctionConfiguration</a>>
 *
 * To send an invocation record to a queue, topic, function, or event bus, specify a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">destination</a>.
 * You can configure separate destinations for successful invocations (on-success) and events that fail all processing
 * attempts (on-failure). You can configure destinations in addition to or instead of a dead-letter
 */
PutFunctionEventInvokeConfigResponse * LambdaClient::putFunctionEventInvokeConfig(const PutFunctionEventInvokeConfigRequest &request)
{
    return qobject_cast<PutFunctionEventInvokeConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * PutProvisionedConcurrencyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a provisioned concurrency configuration to a function's alias or
 */
PutProvisionedConcurrencyConfigResponse * LambdaClient::putProvisionedConcurrencyConfig(const PutProvisionedConcurrencyConfigRequest &request)
{
    return qobject_cast<PutProvisionedConcurrencyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * RemoveLayerVersionPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a statement from the permissions policy for a version of an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda layer</a>. For more information,
 * see
 */
RemoveLayerVersionPermissionResponse * LambdaClient::removeLayerVersionPermission(const RemoveLayerVersionPermissionRequest &request)
{
    return qobject_cast<RemoveLayerVersionPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * RemovePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes function-use permission from an Amazon Web Services service or another account. You can get the ID of the
 * statement from the output of
 */
RemovePermissionResponse * LambdaClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds <a href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> to a
 */
TagResourceResponse * LambdaClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes <a href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> from a
 */
UntagResourceResponse * LambdaClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UpdateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of a Lambda function <a
 */
UpdateAliasResponse * LambdaClient::updateAlias(const UpdateAliasRequest &request)
{
    return qobject_cast<UpdateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UpdateCodeSigningConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the code signing configuration. Changes to the code signing configuration take effect the next time a user tries
 * to deploy a code package to the function.
 */
UpdateCodeSigningConfigResponse * LambdaClient::updateCodeSigningConfig(const UpdateCodeSigningConfigRequest &request)
{
    return qobject_cast<UpdateCodeSigningConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UpdateEventSourceMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an event source mapping. You can change the function that Lambda invokes, or pause invocation and resume later
 * from the same
 *
 * location>
 *
 * For details about how to configure different event sources, see the following topics.
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-dynamodb-eventsourcemapping"> Amazon
 * DynamoDB Streams</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-eventsourcemapping"> Amazon
 * Kinesis</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-eventsource"> Amazon SQS</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-eventsourcemapping"> Amazon MQ and
 * RabbitMQ</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html"> Amazon MSK</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/kafka-smaa.html"> Apache Kafka</a>
 *
 * </p </li> </ul>
 *
 * The following error handling options are available only for stream sources (DynamoDB and
 *
 * Kinesis)> <ul> <li>
 *
 * <code>BisectBatchOnFunctionError</code> - If the function returns an error, split the batch in two and
 *
 * retry> </li> <li>
 *
 * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue or Amazon SNS
 *
 * topic> </li> <li>
 *
 * <code>MaximumRecordAgeInSeconds</code> - Discard records older than the specified age. The default value is infinite
 * (-1). When set to infinite (-1), failed records are retried until the record
 *
 * expire> </li> <li>
 *
 * <code>MaximumRetryAttempts</code> - Discard records after the specified number of retries. The default value is infinite
 * (-1). When set to infinite (-1), failed records are retried until the record
 *
 * expires> </li> <li>
 *
 * <code>ParallelizationFactor</code> - Process multiple batches from each shard
 *
 * concurrently> </li> </ul>
 *
 * For information about which configuration parameters apply to each event source, see the following
 *
 * topics> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-ddb-params"> Amazon DynamoDB Streams</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-params"> Amazon Kinesis</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#services-sqs-params"> Amazon SQS</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-params"> Amazon MQ and RabbitMQ</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-parms"> Amazon MSK</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-kafka-parms"> Apache Kafka</a>
 */
UpdateEventSourceMappingResponse * LambdaClient::updateEventSourceMapping(const UpdateEventSourceMappingRequest &request)
{
    return qobject_cast<UpdateEventSourceMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UpdateFunctionCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a Lambda function's code. If code signing is enabled for the function, the code package must be signed by a
 * trusted publisher. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">Configuring code
 *
 * signing</a>>
 *
 * If the function's package type is <code>Image</code>, you must specify the code package in <code>ImageUri</code> as the
 * URI of a <a href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-images.html">container image</a> in the Amazon ECR
 * registry.
 *
 * </p
 *
 * If the function's package type is <code>Zip</code>, you must specify the deployment package as a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html#gettingstarted-package-zip">.zip file
 * archive</a>. Enter the Amazon S3 bucket and key of the code .zip file location. You can also provide the function code
 * inline using the <code>ZipFile</code> field.
 *
 * </p
 *
 * The code in the deployment package must be compatible with the target instruction set architecture of the function
 * (<code>x86-64</code> or <code>arm64</code>).
 *
 * </p
 *
 * The function's code is locked when you publish a version. You can't modify the code of a published version, only the
 * unpublished
 *
 * version> <note>
 *
 * For a function defined as a container image, Lambda resolves the image tag to an image digest. In Amazon ECR, if you
 * update the image tag to a new image, Lambda does not automatically update the
 */
UpdateFunctionCodeResponse * LambdaClient::updateFunctionCode(const UpdateFunctionCodeRequest &request)
{
    return qobject_cast<UpdateFunctionCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UpdateFunctionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify the version-specific settings of a Lambda
 *
 * function>
 *
 * When you update a function, Lambda provisions an instance of the function and its supporting resources. If your function
 * connects to a VPC, this process can take a minute. During this time, you can't modify the function, but you can still
 * invoke it. The <code>LastUpdateStatus</code>, <code>LastUpdateStatusReason</code>, and
 * <code>LastUpdateStatusReasonCode</code> fields in the response from <a>GetFunctionConfiguration</a> indicate when the
 * update is complete and the function is processing events with the new configuration. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
 *
 * States</a>>
 *
 * These settings can vary between versions of a function and are locked when you publish a version. You can't modify the
 * configuration of a published version, only the unpublished
 *
 * version>
 *
 * To configure function concurrency, use <a>PutFunctionConcurrency</a>. To grant invoke permissions to an account or
 * Amazon Web Services service, use
 */
UpdateFunctionConfigurationResponse * LambdaClient::updateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request)
{
    return qobject_cast<UpdateFunctionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UpdateFunctionEventInvokeConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration for asynchronous invocation for a function, version, or
 *
 * alias>
 *
 * To configure options for asynchronous invocation, use
 */
UpdateFunctionEventInvokeConfigResponse * LambdaClient::updateFunctionEventInvokeConfig(const UpdateFunctionEventInvokeConfigRequest &request)
{
    return qobject_cast<UpdateFunctionEventInvokeConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * UpdateFunctionUrlConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration for a Lambda function
 */
UpdateFunctionUrlConfigResponse * LambdaClient::updateFunctionUrlConfig(const UpdateFunctionUrlConfigRequest &request)
{
    return qobject_cast<UpdateFunctionUrlConfigResponse *>(send(request));
}

/*!
 * \class QtAws::Lambda::LambdaClientPrivate
 * \brief The LambdaClientPrivate class provides private implementation for LambdaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a LambdaClientPrivate object with public implementation \a q.
 */
LambdaClientPrivate::LambdaClientPrivate(LambdaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Lambda
} // namespace QtAws
