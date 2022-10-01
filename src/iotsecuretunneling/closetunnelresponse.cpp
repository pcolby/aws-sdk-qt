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

#include "closetunnelresponse.h"
#include "closetunnelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::CloseTunnelResponse
 * \brief The CloseTunnelResponse class provides an interace for IoTSecureTunneling CloseTunnel responses.
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
 * \sa IoTSecureTunnelingClient::closeTunnel
 */

/*!
 * Constructs a CloseTunnelResponse object for \a reply to \a request, with parent \a parent.
 */
CloseTunnelResponse::CloseTunnelResponse(
        const CloseTunnelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new CloseTunnelResponsePrivate(this), parent)
{
    setRequest(new CloseTunnelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CloseTunnelRequest * CloseTunnelResponse::request() const
{
    Q_D(const CloseTunnelResponse);
    return static_cast<const CloseTunnelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling CloseTunnel \a response.
 */
void CloseTunnelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CloseTunnelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::CloseTunnelResponsePrivate
 * \brief The CloseTunnelResponsePrivate class provides private implementation for CloseTunnelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a CloseTunnelResponsePrivate object with public implementation \a q.
 */
CloseTunnelResponsePrivate::CloseTunnelResponsePrivate(
    CloseTunnelResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling CloseTunnel response element from \a xml.
 */
void CloseTunnelResponsePrivate::parseCloseTunnelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CloseTunnelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws
