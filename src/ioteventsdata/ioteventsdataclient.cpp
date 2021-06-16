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

#include "ioteventsdataclient.h"
#include "ioteventsdataclient_p.h"

#include "core/awssignaturev4.h"
#include "batchputmessagerequest.h"
#include "batchputmessageresponse.h"
#include "batchupdatedetectorrequest.h"
#include "batchupdatedetectorresponse.h"
#include "describedetectorrequest.h"
#include "describedetectorresponse.h"
#include "listdetectorsrequest.h"
#include "listdetectorsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTEventsData
 * \brief Contains classess for accessing AWS IoT Events Data.
 *
 * \inmodule QtAwsIoTEventsData
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::IoTEventsDataClient
 * \brief The IoTEventsDataClient class provides access to the AWS IoT Events Data service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. AWS IoT Events Data API commands enable you to send inputs to detectors, list detectors, and view or
 *  update a detector's
 */

/*!
 * \brief Constructs a IoTEventsDataClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTEventsDataClient::IoTEventsDataClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTEventsDataClientPrivate(this), parent)
{
    Q_D(IoTEventsDataClient);
    d->apiVersion = QStringLiteral("2018-10-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("data.iotevents");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Events Data");
    d->serviceName = QStringLiteral("ioteventsdata");
}

/*!
 * \overload IoTEventsDataClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTEventsDataClient::IoTEventsDataClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTEventsDataClientPrivate(this), parent)
{
    Q_D(IoTEventsDataClient);
    d->apiVersion = QStringLiteral("2018-10-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("data.iotevents");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Events Data");
    d->serviceName = QStringLiteral("ioteventsdata");
}

/*!
 * Sends \a request to the IoTEventsDataClient service, and returns a pointer to an
 * BatchPutMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a set of messages to the AWS IoT Events system. Each message payload is transformed into the input you specify
 * (<code>"inputName"</code>) and ingested into any detectors that monitor that input. If multiple messages are sent, the
 * order in which the messages are processed isn't guaranteed. To guarantee ordering, you must send messages one at a time
 * and wait for a successful
 */
BatchPutMessageResponse * IoTEventsDataClient::batchPutMessage(const BatchPutMessageRequest &request)
{
    return qobject_cast<BatchPutMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsDataClient service, and returns a pointer to an
 * BatchUpdateDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the state, variable values, and timer settings of one or more detectors (instances) of a specified detector
 */
BatchUpdateDetectorResponse * IoTEventsDataClient::batchUpdateDetector(const BatchUpdateDetectorRequest &request)
{
    return qobject_cast<BatchUpdateDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsDataClient service, and returns a pointer to an
 * DescribeDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified detector
 */
DescribeDetectorResponse * IoTEventsDataClient::describeDetector(const DescribeDetectorRequest &request)
{
    return qobject_cast<DescribeDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsDataClient service, and returns a pointer to an
 * ListDetectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists detectors (the instances of a detector
 */
ListDetectorsResponse * IoTEventsDataClient::listDetectors(const ListDetectorsRequest &request)
{
    return qobject_cast<ListDetectorsResponse *>(send(request));
}

/*!
 * \class QtAws::IoTEventsData::IoTEventsDataClientPrivate
 * \brief The IoTEventsDataClientPrivate class provides private implementation for IoTEventsDataClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a IoTEventsDataClientPrivate object with public implementation \a q.
 */
IoTEventsDataClientPrivate::IoTEventsDataClientPrivate(IoTEventsDataClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTEventsData
} // namespace QtAws
