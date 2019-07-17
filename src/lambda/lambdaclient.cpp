/*
    Copyright 2013-2019 Paul Colby

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
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
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
 * Adds permissions to the resource-based policy of a version of a function layer. Use this action to grant layer usage
 * permission to other accounts. You can grant permission to a single account, all AWS accounts, or all accounts in an
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
 * Adds a permission to the resource policy associated with the specified AWS Lambda function. You use resource policies to
 * grant permissions to event sources that use the <i>push</i> model. In a <i>push</i> model, event sources (such as Amazon
 * S3 and custom applications) invoke your Lambda function. Each permission you add to the resource policy allows an event
 * source permission to invoke the Lambda function.
 *
 * </p
 *
 * Permissions apply to the Amazon Resource Name (ARN) used to invoke the function, which can be unqualified (the
 * unpublished version of the function), or include a version or alias. If a client uses a version or alias to invoke a
 * function, use the <code>Qualifier</code> parameter to apply permissions to that ARN. For more information about
 * versioning, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function
 * Versioning and Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:AddPermission</code>
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
 * Creates an alias that points to the specified Lambda function version. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * Alias names are unique for a given function. This requires permission for the lambda:CreateAlias
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
 * <a href="http://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS Lambda with Amazon Kinesis</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS Lambda with Amazon SQS</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS Lambda with Amazon DynamoDB</a>
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
 * Creates a new Lambda function. The function configuration is created from the request parameters, and the code for the
 * function is provided by a .zip file. The function name is
 *
 * case-sensitive>
 *
 * This operation requires permission for the <code>lambda:CreateFunction</code>
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
 * Deletes the specified Lambda function alias. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the lambda:DeleteAlias
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
 * Deletes an event source
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
 * all versions and aliases are deleted. Event source mappings are not
 *
 * deleted>
 *
 * This operation requires permission for the <code>lambda:DeleteFunction</code>
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
 * Removes concurrent execution limits from this function. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
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
 * Deletes a version of a function layer. Deleted versions can no longer be viewed or added to functions. However, a copy
 * of the version remains in Lambda until no functions refer to
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
 * Retrieves details about your account's <a href="http://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
 * usage in a
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
 * Returns the specified alias information such as the alias ARN, description, and function version it is pointing to. For
 * more information, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS
 * Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the <code>lambda:GetAlias</code>
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
 * Returns details about an event source
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
 * Returns the configuration information of the Lambda function and a presigned URL link to the .zip file you uploaded with
 * <a>CreateFunction</a> so you can download the .zip file. Note that the URL is valid for up to 10 minutes. The
 * configuration information is the same information you provided as parameters when uploading the
 *
 * function>
 *
 * Use the <code>Qualifier</code> parameter to retrieve a published version of the function. Otherwise, returns the
 * unpublished version (<code>$LATEST</code>). For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 *
 * Aliases</a>>
 *
 * This operation requires permission for the <code>lambda:GetFunction</code>
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
 * Returns the configuration information of the Lambda function. This the same information you provided as parameters when
 * uploading the function by using
 *
 * <a>CreateFunction</a>>
 *
 * If you are using the versioning feature, you can retrieve this information for a specific function version by using the
 * optional <code>Qualifier</code> parameter and specifying the function version or alias that points to it. If you don't
 * provide it, the API returns information about the $LATEST version of the function. For more information about
 * versioning, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function
 * Versioning and
 *
 * Aliases</a>>
 *
 * This operation requires permission for the <code>lambda:GetFunctionConfiguration</code>
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
 * Returns information about a version of a function layer, with a link to download the layer archive that's valid for 10
 */
GetLayerVersionResponse * LambdaClient::getLayerVersion(const GetLayerVersionRequest &request)
{
    return qobject_cast<GetLayerVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LambdaClient service, and returns a pointer to an
 * GetLayerVersionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the permission policy for a layer version. For more information, see
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
 * Returns the resource policy associated with the specified Lambda
 *
 * function>
 *
 * This action requires permission for the <code>lambda:GetPolicy action.</code>
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
 * Invokes a Lambda function. For an example, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/with-dynamodb-create-function.html#with-dbb-invoke-manually">Create
 * the Lambda Function and Test It Manually</a>.
 *
 * </p
 *
 * Specify just a function name to invoke the latest version of the function. To invoke a published version, use the
 * <code>Qualifier</code> parameter to specify a <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version or
 *
 * alias</a>>
 *
 * If you use the <code>RequestResponse</code> (synchronous) invocation option, the function will be invoked only once. If
 * you use the <code>Event</code> (asynchronous) invocation option, the function will be invoked at least once in response
 * to an event and the function must be idempotent to handle
 *
 * this>
 *
 * For functions with a long timeout, your client may be disconnected during synchronous invocation while it waits for a
 * response. Configure your HTTP client, SDK, firewall, proxy, or operating system to allow for long connections with
 * timeout or keep-alive
 *
 * settings>
 *
 * This operation requires permission for the <code>lambda:InvokeFunction</code>
 *
 * action>
 *
 * The <code>TooManyRequestsException</code> noted below will return the following:
 * <code>ConcurrentInvocationLimitExceeded</code> will be returned if you have no functions with reserved concurrency and
 * have exceeded your account concurrent limit or if a function without reserved concurrency exceeds the account's
 * unreserved concurrency limit. <code>ReservedFunctionConcurrentInvocationLimitExceeded</code> will be returned when a
 * function with reserved concurrency exceeds its configured concurrency limit.
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
 * Submits an invocation request to AWS Lambda. Upon receiving the request, Lambda executes the specified function
 * asynchronously. To see the logs generated by the Lambda function execution, see the CloudWatch Logs
 *
 * console>
 *
 * This operation requires permission for the <code>lambda:InvokeFunction</code>
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
 * Returns list of aliases created for a Lambda function. For each alias, the response includes information such as the
 * alias ARN, description, alias name, and the function version to which it points. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the lambda:ListAliases
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
 * Returns a list of your Lambda functions. For each function, the response includes the function configuration
 * information. You must use <a>GetFunction</a> to retrieve the code for your
 *
 * function>
 *
 * This operation requires permission for the <code>lambda:ListFunctions</code>
 *
 * action>
 *
 * If you are using the versioning feature, you can list all of your functions or only <code>$LATEST</code> versions. For
 * information about the versioning feature, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
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
 * Lists the versions of a function layer. Versions that have been deleted aren't listed. Specify a <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime identifier</a> to list only versions
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
 * Lists function layers and shows information about the latest version of each. Specify a <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime identifier</a> to list only layers that
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
 * Returns a list of tags assigned to a function when supplied the function ARN (Amazon Resource Name). For more
 * information on Tagging, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
 * Functions</a> in the <b>AWS Lambda Developer
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
 * Lists all versions of a function. For information about versioning, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
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
 * Creates a function layer from a ZIP archive. Each time you call <code>PublishLayerVersion</code> with the same version
 * name, a new version is
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
 * Publishes a version of your function from the current snapshot of $LATEST. That is, AWS Lambda takes a snapshot of the
 * function code and configuration information from $LATEST and publishes a new version. The code and configuration cannot
 * be modified after publication. For information about the versioning feature, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
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
 * Sets a limit on the number of concurrent executions available to this function. It is a subset of your account's total
 * concurrent execution limit per region. Note that Lambda automatically reserves a buffer of 100 concurrent executions for
 * functions without any reserved concurrency limit. This means if your account limit is 1000, you have a total of 900
 * available to allocate to individual functions. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
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
 * Removes a statement from the permissions policy for a layer version. For more information, see
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
 * Removes permissions from a function. You can remove individual permissions from an resource policy associated with a
 * Lambda function by providing a statement ID that you provided when you added the permission. When you remove
 * permissions, disable the event source mapping or trigger configuration first to avoid
 *
 * errors>
 *
 * Permissions apply to the Amazon Resource Name (ARN) used to invoke the function, which can be unqualified (the
 * unpublished version of the function), or include a version or alias. If a client uses a version or alias to invoke a
 * function, use the <code>Qualifier</code> parameter to apply permissions to that ARN. For more information about
 * versioning, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function
 * Versioning and Aliases</a>.
 *
 * </p
 *
 * You need permission for the <code>lambda:RemovePermission</code>
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
 * Creates a list of tags (key-value pairs) on the Lambda function. Requires the Lambda function ARN (Amazon Resource
 * Name). If a key is specified without a value, Lambda creates a tag with the specified key and a value of null. For more
 * information, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda Functions</a> in the
 * <b>AWS Lambda Developer Guide</b>.
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
 * Removes tags from a Lambda function. Requires the function ARN (Amazon Resource Name). For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda Functions</a> in the <b>AWS Lambda
 * Developer Guide</b>.
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
 * Using this API you can update the function version to which the alias points and the alias description. For more
 * information, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the lambda:UpdateAlias
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
 * Updates the code for the specified Lambda function. This operation must only be used on an existing Lambda function and
 * cannot be used to update the function
 *
 * configuration>
 *
 * If you are using the versioning feature, note this API will always update the $LATEST version of your Lambda function.
 * For information about the versioning feature, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:UpdateFunctionCode</code>
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
 * Updates the configuration parameters for the specified Lambda function by using the values provided in the request. You
 * provide only the parameters you want to change. This operation must only be used on an existing Lambda function and
 * cannot be used to update the function's
 *
 * code>
 *
 * If you are using the versioning feature, note this API will always update the $LATEST version of your Lambda function.
 * For information about the versioning feature, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:UpdateFunctionConfiguration</code>
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
