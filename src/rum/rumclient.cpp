// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rumclient.h"
#include "rumclient_p.h"

#include "core/awssignaturev4.h"
#include "createappmonitorrequest.h"
#include "createappmonitorresponse.h"
#include "deleteappmonitorrequest.h"
#include "deleteappmonitorresponse.h"
#include "getappmonitorrequest.h"
#include "getappmonitorresponse.h"
#include "getappmonitordatarequest.h"
#include "getappmonitordataresponse.h"
#include "listappmonitorsrequest.h"
#include "listappmonitorsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putrumeventsrequest.h"
#include "putrumeventsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateappmonitorrequest.h"
#include "updateappmonitorresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Rum
 * \brief Contains classess for accessing CloudWatch RUM.
 *
 * \inmodule QtAwsRum
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::RumClient
 * \brief The RumClient class provides access to the CloudWatch RUM service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRum
 *
 *  With Amazon CloudWatch RUM, you can perform real-user monitoring to collect client-side data about your web application
 *  performance from actual user sessions in real time. The data collected includes page load times, client-side errors, and
 *  user behavior. When you view this data, you can see it all aggregated together and also see breakdowns by the browsers
 *  and devices that your customers
 * 
 *  use>
 * 
 *  You can use the collected data to quickly identify and debug client-side performance issues. CloudWatch RUM helps you
 *  visualize anomalies in your application performance and find relevant debugging data such as error messages, stack
 *  traces, and user sessions. You can also use RUM to understand the range of end-user impact including the number of
 *  users, geolocations, and browsers
 */

/*!
 * \brief Constructs a RumClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RumClient::RumClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RumClientPrivate(this), parent)
{
    Q_D(RumClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rum");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("CloudWatch RUM");
    d->serviceName = QStringLiteral("rum");
}

/*!
 * \overload RumClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RumClient::RumClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RumClientPrivate(this), parent)
{
    Q_D(RumClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rum");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("CloudWatch RUM");
    d->serviceName = QStringLiteral("rum");
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * CreateAppMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Amazon CloudWatch RUM app monitor, which collects telemetry data from your application and sends that data to
 * RUM. The data includes performance and reliability information such as page load time, client-side errors, and user
 *
 * behavior>
 *
 * You use this operation only to create a new app monitor. To update an existing app monitor, use <a
 * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_UpdateAppMonitor.html">UpdateAppMonitor</a>
 *
 * instead>
 *
 * After you create an app monitor, sign in to the CloudWatch RUM console to get the JavaScript code snippet to add to your
 * web application. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-find-code-snippet.html">How do I
 * find a code snippet that I've already generated?</a>
 */
CreateAppMonitorResponse * RumClient::createAppMonitor(const CreateAppMonitorRequest &request)
{
    return qobject_cast<CreateAppMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * DeleteAppMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing app monitor. This immediately stops the collection of
 */
DeleteAppMonitorResponse * RumClient::deleteAppMonitor(const DeleteAppMonitorRequest &request)
{
    return qobject_cast<DeleteAppMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * GetAppMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the complete configuration information for one app
 */
GetAppMonitorResponse * RumClient::getAppMonitor(const GetAppMonitorRequest &request)
{
    return qobject_cast<GetAppMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * GetAppMonitorDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the raw performance events that RUM has collected from your web application, so that you can do your own
 * processing or analysis of this
 */
GetAppMonitorDataResponse * RumClient::getAppMonitorData(const GetAppMonitorDataRequest &request)
{
    return qobject_cast<GetAppMonitorDataResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * ListAppMonitorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the Amazon CloudWatch RUM app monitors in the
 */
ListAppMonitorsResponse * RumClient::listAppMonitors(const ListAppMonitorsRequest &request)
{
    return qobject_cast<ListAppMonitorsResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the tags associated with a CloudWatch RUM
 */
ListTagsForResourceResponse * RumClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * PutRumEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends telemetry events about your application performance and user behavior to CloudWatch RUM. The code snippet that RUM
 * generates for you to add to your application includes <code>PutRumEvents</code> operations to send this data to
 *
 * RUM>
 *
 * Each <code>PutRumEvents</code> operation can send a batch of events from one user
 */
PutRumEventsResponse * RumClient::putRumEvents(const PutRumEventsRequest &request)
{
    return qobject_cast<PutRumEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified CloudWatch RUM resource. Currently, the only resources that
 * can be tagged app
 *
 * monitors>
 *
 * Tags can help you organize and categorize your resources. You can also use them to scope user permissions by granting a
 * user permission to access or change only resources with certain tag
 *
 * values>
 *
 * Tags don't have any semantic meaning to Amazon Web Services and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the <code>TagResource</code> action with a resource that already has tags. If you specify a new tag key for
 * the resource, this tag is appended to the list of tags associated with the alarm. If you specify a tag key that is
 * already associated with the resource, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a
 *
 * resource>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging Amazon Web
 * Services
 */
TagResourceResponse * RumClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified
 */
UntagResourceResponse * RumClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RumClient service, and returns a pointer to an
 * UpdateAppMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an existing app monitor. When you use this operation, only the parts of the app monitor
 * configuration that you specify in this operation are changed. For any parameters that you omit, the existing values are
 *
 * kept>
 *
 * You can't use this operation to change the tags of an existing app monitor. To change the tags of an existing app
 * monitor, use <a
 *
 * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_TagResource.html">TagResource</a>>
 *
 * To create a new app monitor, use <a
 *
 * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_CreateAppMonitor.html">CreateAppMonitor</a>>
 *
 * After you update an app monitor, sign in to the CloudWatch RUM console to get the updated JavaScript code snippet to add
 * to your web application. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-find-code-snippet.html">How do I
 * find a code snippet that I've already generated?</a>
 */
UpdateAppMonitorResponse * RumClient::updateAppMonitor(const UpdateAppMonitorRequest &request)
{
    return qobject_cast<UpdateAppMonitorResponse *>(send(request));
}

/*!
 * \class QtAws::Rum::RumClientPrivate
 * \brief The RumClientPrivate class provides private implementation for RumClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a RumClientPrivate object with public implementation \a q.
 */
RumClientPrivate::RumClientPrivate(RumClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Rum
} // namespace QtAws
