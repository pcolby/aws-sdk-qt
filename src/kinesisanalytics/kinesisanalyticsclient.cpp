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

#include "kinesisanalyticsclient.h"
#include "kinesisanalyticsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  KinesisAnalyticsClient
 *
 * @brief  Client for Amazon Kinesis Analytics
 *
 */

/**
 * @brief  Constructs a new KinesisAnalyticsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
KinesisAnalyticsClient::KinesisAnalyticsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KinesisAnalyticsClientPrivate(this), parent)
{
    Q_D(KinesisAnalyticsClient);
    d->apiVersion = QStringLiteral("2015-08-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisanalytics");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Analytics");
    d->serviceName = QStringLiteral("kinesisanalytics");
}

/**
 * @brief  Constructs a new KinesisAnalyticsClient object.
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
KinesisAnalyticsClient::KinesisAnalyticsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KinesisAnalyticsClientPrivate(this), parent)
{
    Q_D(KinesisAnalyticsClient);
    d->apiVersion = QStringLiteral("2015-08-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisanalytics");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Analytics");
    d->serviceName = QStringLiteral("kinesisanalytics");
}

/**
 * Adds a CloudWatch log stream to monitor application configuration errors. For more information about using CloudWatch
 * log streams with Amazon Kinesis Analytics applications, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working with Amazon CloudWatch
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddApplicationCloudWatchLoggingOptionResponse * KinesisAnalyticsClient::addApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest &request)
{

}

/**
 * Adds a streaming source to your Amazon Kinesis application. For conceptual information, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring Application Input</a>.
 *
 * </p
 *
 * You can add a streaming source either when you create an application or you can use this operation to add a streaming
 * source after you create an application. For more information, see
 *
 * <a>CreateApplication</a>>
 *
 * Any configuration update, including adding a streaming source using this operation, results in a new version of the
 * application. You can use the <a>DescribeApplication</a> operation to find the current application version.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:AddApplicationInput</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddApplicationInputResponse * KinesisAnalyticsClient::addApplicationInput(const AddApplicationInputRequest &request)
{

}

/**
 * Adds an <a>InputProcessingConfiguration</a> to an application. An input processor preprocesses records on the input
 * stream before the application's SQL code executes. Currently, the only input processor available is <a
 * href="https://aws.amazon.com/documentation/lambda/">AWS
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddApplicationInputProcessingConfigurationResponse * KinesisAnalyticsClient::addApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest &request)
{

}

/**
 * Adds an external destination to your Amazon Kinesis Analytics
 *
 * application>
 *
 * If you want Amazon Kinesis Analytics to deliver data from an in-application stream within your application to an
 * external destination (such as an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream, or an Amazon Lambda
 * function), you add the relevant configuration to your application using this operation. You can configure one or more
 * outputs for your application. Each output configuration maps an in-application stream and an external
 *
 * destination>
 *
 * You can use one of the output configurations to deliver data from your in-application error stream to an external
 * destination so that you can analyze the errors. For conceptual information, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding Application Output
 * (Destination)</a>.
 *
 * </p
 *
 * Note that any configuration update, including adding a streaming source using this operation, results in a new version
 * of the application. You can use the <a>DescribeApplication</a> operation to find the current application
 *
 * version>
 *
 * For the limits on the number of application inputs and outputs you can configure, see <a
 *
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:AddApplicationOutput</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddApplicationOutputResponse * KinesisAnalyticsClient::addApplicationOutput(const AddApplicationOutputRequest &request)
{

}

/**
 * Adds a reference data source to an existing
 *
 * application>
 *
 * Amazon Kinesis Analytics reads reference data (that is, an Amazon S3 object) and creates an in-application table within
 * your application. In the request, you provide the source (S3 bucket name and object key name), name of the
 * in-application table to create, and the necessary mapping information that describes how data in Amazon S3 object maps
 * to columns in the resulting in-application
 *
 * table>
 *
 * For conceptual information, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring Application Input</a>.
 * For the limits on data sources you can add to your application, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:AddApplicationOutput</code> action.
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddApplicationReferenceDataSourceResponse * KinesisAnalyticsClient::addApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest &request)
{

}

/**
 * Creates an Amazon Kinesis Analytics application. You can configure each application with one streaming source as input,
 * application code to process the input, and up to three destinations where you want Amazon Kinesis Analytics to write the
 * output data from your application. For an overview, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How it Works</a>.
 *
 * </p
 *
 * In the input configuration, you map the streaming source to an in-application stream, which you can think of as a
 * constantly updating table. In the mapping, you must provide a schema for the in-application stream and map each data
 * column in the in-application stream to a data element in the streaming
 *
 * source>
 *
 * Your application code is one or more SQL statements that read input data, transform it, and generate output. Your
 * application code can create one or more SQL artifacts like SQL streams or
 *
 * pumps>
 *
 * In the output configuration, you can configure the application to write data from in-application streams created in your
 * applications to up to three
 *
 * destinations>
 *
 * To read data from your source stream or write data to destination streams, Amazon Kinesis Analytics needs your
 * permissions. You grant these permissions by creating IAM roles. This operation requires permissions to perform the
 * <code>kinesisanalytics:CreateApplication</code> action.
 *
 * </p
 *
 * For introductory exercises to create an Amazon Kinesis Analytics application, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting Started</a>.
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApplicationResponse * KinesisAnalyticsClient::createApplication(const CreateApplicationRequest &request)
{

}

/**
 * Deletes the specified application. Amazon Kinesis Analytics halts application execution and deletes the application,
 * including any application artifacts (such as in-application streams, reference table, and application
 *
 * code)>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DeleteApplication</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationResponse * KinesisAnalyticsClient::deleteApplication(const DeleteApplicationRequest &request)
{

}

/**
 * Deletes a CloudWatch log stream from an application. For more information about using CloudWatch log streams with Amazon
 * Kinesis Analytics applications, see <a
 * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working with Amazon CloudWatch
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationCloudWatchLoggingOptionResponse * KinesisAnalyticsClient::deleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest &request)
{

}

/**
 * Deletes an <a>InputProcessingConfiguration</a> from an
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationInputProcessingConfigurationResponse * KinesisAnalyticsClient::deleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest &request)
{

}

/**
 * Deletes output destination configuration from your application configuration. Amazon Kinesis Analytics will no longer
 * write data from the corresponding in-application stream to the external output
 *
 * destination>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DeleteApplicationOutput</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationOutputResponse * KinesisAnalyticsClient::deleteApplicationOutput(const DeleteApplicationOutputRequest &request)
{

}

/**
 * Deletes a reference data source configuration from the specified application
 *
 * configuration>
 *
 * If the application is running, Amazon Kinesis Analytics immediately removes the in-application table that you created
 * using the <a>AddApplicationReferenceDataSource</a> operation.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationReferenceDataSourceResponse * KinesisAnalyticsClient::deleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest &request)
{

}

/**
 * Returns information about a specific Amazon Kinesis Analytics
 *
 * application>
 *
 * If you want to retrieve a list of all applications in your account, use the <a>ListApplications</a>
 *
 * operation>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DescribeApplication</code> action. You can use
 * <code>DescribeApplication</code> to get the current application versionId, which you need to call other operations such
 * as <code>Update</code>.
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeApplicationResponse * KinesisAnalyticsClient::describeApplication(const DescribeApplicationRequest &request)
{

}

/**
 * Infers a schema by evaluating sample records on the specified streaming source (Amazon Kinesis stream or Amazon Kinesis
 * Firehose delivery stream) or S3 object. In the response, the operation returns the inferred schema and also the sample
 * records that the operation used to infer the
 *
 * schema>
 *
 * You can use the inferred schema when configuring a streaming source for your application. For conceptual information,
 * see <a href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring Application
 * Input</a>. Note that when you create an application using the Amazon Kinesis Analytics console, the console uses this
 * operation to infer a schema and show it in the console user interface.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code> action.
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DiscoverInputSchemaResponse * KinesisAnalyticsClient::discoverInputSchema(const DiscoverInputSchemaRequest &request)
{

}

/**
 * Returns a list of Amazon Kinesis Analytics applications in your account. For each application, the response includes the
 * application name, Amazon Resource Name (ARN), and status. If the response returns the <code>HasMoreApplications</code>
 * value as true, you can send another request by adding the <code>ExclusiveStartApplicationName</code> in the request
 * body, and set the value of this to the last application name from the previous response.
 *
 * </p
 *
 * If you want detailed information about a specific application, use
 *
 * <a>DescribeApplication</a>>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:ListApplications</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListApplicationsResponse * KinesisAnalyticsClient::listApplications(const ListApplicationsRequest &request)
{

}

/**
 * Starts the specified Amazon Kinesis Analytics application. After creating an application, you must exclusively call this
 * operation to start your
 *
 * application>
 *
 * After the application starts, it begins consuming the input data, processes it, and writes the output to the configured
 *
 * destination>
 *
 * The application status must be <code>READY</code> for you to start an application. You can get the application status in
 * the console or using the <a>DescribeApplication</a>
 *
 * operation>
 *
 * After you start the application, you can stop the application from processing the input by calling the
 * <a>StopApplication</a>
 *
 * operation>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:StartApplication</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartApplicationResponse * KinesisAnalyticsClient::startApplication(const StartApplicationRequest &request)
{

}

/**
 * Stops the application from processing input data. You can stop an application only if it is in the running state. You
 * can use the <a>DescribeApplication</a> operation to find the application state. After the application is stopped, Amazon
 * Kinesis Analytics stops reading data from the input, the application stops processing data, and there is no output
 * written to the destination.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:StopApplication</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopApplicationResponse * KinesisAnalyticsClient::stopApplication(const StopApplicationRequest &request)
{

}

/**
 * Updates an existing Amazon Kinesis Analytics application. Using this API, you can update application code, input
 * configuration, and output configuration.
 *
 * </p
 *
 * Note that Amazon Kinesis Analytics updates the <code>CurrentApplicationVersionId</code> each time you update your
 * application.
 *
 * </p
 *
 * This operation requires permission for the <code>kinesisanalytics:UpdateApplication</code>
 *
 * @param  request Request to send to Amazon Kinesis Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationResponse * KinesisAnalyticsClient::updateApplication(const UpdateApplicationRequest &request)
{

}

/**
 * @internal
 *
 * @class  KinesisAnalyticsClientPrivate
 *
 * @brief  Private implementation for KinesisAnalyticsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisAnalyticsClientPrivate object.
 *
 * @param  q  Pointer to this object's public KinesisAnalyticsClient instance.
 */
KinesisAnalyticsClientPrivate::KinesisAnalyticsClientPrivate(KinesisAnalyticsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace KinesisAnalytics
} // namespace AWS
