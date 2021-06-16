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

#include "kinesisanalyticsclient.h"
#include "kinesisanalyticsclient_p.h"

#include "core/awssignaturev4.h"
#include "addapplicationcloudwatchloggingoptionrequest.h"
#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "addapplicationinputrequest.h"
#include "addapplicationinputresponse.h"
#include "addapplicationinputprocessingconfigurationrequest.h"
#include "addapplicationinputprocessingconfigurationresponse.h"
#include "addapplicationoutputrequest.h"
#include "addapplicationoutputresponse.h"
#include "addapplicationreferencedatasourcerequest.h"
#include "addapplicationreferencedatasourceresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deleteapplicationcloudwatchloggingoptionrequest.h"
#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "deleteapplicationinputprocessingconfigurationrequest.h"
#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "deleteapplicationoutputrequest.h"
#include "deleteapplicationoutputresponse.h"
#include "deleteapplicationreferencedatasourcerequest.h"
#include "deleteapplicationreferencedatasourceresponse.h"
#include "describeapplicationrequest.h"
#include "describeapplicationresponse.h"
#include "discoverinputschemarequest.h"
#include "discoverinputschemaresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startapplicationrequest.h"
#include "startapplicationresponse.h"
#include "stopapplicationrequest.h"
#include "stopapplicationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KinesisAnalytics
 * \brief Contains classess for accessing Amazon Kinesis Analytics.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::KinesisAnalyticsClient
 * \brief The KinesisAnalyticsClient class provides access to the Amazon Kinesis Analytics service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 */

/*!
 * \brief Constructs a KinesisAnalyticsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisAnalyticsClient::KinesisAnalyticsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisAnalyticsClientPrivate(this), parent)
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

/*!
 * \overload KinesisAnalyticsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisAnalyticsClient::KinesisAnalyticsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisAnalyticsClientPrivate(this), parent)
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

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * AddApplicationCloudWatchLoggingOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Adds a CloudWatch log stream to monitor application configuration errors. For more information about using CloudWatch
 * log streams with Amazon Kinesis Analytics applications, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working with Amazon CloudWatch
 */
AddApplicationCloudWatchLoggingOptionResponse * KinesisAnalyticsClient::addApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest &request)
{
    return qobject_cast<AddApplicationCloudWatchLoggingOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * AddApplicationInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Adds a streaming source to your Amazon Kinesis application. For conceptual information, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring Application
 * Input</a>.
 *
 * </p
 *
 * You can add a streaming source either when you create an application or you can use this operation to add a streaming
 * source after you create an application. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_CreateApplication.html">CreateApplication</a>>
 *
 * Any configuration update, including adding a streaming source using this operation, results in a new version of the
 * application. You can use the <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
 * operation to find the current application version.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:AddApplicationInput</code>
 */
AddApplicationInputResponse * KinesisAnalyticsClient::addApplicationInput(const AddApplicationInputRequest &request)
{
    return qobject_cast<AddApplicationInputResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * AddApplicationInputProcessingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Adds an <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
 * to an application. An input processor preprocesses records on the input stream before the application's SQL code
 * executes. Currently, the only input processor available is <a href="https://docs.aws.amazon.com/lambda/">AWS
 */
AddApplicationInputProcessingConfigurationResponse * KinesisAnalyticsClient::addApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest &request)
{
    return qobject_cast<AddApplicationInputProcessingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * AddApplicationOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Adds an external destination to your Amazon Kinesis Analytics
 *
 * application>
 *
 * If you want Amazon Kinesis Analytics to deliver data from an in-application stream within your application to an
 * external destination (such as an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream, or an AWS Lambda
 * function), you add the relevant configuration to your application using this operation. You can configure one or more
 * outputs for your application. Each output configuration maps an in-application stream and an external
 *
 * destination>
 *
 * You can use one of the output configurations to deliver data from your in-application error stream to an external
 * destination so that you can analyze the errors. For more information, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding Application Output
 * (Destination)</a>.
 *
 * </p
 *
 * Any configuration update, including adding a streaming source using this operation, results in a new version of the
 * application. You can use the <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
 * operation to find the current application
 *
 * version>
 *
 * For the limits on the number of application inputs and outputs you can configure, see <a
 *
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:AddApplicationOutput</code>
 */
AddApplicationOutputResponse * KinesisAnalyticsClient::addApplicationOutput(const AddApplicationOutputRequest &request)
{
    return qobject_cast<AddApplicationOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * AddApplicationReferenceDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
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
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring Application
 * Input</a>. For the limits on data sources you can add to your application, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:AddApplicationOutput</code> action.
 */
AddApplicationReferenceDataSourceResponse * KinesisAnalyticsClient::addApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest &request)
{
    return qobject_cast<AddApplicationReferenceDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Creates an Amazon Kinesis Analytics application. You can configure each application with one streaming source as input,
 * application code to process the input, and up to three destinations where you want Amazon Kinesis Analytics to write the
 * output data from your application. For an overview, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How it Works</a>.
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
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting Started</a>.
 */
CreateApplicationResponse * KinesisAnalyticsClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Deletes the specified application. Amazon Kinesis Analytics halts application execution and deletes the application,
 * including any application artifacts (such as in-application streams, reference table, and application
 *
 * code)>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DeleteApplication</code>
 */
DeleteApplicationResponse * KinesisAnalyticsClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * DeleteApplicationCloudWatchLoggingOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Deletes a CloudWatch log stream from an application. For more information about using CloudWatch log streams with Amazon
 * Kinesis Analytics applications, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working with Amazon CloudWatch
 */
DeleteApplicationCloudWatchLoggingOptionResponse * KinesisAnalyticsClient::deleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest &request)
{
    return qobject_cast<DeleteApplicationCloudWatchLoggingOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * DeleteApplicationInputProcessingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Deletes an <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
 * from an
 */
DeleteApplicationInputProcessingConfigurationResponse * KinesisAnalyticsClient::deleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest &request)
{
    return qobject_cast<DeleteApplicationInputProcessingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * DeleteApplicationOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Deletes output destination configuration from your application configuration. Amazon Kinesis Analytics will no longer
 * write data from the corresponding in-application stream to the external output
 *
 * destination>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DeleteApplicationOutput</code>
 */
DeleteApplicationOutputResponse * KinesisAnalyticsClient::deleteApplicationOutput(const DeleteApplicationOutputRequest &request)
{
    return qobject_cast<DeleteApplicationOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * DeleteApplicationReferenceDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Deletes a reference data source configuration from the specified application
 *
 * configuration>
 *
 * If the application is running, Amazon Kinesis Analytics immediately removes the in-application table that you created
 * using the <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
 * operation.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code>
 */
DeleteApplicationReferenceDataSourceResponse * KinesisAnalyticsClient::deleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest &request)
{
    return qobject_cast<DeleteApplicationReferenceDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * DescribeApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Returns information about a specific Amazon Kinesis Analytics
 *
 * application>
 *
 * If you want to retrieve a list of all applications in your account, use the <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_ListApplications.html">ListApplications</a>
 *
 * operation>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DescribeApplication</code> action. You can use
 * <code>DescribeApplication</code> to get the current application versionId, which you need to call other operations such
 * as <code>Update</code>.
 */
DescribeApplicationResponse * KinesisAnalyticsClient::describeApplication(const DescribeApplicationRequest &request)
{
    return qobject_cast<DescribeApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * DiscoverInputSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Infers a schema by evaluating sample records on the specified streaming source (Amazon Kinesis stream or Amazon Kinesis
 * Firehose delivery stream) or S3 object. In the response, the operation returns the inferred schema and also the sample
 * records that the operation used to infer the
 *
 * schema>
 *
 * You can use the inferred schema when configuring a streaming source for your application. For conceptual information,
 * see <a href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring Application
 * Input</a>. Note that when you create an application using the Amazon Kinesis Analytics console, the console uses this
 * operation to infer a schema and show it in the console user interface.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code> action.
 */
DiscoverInputSchemaResponse * KinesisAnalyticsClient::discoverInputSchema(const DiscoverInputSchemaRequest &request)
{
    return qobject_cast<DiscoverInputSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Returns a list of Amazon Kinesis Analytics applications in your account. For each application, the response includes the
 * application name, Amazon Resource Name (ARN), and status. If the response returns the <code>HasMoreApplications</code>
 * value as true, you can send another request by adding the <code>ExclusiveStartApplicationName</code> in the request
 * body, and set the value of this to the last application name from the previous response.
 *
 * </p
 *
 * If you want detailed information about a specific application, use <a
 *
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:ListApplications</code>
 */
ListApplicationsResponse * KinesisAnalyticsClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of key-value tags assigned to the application. For more information, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-tagging.html">Using
 */
ListTagsForResourceResponse * KinesisAnalyticsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * StartApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
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
 * the console or using the <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
 *
 * operation>
 *
 * After you start the application, you can stop the application from processing the input by calling the <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_StopApplication.html">StopApplication</a>
 *
 * operation>
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:StartApplication</code>
 */
StartApplicationResponse * KinesisAnalyticsClient::startApplication(const StartApplicationRequest &request)
{
    return qobject_cast<StartApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * StopApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
 * Stops the application from processing input data. You can stop an application only if it is in the running state. You
 * can use the <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
 * operation to find the application state. After the application is stopped, Amazon Kinesis Analytics stops reading data
 * from the input, the application stops processing data, and there is no output written to the destination.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>kinesisanalytics:StopApplication</code>
 */
StopApplicationResponse * KinesisAnalyticsClient::stopApplication(const StopApplicationRequest &request)
{
    return qobject_cast<StopApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more key-value tags to a Kinesis Analytics application. Note that the maximum number of application tags
 * includes system tags. The maximum number of user-defined application tags is 50. For more information, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-tagging.html">Using
 */
TagResourceResponse * KinesisAnalyticsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a Kinesis Analytics application. For more information, see <a
 * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-tagging.html">Using
 */
UntagResourceResponse * KinesisAnalyticsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 * Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 *
 * Documentation</a>> </note>
 *
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
 */
UpdateApplicationResponse * KinesisAnalyticsClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisAnalytics::KinesisAnalyticsClientPrivate
 * \brief The KinesisAnalyticsClientPrivate class provides private implementation for KinesisAnalyticsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a KinesisAnalyticsClientPrivate object with public implementation \a q.
 */
KinesisAnalyticsClientPrivate::KinesisAnalyticsClientPrivate(KinesisAnalyticsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisAnalytics
} // namespace QtAws
