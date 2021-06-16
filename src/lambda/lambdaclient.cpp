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
#include "createeventsourcemappingrequest.h"
#include "createeventsourcemappingresponse.h"
#include "createfunctionrequest.h"
#include "createfunctionresponse.h"
#include "deletealiasrequest.h"
#include "deletealiasresponse.h"
#include "deleteeventsourcemappingrequest.h"
#include "deleteeventsourcemappingresponse.h"
#include "deletefunctionrequest.h"
#include "deletefunctionresponse.h"
#include "deletefunctionconcurrencyrequest.h"
#include "deletefunctionconcurrencyresponse.h"
#include "deletelayerversionrequest.h"
#include "deletelayerversionresponse.h"
#include "getaccountsettingsrequest.h"
#include "getaccountsettingsresponse.h"
#include "getaliasrequest.h"
#include "getaliasresponse.h"
#include "geteventsourcemappingrequest.h"
#include "geteventsourcemappingresponse.h"
#include "getfunctionrequest.h"
#include "getfunctionresponse.h"
#include "getfunctionconfigurationrequest.h"
#include "getfunctionconfigurationresponse.h"
#include "getlayerversionrequest.h"
#include "getlayerversionresponse.h"
#include "getlayerversionbyarnrequest.h"
#include "getlayerversionbyarnresponse.h"
#include "getlayerversionpolicyrequest.h"
#include "getlayerversionpolicyresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "invokerequest.h"
#include "invokeresponse.h"
#include "invokeasyncrequest.h"
#include "invokeasyncresponse.h"
#include "listaliasesrequest.h"
#include "listaliasesresponse.h"
#include "listeventsourcemappingsrequest.h"
#include "listeventsourcemappingsresponse.h"
#include "listfunctionsrequest.h"
#include "listfunctionsresponse.h"
#include "listlayerversionsrequest.h"
#include "listlayerversionsresponse.h"
#include "listlayersrequest.h"
#include "listlayersresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "listversionsbyfunctionrequest.h"
#include "listversionsbyfunctionresponse.h"
#include "publishlayerversionrequest.h"
#include "publishlayerversionresponse.h"
#include "publishversionrequest.h"
#include "publishversionresponse.h"
#include "putfunctionconcurrencyrequest.h"
#include "putfunctionconcurrencyresponse.h"
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
#include "updateeventsourcemappingrequest.h"
#include "updateeventsourcemappingresponse.h"
#include "updatefunctioncoderequest.h"
#include "updatefunctioncoderesponse.h"
#include "updatefunctionconfigurationrequest.h"
#include "updatefunctionconfigurationresponse.h"

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
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
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
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda layer</a>. Use this action to
 * grant layer usage permission to other accounts. You can grant permission to a single account, all AWS accounts, or all
 * accounts in an
 *
 * organization>
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
 * Grants an AWS service or another account permission to use a function. You can apply the policy at the function level,
 * or specify a qualifier to restrict access to a single version or alias. If you use a qualifier, the invoker must use the
 * full Amazon Resource Name (ARN) of that version or alias to invoke the
 *
 * function>
 *
 * To grant permission to another account, specify the account ID as the <code>Principal</code>. For AWS services, the
 * principal is a domain-style identifier defined by the service, like <code>s3.amazonaws.com</code> or
 * <code>sns.amazonaws.com</code>. For AWS services, you can also specify the ARN or owning account of the associated
 * resource as the <code>SourceArn</code> or <code>SourceAccount</code>. If you grant permission to a service principal
 * without specifying the source, other accounts could potentially configure resources in their account to invoke your
 * Lambda
 *
 * function>
 *
 * This action adds a statement to a resource-based permission policy for the function. For more information about function
 * policies, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">Lambda Function
 * Policies</a>.
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
 * CreateEventSourceMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a mapping between an event source and an AWS Lambda function. Lambda reads items from the event source and
 * triggers the
 *
 * function>
 *
 * For details about each event source type, see the following
 *
 * topics> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS Lambda with Amazon Kinesis</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS Lambda with Amazon SQS</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS Lambda with Amazon DynamoDB</a>
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
 * href="https://docs.aws.amazon.com/lambda/latest/dg/deployment-package-v2.html">deployment package</a> and an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
 * role</a>. The deployment package contains your function code. The execution role grants the function permission to use
 * AWS services, such as Amazon CloudWatch Logs for log streaming and AWS X-Ray for request
 *
 * tracing>
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
 * If another account or an AWS service invokes your function, use <a>AddPermission</a> to grant permission by creating a
 * resource-based IAM policy. You can grant permissions at the function level, on a version, or on an
 *
 * alias>
 *
 * To invoke your function directly, use <a>Invoke</a>. To invoke your function in response to events in other AWS
 * services, create an event source mapping (<a>CreateEventSourceMapping</a>), or configure a function trigger in the other
 * service. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/invoking-lambda-functions.html">Invoking
 */
CreateFunctionResponse * LambdaClient::createFunction(const CreateFunctionRequest &request)
{
    return qobject_cast<CreateFunctionResponse *>(send(request));
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
 * DeleteEventSourceMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an <a href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event source mapping</a>.
 * You can get the identifier of a mapping from the output of
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
 * To delete Lambda event source mappings that invoke a function, use <a>DeleteEventSourceMapping</a>. For AWS services and
 * resources that invoke your function directly, delete the trigger in the service where you originally configured
 */
DeleteFunctionResponse * LambdaClient::deleteFunction(const DeleteFunctionRequest &request)
{
    return qobject_cast<DeleteFunctionResponse *>(send(request));
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
 * DeleteLayerVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a version of an <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda
 * layer</a>. Deleted versions can no longer be viewed or added to functions. To avoid breaking functions, a copy of the
 * version remains in Lambda until no functions refer to
 */
DeleteLayerVersionResponse * LambdaClient::deleteLayerVersion(const DeleteLayerVersionRequest &request)
{
    return qobject_cast<DeleteLayerVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details about your account's <a href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
 * usage in an AWS
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
 * GetLayerVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a version of an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda layer</a>, with a link to
 * download the layer archive that's valid for 10
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
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda layer</a>, with a link to
 * download the layer archive that's valid for 10
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
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda layer</a>. For more
 * information, see
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
 * InvokeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Invokes a Lambda function. You can invoke a function synchronously (and wait for the response), or asynchronously. To
 * invoke a function asynchronously, set <code>InvocationType</code> to
 *
 * <code>Event</code>>
 *
 * For synchronous invocation, details about the function response, including errors, are included in the response body and
 * headers. For either invocation type, you can find more information in the <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution log</a> and <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">trace</a>. To record function errors for asynchronous
 * invocations, configure your function with a <a href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">dead letter
 *
 * queue</a>>
 *
 * When an error occurs, your function may be invoked multiple times. Retry behavior varies by error type, client, event
 * source, and invocation type. For example, if you invoke a function asynchronously and it returns an error, Lambda
 * executes the function up to two more times. For more information, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
 *
 * Behavior</a>>
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
 * This operation requires permission for the <code>lambda:InvokeFunction</code>
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
 * ListEventSourceMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists event source mappings. Specify an <code>EventSourceArn</code> to only show event source mappings for a single
 * event
 */
ListEventSourceMappingsResponse * LambdaClient::listEventSourceMappings(const ListEventSourceMappingsRequest &request)
{
    return qobject_cast<ListEventSourceMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListFunctionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Lambda functions, with the version-specific configuration of
 *
 * each>
 *
 * Set <code>FunctionVersion</code> to <code>ALL</code> to include all published versions of each function in addition to
 * the unpublished version. To get more information about a function or version, use
 */
ListFunctionsResponse * LambdaClient::listFunctions(const ListFunctionsRequest &request)
{
    return qobject_cast<ListFunctionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * ListLayerVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of an <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda
 * layer</a>. Versions that have been deleted aren't listed. Specify a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime identifier</a> to list only versions
 * that indicate that they're compatible with that
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
 * Lists <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda layers</a> and shows
 * information about the latest version of each. Specify a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime identifier</a> to list only layers that
 * indicate that they're compatible with that
 */
ListLayersResponse * LambdaClient::listLayers(const ListLayersRequest &request)
{
    return qobject_cast<ListLayersResponse *>(send(request));
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
 * version-specific configuration of each.
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
 * Creates an <a href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda layer</a> from a
 * ZIP archive. Each time you call <code>PublishLayerVersion</code> with the same version name, a new version is
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
 * AWS Lambda doesn't publish a version if the function's configuration and code haven't changed since the last version.
 * Use <a>UpdateFunctionCode</a> or <a>UpdateFunctionConfiguration</a> to update the function before publishing a
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
 * Use <a>GetAccountSettings</a> to see your regional concurrency limit. You can reserve concurrency for as many functions
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
 * RemoveLayerVersionPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a statement from the permissions policy for a version of an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS Lambda layer</a>. For more
 * information, see
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
 * Revokes function-use permission from an AWS service or another account. You can get the ID of the statement from the
 * output of
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
 * UpdateEventSourceMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an event source mapping. You can change the function that AWS Lambda invokes, or pause invocation and resume
 * later from the same
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
 * Updates a Lambda function's
 *
 * code>
 *
 * The function's code is locked when you publish a version. You can't modify the code of a published version, only the
 * unpublished
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
 * These settings can vary between versions of a function and are locked when you publish a version. You can't modify the
 * configuration of a published version, only the unpublished
 *
 * version>
 *
 * To configure function concurrency, use <a>PutFunctionConcurrency</a>. To grant invoke permissions to an account or AWS
 * service, use
 */
UpdateFunctionConfigurationResponse * LambdaClient::updateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request)
{
    return qobject_cast<UpdateFunctionConfigurationResponse *>(send(request));
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
