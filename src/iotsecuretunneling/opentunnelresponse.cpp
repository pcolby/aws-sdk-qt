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

#include "opentunnelresponse.h"
#include "opentunnelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::OpenTunnelResponse
 * \brief The OpenTunnelResponse class provides an interace for IoTSecureTunneling OpenTunnel responses.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>AWS IoT Secure Tunneling</fullname>
 * 
 *  AWS IoT Secure Tunnling enables you to create remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how AWS IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">AWS IoT Secure
 *
 * \sa IoTSecureTunnelingClient::openTunnel
 */

/*!
 * Constructs a OpenTunnelResponse object for \a reply to \a request, with parent \a parent.
 */
OpenTunnelResponse::OpenTunnelResponse(
        const OpenTunnelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new OpenTunnelResponsePrivate(this), parent)
{
    setRequest(new OpenTunnelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const OpenTunnelRequest * OpenTunnelResponse::request() const
{
    return static_cast<const OpenTunnelRequest *>(IoTSecureTunnelingResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling OpenTunnel \a response.
 */
void OpenTunnelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(OpenTunnelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::OpenTunnelResponsePrivate
 * \brief The OpenTunnelResponsePrivate class provides private implementation for OpenTunnelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a OpenTunnelResponsePrivate object with public implementation \a q.
 */
OpenTunnelResponsePrivate::OpenTunnelResponsePrivate(
    OpenTunnelResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling OpenTunnel response element from \a xml.
 */
void OpenTunnelResponsePrivate::parseOpenTunnelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("OpenTunnelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws
