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

#include "batchassociateclientdevicewithcoredeviceresponse.h"
#include "batchassociateclientdevicewithcoredeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::BatchAssociateClientDeviceWithCoreDeviceResponse
 * \brief The BatchAssociateClientDeviceWithCoreDeviceResponse class provides an interace for GreengrassV2 BatchAssociateClientDeviceWithCoreDevice responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  AWS IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge
 *  devices. This enables devices to collect and analyze data closer to the source of information, react autonomously to
 *  local events, and communicate securely with each other on local networks. Local devices can also communicate securely
 *  with AWS IoT Core and export IoT data to the AWS Cloud. AWS IoT Greengrass developers can use AWS Lambda functions and
 *  components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  AWS IoT Greengrass Version 2 provides a new major version of the AWS IoT Greengrass Core software, new APIs, and a new
 *  console. Use this API reference to learn how to use the AWS IoT Greengrass V2 API operations to manage components,
 *  manage deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is AWS IoT
 *  Greengrass?</a> in the <i>AWS IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::batchAssociateClientDeviceWithCoreDevice
 */

/*!
 * Constructs a BatchAssociateClientDeviceWithCoreDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
BatchAssociateClientDeviceWithCoreDeviceResponse::BatchAssociateClientDeviceWithCoreDeviceResponse(
        const BatchAssociateClientDeviceWithCoreDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new BatchAssociateClientDeviceWithCoreDeviceResponsePrivate(this), parent)
{
    setRequest(new BatchAssociateClientDeviceWithCoreDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchAssociateClientDeviceWithCoreDeviceRequest * BatchAssociateClientDeviceWithCoreDeviceResponse::request() const
{
    Q_D(const BatchAssociateClientDeviceWithCoreDeviceResponse);
    return static_cast<const BatchAssociateClientDeviceWithCoreDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 BatchAssociateClientDeviceWithCoreDevice \a response.
 */
void BatchAssociateClientDeviceWithCoreDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchAssociateClientDeviceWithCoreDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::BatchAssociateClientDeviceWithCoreDeviceResponsePrivate
 * \brief The BatchAssociateClientDeviceWithCoreDeviceResponsePrivate class provides private implementation for BatchAssociateClientDeviceWithCoreDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a BatchAssociateClientDeviceWithCoreDeviceResponsePrivate object with public implementation \a q.
 */
BatchAssociateClientDeviceWithCoreDeviceResponsePrivate::BatchAssociateClientDeviceWithCoreDeviceResponsePrivate(
    BatchAssociateClientDeviceWithCoreDeviceResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 BatchAssociateClientDeviceWithCoreDevice response element from \a xml.
 */
void BatchAssociateClientDeviceWithCoreDeviceResponsePrivate::parseBatchAssociateClientDeviceWithCoreDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchAssociateClientDeviceWithCoreDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
