// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>IoT Secure Tunneling</fullname>
 * 
 *  IoT Secure Tunneling creates remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">IoT Secure
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
    Q_D(const OpenTunnelResponse);
    return static_cast<const OpenTunnelRequest *>(d->request);
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
