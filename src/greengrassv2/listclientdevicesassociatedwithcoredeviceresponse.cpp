// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclientdevicesassociatedwithcoredeviceresponse.h"
#include "listclientdevicesassociatedwithcoredeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListClientDevicesAssociatedWithCoreDeviceResponse
 * \brief The ListClientDevicesAssociatedWithCoreDeviceResponse class provides an interace for GreengrassV2 ListClientDevicesAssociatedWithCoreDevice responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listClientDevicesAssociatedWithCoreDevice
 */

/*!
 * Constructs a ListClientDevicesAssociatedWithCoreDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ListClientDevicesAssociatedWithCoreDeviceResponse::ListClientDevicesAssociatedWithCoreDeviceResponse(
        const ListClientDevicesAssociatedWithCoreDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ListClientDevicesAssociatedWithCoreDeviceResponsePrivate(this), parent)
{
    setRequest(new ListClientDevicesAssociatedWithCoreDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClientDevicesAssociatedWithCoreDeviceRequest * ListClientDevicesAssociatedWithCoreDeviceResponse::request() const
{
    Q_D(const ListClientDevicesAssociatedWithCoreDeviceResponse);
    return static_cast<const ListClientDevicesAssociatedWithCoreDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ListClientDevicesAssociatedWithCoreDevice \a response.
 */
void ListClientDevicesAssociatedWithCoreDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListClientDevicesAssociatedWithCoreDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ListClientDevicesAssociatedWithCoreDeviceResponsePrivate
 * \brief The ListClientDevicesAssociatedWithCoreDeviceResponsePrivate class provides private implementation for ListClientDevicesAssociatedWithCoreDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListClientDevicesAssociatedWithCoreDeviceResponsePrivate object with public implementation \a q.
 */
ListClientDevicesAssociatedWithCoreDeviceResponsePrivate::ListClientDevicesAssociatedWithCoreDeviceResponsePrivate(
    ListClientDevicesAssociatedWithCoreDeviceResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ListClientDevicesAssociatedWithCoreDevice response element from \a xml.
 */
void ListClientDevicesAssociatedWithCoreDeviceResponsePrivate::parseListClientDevicesAssociatedWithCoreDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClientDevicesAssociatedWithCoreDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
