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

#include "kinesisanalyticsv2client.h"
#include "kinesisanalyticsv2client_p.h"

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
#include "createapplicationsnapshotrequest.h"
#include "createapplicationsnapshotresponse.h"
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
#include "deleteapplicationsnapshotrequest.h"
#include "deleteapplicationsnapshotresponse.h"
#include "describeapplicationrequest.h"
#include "describeapplicationresponse.h"
#include "describeapplicationsnapshotrequest.h"
#include "describeapplicationsnapshotresponse.h"
#include "discoverinputschemarequest.h"
#include "discoverinputschemaresponse.h"
#include "listapplicationsnapshotsrequest.h"
#include "listapplicationsnapshotsresponse.h"
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
 * \namespace QtAws::KinesisAnalyticsV2
 * \brief Contains classess for accessing Amazon Kinesis Analytics (Kinesis Analytics V2).
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::KinesisAnalyticsV2Client
 * \brief The KinesisAnalyticsV2Client class provides access to the Amazon Kinesis Analytics (Kinesis Analytics V2) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  SQL or Java. The service enables you to quickly author and run SQL or Java code against streaming sources to perform
 *  time series analytics, feed real-time dashboards, and create real-time
 */

/*!
 * \brief Constructs a KinesisAnalyticsV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisAnalyticsV2ClientPrivate(this), parent)
{
    Q_D(KinesisAnalyticsV2Client);
    d->apiVersion = QStringLiteral("2018-05-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisanalytics");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Analytics");
    d->serviceName = QStringLiteral("kinesisanalytics");
}

/*!
 * \overload KinesisAnalyticsV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisAnalyticsV2ClientPrivate(this), parent)
{
    Q_D(KinesisAnalyticsV2Client);
    d->apiVersion = QStringLiteral("2018-05-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisanalytics");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Analytics");
    d->serviceName = QStringLiteral("kinesisanalytics");
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * AddApplicationCloudWatchLoggingOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an Amazon CloudWatch log stream to monitor application configuration
 */
AddApplicationCloudWatchLoggingOptionResponse * KinesisAnalyticsV2Client::addApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest &request)
{
    return qobject_cast<AddApplicationCloudWatchLoggingOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * AddApplicationInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a streaming source to your SQL-based Amazon Kinesis Data Analytics application.
 *
 * </p
 *
 * You can add a streaming source when you create an application, or you can use this operation to add a streaming source
 * after you create an application. For more information, see
 *
 * <a>CreateApplication</a>>
 *
 * Any configuration update, including adding a streaming source using this operation, results in a new version of the
 * application. You can use the <a>DescribeApplication</a> operation to find the current application version.
 */
AddApplicationInputResponse * KinesisAnalyticsV2Client::addApplicationInput(const AddApplicationInputRequest &request)
{
    return qobject_cast<AddApplicationInputResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * AddApplicationInputProcessingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an <a>InputProcessingConfiguration</a> to an SQL-based Kinesis Data Analytics application. An input processor
 * pre-processes records on the input stream before the application's SQL code executes. Currently, the only input
 * processor available is <a href="https://aws.amazon.com/documentation/lambda/">AWS
 */
AddApplicationInputProcessingConfigurationResponse * KinesisAnalyticsV2Client::addApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest &request)
{
    return qobject_cast<AddApplicationInputProcessingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * AddApplicationOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an external destination to your SQL-based Amazon Kinesis Data Analytics
 *
 * application>
 *
 * If you want Kinesis Data Analytics to deliver data from an in-application stream within your application to an external
 * destination (such as an Kinesis data stream, a Kinesis Data Firehose delivery stream, or an AWS Lambda function), you
 * add the relevant configuration to your application using this operation. You can configure one or more outputs for your
 * application. Each output configuration maps an in-application stream and an external
 *
 * destination>
 *
 * You can use one of the output configurations to deliver data from your in-application error stream to an external
 * destination so that you can analyze the errors.
 *
 * </p
 *
 * Any configuration update, including adding a streaming source using this operation, results in a new version of the
 * application. You can use the <a>DescribeApplication</a> operation to find the current application
 */
AddApplicationOutputResponse * KinesisAnalyticsV2Client::addApplicationOutput(const AddApplicationOutputRequest &request)
{
    return qobject_cast<AddApplicationOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * AddApplicationReferenceDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a reference data source to an existing SQL-based Amazon Kinesis Data Analytics
 *
 * application>
 *
 * Kinesis Data Analytics reads reference data (that is, an Amazon S3 object) and creates an in-application table within
 * your application. In the request, you provide the source (S3 bucket name and object key name), name of the
 * in-application table to create, and the necessary mapping information that describes how data in an Amazon S3 object
 * maps to columns in the resulting in-application
 */
AddApplicationReferenceDataSourceResponse * KinesisAnalyticsV2Client::addApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest &request)
{
    return qobject_cast<AddApplicationReferenceDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Kinesis Data Analytics application. For information about creating a Kinesis Data Analytics
 * application, see <a href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/getting-started.html">Creating an
 * Application</a>.
 */
CreateApplicationResponse * KinesisAnalyticsV2Client::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * CreateApplicationSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of the application's state
 */
CreateApplicationSnapshotResponse * KinesisAnalyticsV2Client::createApplicationSnapshot(const CreateApplicationSnapshotRequest &request)
{
    return qobject_cast<CreateApplicationSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified application. Kinesis Data Analytics halts application execution and deletes the
 */
DeleteApplicationResponse * KinesisAnalyticsV2Client::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DeleteApplicationCloudWatchLoggingOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon CloudWatch log stream from an Amazon Kinesis Data Analytics application.
 */
DeleteApplicationCloudWatchLoggingOptionResponse * KinesisAnalyticsV2Client::deleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest &request)
{
    return qobject_cast<DeleteApplicationCloudWatchLoggingOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DeleteApplicationInputProcessingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an <a>InputProcessingConfiguration</a> from an
 */
DeleteApplicationInputProcessingConfigurationResponse * KinesisAnalyticsV2Client::deleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest &request)
{
    return qobject_cast<DeleteApplicationInputProcessingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DeleteApplicationOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the output destination configuration from your SQL-based Amazon Kinesis Data Analytics application's
 * configuration. Kinesis Data Analytics will no longer write data from the corresponding in-application stream to the
 * external output
 */
DeleteApplicationOutputResponse * KinesisAnalyticsV2Client::deleteApplicationOutput(const DeleteApplicationOutputRequest &request)
{
    return qobject_cast<DeleteApplicationOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DeleteApplicationReferenceDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a reference data source configuration from the specified SQL-based Amazon Kinesis Data Analytics application's
 *
 * configuration>
 *
 * If the application is running, Kinesis Data Analytics immediately removes the in-application table that you created
 * using the <a>AddApplicationReferenceDataSource</a> operation.
 */
DeleteApplicationReferenceDataSourceResponse * KinesisAnalyticsV2Client::deleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest &request)
{
    return qobject_cast<DeleteApplicationReferenceDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DeleteApplicationSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a snapshot of application
 */
DeleteApplicationSnapshotResponse * KinesisAnalyticsV2Client::deleteApplicationSnapshot(const DeleteApplicationSnapshotRequest &request)
{
    return qobject_cast<DeleteApplicationSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DescribeApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific Amazon Kinesis Data Analytics
 *
 * application>
 *
 * If you want to retrieve a list of all applications in your account, use the <a>ListApplications</a>
 */
DescribeApplicationResponse * KinesisAnalyticsV2Client::describeApplication(const DescribeApplicationRequest &request)
{
    return qobject_cast<DescribeApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DescribeApplicationSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a snapshot of application state
 */
DescribeApplicationSnapshotResponse * KinesisAnalyticsV2Client::describeApplicationSnapshot(const DescribeApplicationSnapshotRequest &request)
{
    return qobject_cast<DescribeApplicationSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * DiscoverInputSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Infers a schema for an SQL-based Amazon Kinesis Data Analytics application by evaluating sample records on the specified
 * streaming source (Kinesis data stream or Kinesis Data Firehose delivery stream) or Amazon S3 object. In the response,
 * the operation returns the inferred schema and also the sample records that the operation used to infer the
 *
 * schema>
 *
 * You can use the inferred schema when configuring a streaming source for your application. When you create an application
 * using the Kinesis Data Analytics console, the console uses this operation to infer a schema and show it in the console
 * user interface.
 */
DiscoverInputSchemaResponse * KinesisAnalyticsV2Client::discoverInputSchema(const DiscoverInputSchemaRequest &request)
{
    return qobject_cast<DiscoverInputSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * ListApplicationSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about the current application
 */
ListApplicationSnapshotsResponse * KinesisAnalyticsV2Client::listApplicationSnapshots(const ListApplicationSnapshotsRequest &request)
{
    return qobject_cast<ListApplicationSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Amazon Kinesis Data Analytics applications in your account. For each application, the response
 * includes the application name, Amazon Resource Name (ARN), and status.
 *
 * </p
 *
 * If you want detailed information about a specific application, use
 */
ListApplicationsResponse * KinesisAnalyticsV2Client::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of key-value tags assigned to the
 */
ListTagsForResourceResponse * KinesisAnalyticsV2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * StartApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the specified Amazon Kinesis Data Analytics application. After creating an application, you must exclusively call
 * this operation to start your
 */
StartApplicationResponse * KinesisAnalyticsV2Client::startApplication(const StartApplicationRequest &request)
{
    return qobject_cast<StartApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * StopApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the application from processing data. You can stop an application only if it is in the running state. You can use
 * the <a>DescribeApplication</a> operation to find the application state.
 */
StopApplicationResponse * KinesisAnalyticsV2Client::stopApplication(const StopApplicationRequest &request)
{
    return qobject_cast<StopApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more key-value tags to a Kinesis Analytics application. Note that the maximum number of application tags
 * includes system tags. The maximum number of user-defined application tags is
 */
TagResourceResponse * KinesisAnalyticsV2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a Kinesis Analytics
 */
UntagResourceResponse * KinesisAnalyticsV2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisAnalyticsV2Client service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amazon Kinesis Data Analytics application. Using this operation, you can update application code,
 * input configuration, and output configuration.
 *
 * </p
 *
 * Kinesis Data Analytics updates the <code>ApplicationVersionId</code> each time you update your application.
 */
UpdateApplicationResponse * KinesisAnalyticsV2Client::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientPrivate
 * \brief The KinesisAnalyticsV2ClientPrivate class provides private implementation for KinesisAnalyticsV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a KinesisAnalyticsV2ClientPrivate object with public implementation \a q.
 */
KinesisAnalyticsV2ClientPrivate::KinesisAnalyticsV2ClientPrivate(KinesisAnalyticsV2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
