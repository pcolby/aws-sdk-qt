// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getendpointresponse.h"
#include "getendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetEndpointResponse
 * \brief The GetEndpointResponse class provides an interace for IotDeviceAdvisor GetEndpoint responses.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 *
 * \sa IotDeviceAdvisorClient::getEndpoint
 */

/*!
 * Constructs a GetEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetEndpointResponse::GetEndpointResponse(
        const GetEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new GetEndpointResponsePrivate(this), parent)
{
    setRequest(new GetEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEndpointRequest * GetEndpointResponse::request() const
{
    Q_D(const GetEndpointResponse);
    return static_cast<const GetEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor GetEndpoint \a response.
 */
void GetEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetEndpointResponsePrivate
 * \brief The GetEndpointResponsePrivate class provides private implementation for GetEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetEndpointResponsePrivate object with public implementation \a q.
 */
GetEndpointResponsePrivate::GetEndpointResponsePrivate(
    GetEndpointResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor GetEndpoint response element from \a xml.
 */
void GetEndpointResponsePrivate::parseGetEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
