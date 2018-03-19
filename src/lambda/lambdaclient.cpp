/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "lambdaclient.h"
#include "lambdaclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Lambda {

/**
 * @class  LambdaClient
 *
 * @brief  Client for AWS Lambda
 *
 * <fullname>AWS Lambda</fullname>
 *
 * <b>Overview</b>
 *
 * </p
 *
 * This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 * service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 * information about how the service works, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <i>AWS
 * Lambda Developer
 */

/**
 * @brief  Constructs a new LambdaClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
LambdaClient::LambdaClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LambdaClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new LambdaClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
LambdaClient::LambdaClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LambdaClientPrivate(this), parent)
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

/**
 * Adds a permission to the resource policy associated with the specified AWS Lambda function. You use resource policies to
 * grant permissions to event sources that use <i>push</i> model. In a <i>push</i> model, event sources (such as Amazon S3
 * and custom applications) invoke your Lambda function. Each permission you add to the resource policy allows an event
 * source, permission to invoke the Lambda function.
 *
 * </p
 *
 * For information about the push model, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a>.
 *
 * </p
 *
 * If you are using versioning, the permissions you add are specific to the Lambda function version or alias you specify in
 * the <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For more information about versioning,
 * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:AddPermission</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddPermissionResponse * LambdaClient::addPermission(const AddPermissionRequest &request)
{

}

/**
 * Creates an alias that points to the specified Lambda function version. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * Alias names are unique for a given function. This requires permission for the lambda:CreateAlias
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAliasResponse * LambdaClient::createAlias(const CreateAliasRequest &request)
{

}

/**
 * Identifies a stream as an event source for a Lambda function. It can be either an Amazon Kinesis stream or an Amazon
 * DynamoDB stream. AWS Lambda invokes the specified function when records are posted to the
 *
 * stream>
 *
 * This association between a stream source and a Lambda function is called the event source
 *
 * mapping> <b>
 *
 * This event source mapping is relevant only in the AWS Lambda pull model, where AWS Lambda invokes the function. For more
 * information, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it
 * Works</a> in the <i>AWS Lambda Developer
 *
 * Guide</i>> </b>
 *
 * You provide mapping information (for example, which stream to read from and which Lambda function to invoke) in the
 * request
 *
 * body>
 *
 * Each event source, such as an Amazon Kinesis or a DynamoDB stream, can be associated with multiple AWS Lambda function.
 * A given Lambda function can be associated with multiple AWS event
 *
 * sources>
 *
 * If you are using versioning, you can specify a specific function version or an alias via the function name parameter.
 * For more information about versioning, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:CreateEventSourceMapping</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEventSourceMappingResponse * LambdaClient::createEventSourceMapping(const CreateEventSourceMappingRequest &request)
{

}

/**
 * Creates a new Lambda function. The function metadata is created from the request parameters, and the code for the
 * function is provided by a .zip file in the request body. If the function name already exists, the operation will fail.
 * Note that the function name is
 *
 * case-sensitive>
 *
 * If you are using versioning, you can also publish a version of the Lambda function you are creating using the
 * <code>Publish</code> parameter. For more information about versioning, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:CreateFunction</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFunctionResponse * LambdaClient::createFunction(const CreateFunctionRequest &request)
{

}

/**
 * Deletes the specified Lambda function alias. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the lambda:DeleteAlias
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAliasResponse * LambdaClient::deleteAlias(const DeleteAliasRequest &request)
{

}

/**
 * Removes an event source mapping. This means AWS Lambda will no longer invoke the function for events in the associated
 *
 * source>
 *
 * This operation requires permission for the <code>lambda:DeleteEventSourceMapping</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEventSourceMappingResponse * LambdaClient::deleteEventSourceMapping(const DeleteEventSourceMappingRequest &request)
{

}

/**
 * Deletes the specified Lambda function code and
 *
 * configuration>
 *
 * If you are using the versioning feature and you don't specify a function version in your <code>DeleteFunction</code>
 * request, AWS Lambda will delete the function, including all its versions, and any aliases pointing to the function
 * versions. To delete a specific function version, you must provide the function version via the <code>Qualifier</code>
 * parameter. For information about function versioning, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * </p
 *
 * When you delete a function the associated resource policy is also deleted. You will need to delete the event source
 * mappings
 *
 * explicitly>
 *
 * This operation requires permission for the <code>lambda:DeleteFunction</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFunctionResponse * LambdaClient::deleteFunction(const DeleteFunctionRequest &request)
{

}

/**
 * Removes concurrent execution limits from this function. For more information, see
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFunctionConcurrencyResponse * LambdaClient::deleteFunctionConcurrency(const DeleteFunctionConcurrencyRequest &request)
{

}

/**
 * Returns a customer's account
 *
 * settings>
 *
 * You can use this operation to retrieve Lambda limits information, such as code size and concurrency limits. For more
 * information about limits, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/limits.html">AWS Lambda Limits</a>.
 * You can also retrieve resource usage statistics, such as code storage usage and function
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccountSettingsResponse * LambdaClient::getAccountSettings(const GetAccountSettingsRequest &request)
{

}

/**
 * Returns the specified alias information such as the alias ARN, description, and function version it is pointing to. For
 * more information, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS
 * Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the <code>lambda:GetAlias</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAliasResponse * LambdaClient::getAlias(const GetAliasRequest &request)
{

}

/**
 * Returns configuration information for the specified event source mapping (see
 *
 * <a>CreateEventSourceMapping</a>)>
 *
 * This operation requires permission for the <code>lambda:GetEventSourceMapping</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEventSourceMappingResponse * LambdaClient::getEventSourceMapping(const GetEventSourceMappingRequest &request)
{

}

/**
 * Returns the configuration information of the Lambda function and a presigned URL link to the .zip file you uploaded with
 * <a>CreateFunction</a> so you can download the .zip file. Note that the URL is valid for up to 10 minutes. The
 * configuration information is the same information you provided as parameters when uploading the
 *
 * function>
 *
 * Using the optional <code>Qualifier</code> parameter, you can specify a specific function version for which you want this
 * information. If you don't specify this parameter, the API uses unqualified function ARN which return information about
 * the <code>$LATEST</code> version of the Lambda function. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 *
 * Aliases</a>>
 *
 * This operation requires permission for the <code>lambda:GetFunction</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFunctionResponse * LambdaClient::getFunction(const GetFunctionRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFunctionConfigurationResponse * LambdaClient::getFunctionConfiguration(const GetFunctionConfigurationRequest &request)
{

}

/**
 * Returns the resource policy associated with the specified Lambda
 *
 * function>
 *
 * If you are using the versioning feature, you can get the resource policy associated with the specific Lambda function
 * version or alias by specifying the version or alias name using the <code>Qualifier</code> parameter. For more
 * information about versioning, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
 * Lambda Function Versioning and Aliases</a>.
 *
 * </p
 *
 * You need permission for the <code>lambda:GetPolicy action.</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPolicyResponse * LambdaClient::getPolicy(const GetPolicyRequest &request)
{

}

/**
 * Invokes a specific Lambda function. For an example, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/with-dynamodb-create-function.html#with-dbb-invoke-manually">Create
 * the Lambda Function and Test It Manually</a>.
 *
 * </p
 *
 * If you are using the versioning feature, you can invoke the specific function version by providing function version or
 * alias name that is pointing to the function version using the <code>Qualifier</code> parameter in the request. If you
 * don't provide the <code>Qualifier</code> parameter, the <code>$LATEST</code> version of the Lambda function is invoked.
 * Invocations occur at least once in response to an event and functions must be idempotent to handle this. For information
 * about the versioning feature, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
 * Lambda Function Versioning and Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:InvokeFunction</code>
 *
 * action> <note>
 *
 * The <code>TooManyRequestsException</code> noted below will return the following:
 * <code>ConcurrentInvocationLimitExceeded</code> will be returned if you have no functions with reserved concurrency and
 * have exceeded your account concurrent limit or if a function without reserved concurrency exceeds the account's
 * unreserved concurrency limit. <code>ReservedFunctionConcurrentInvocationLimitExceeded</code> will be returned when a
 * function with reserved concurrency exceeds its configured concurrency limit.
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InvokeResponse * LambdaClient::invoke(const InvokeRequest &request)
{

}

/**
 * <b>
 *
 * This API is deprecated. We recommend you use <code>Invoke</code> API (see
 *
 * <a>Invoke</a>)> </b>
 *
 * Submits an invocation request to AWS Lambda. Upon receiving the request, Lambda executes the specified function
 * asynchronously. To see the logs generated by the Lambda function execution, see the CloudWatch Logs
 *
 * console>
 *
 * This operation requires permission for the <code>lambda:InvokeFunction</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InvokeAsyncResponse * LambdaClient::invokeAsync(const InvokeAsyncRequest &request)
{

}

/**
 * Returns list of aliases created for a Lambda function. For each alias, the response includes information such as the
 * alias ARN, description, alias name, and the function version to which it points. For more information, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the lambda:ListAliases
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAliasesResponse * LambdaClient::listAliases(const ListAliasesRequest &request)
{

}

/**
 * Returns a list of event source mappings you created using the <code>CreateEventSourceMapping</code> (see
 * <a>CreateEventSourceMapping</a>).
 *
 * </p
 *
 * For each mapping, the API returns configuration information. You can optionally specify filters to retrieve specific
 * event source
 *
 * mappings>
 *
 * If you are using the versioning feature, you can get list of event source mappings for a specific Lambda function
 * version or an alias as described in the <code>FunctionName</code> parameter. For information about the versioning
 * feature, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function
 * Versioning and Aliases</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lambda:ListEventSourceMappings</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListEventSourceMappingsResponse * LambdaClient::listEventSourceMappings(const ListEventSourceMappingsRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFunctionsResponse * LambdaClient::listFunctions(const ListFunctionsRequest &request)
{

}

/**
 * Returns a list of tags assigned to a function when supplied the function ARN (Amazon Resource
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsResponse * LambdaClient::listTags(const ListTagsRequest &request)
{

}

/**
 * List all versions of a function. For information about the versioning feature, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListVersionsByFunctionResponse * LambdaClient::listVersionsByFunction(const ListVersionsByFunctionRequest &request)
{

}

/**
 * Publishes a version of your function from the current snapshot of $LATEST. That is, AWS Lambda takes a snapshot of the
 * function code and configuration information from $LATEST and publishes a new version. The code and configuration cannot
 * be modified after publication. For information about the versioning feature, see <a
 * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PublishVersionResponse * LambdaClient::publishVersion(const PublishVersionRequest &request)
{

}

/**
 * Sets a limit on the number of concurrent executions available to this function. It is a subset of your account's total
 * concurrent execution limit per region. Note that Lambda automatically reserves a buffer of 100 concurrent executions for
 * functions without any reserved concurrency limit. This means if your account limit is 1000, you have a total of 900
 * available to allocate to individual functions. For more information, see
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutFunctionConcurrencyResponse * LambdaClient::putFunctionConcurrency(const PutFunctionConcurrencyRequest &request)
{

}

/**
 * You can remove individual permissions from an resource policy associated with a Lambda function by providing a statement
 * ID that you provided when you added the
 *
 * permission>
 *
 * If you are using versioning, the permissions you remove are specific to the Lambda function version or alias you specify
 * in the <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For more information about
 * versioning, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function
 * Versioning and Aliases</a>.
 *
 * </p
 *
 * Note that removal of a permission will cause an active event source to lose permission to the
 *
 * function>
 *
 * You need permission for the <code>lambda:RemovePermission</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemovePermissionResponse * LambdaClient::removePermission(const RemovePermissionRequest &request)
{

}

/**
 * Creates a list of tags (key-value pairs) on the Lambda function. Requires the Lambda function ARN (Amazon Resource
 * Name). If a key is specified without a value, Lambda creates a tag with the specified key and a value of null.
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * LambdaClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * Removes tags from a Lambda function. Requires the function ARN (Amazon Resource Name).
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * LambdaClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Using this API you can update the function version to which the alias points and the alias description. For more
 * information, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction to AWS Lambda
 *
 * Aliases</a>>
 *
 * This requires permission for the lambda:UpdateAlias
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAliasResponse * LambdaClient::updateAlias(const UpdateAliasRequest &request)
{

}

/**
 * You can update an event source mapping. This is useful if you want to change the parameters of the existing mapping
 * without losing your position in the stream. You can change which function will receive the stream records, but to change
 * the stream itself, you must create a new
 *
 * mapping>
 *
 * If you are using the versioning feature, you can update the event source mapping to map to a specific Lambda function
 * version or alias as described in the <code>FunctionName</code> parameter. For information about the versioning feature,
 * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS Lambda Function Versioning and
 * Aliases</a>.
 *
 * </p
 *
 * If you disable the event source mapping, AWS Lambda stops polling. If you enable again, it will resume polling from the
 * time it had stopped polling, so you don't lose processing of any records. However, if you delete event source mapping
 * and create it again, it will
 *
 * reset>
 *
 * This operation requires permission for the <code>lambda:UpdateEventSourceMapping</code>
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEventSourceMappingResponse * LambdaClient::updateEventSourceMapping(const UpdateEventSourceMappingRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFunctionCodeResponse * LambdaClient::updateFunctionCode(const UpdateFunctionCodeRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to AWS Lambda.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFunctionConfigurationResponse * LambdaClient::updateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request)
{

}

/**
 * @internal
 *
 * @class  LambdaClientPrivate
 *
 * @brief  Private implementation for LambdaClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LambdaClientPrivate object.
 *
 * @param  q  Pointer to this object's public LambdaClient instance.
 */
LambdaClientPrivate::LambdaClientPrivate(LambdaClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Lambda
} // namespace AWS
