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

#include "rotatetunnelaccesstokenresponse.h"
#include "rotatetunnelaccesstokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::RotateTunnelAccessTokenResponse
 * \brief The RotateTunnelAccessTokenResponse class provides an interace for IoTSecureTunneling RotateTunnelAccessToken responses.
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
 * \sa IoTSecureTunnelingClient::rotateTunnelAccessToken
 */

/*!
 * Constructs a RotateTunnelAccessTokenResponse object for \a reply to \a request, with parent \a parent.
 */
RotateTunnelAccessTokenResponse::RotateTunnelAccessTokenResponse(
        const RotateTunnelAccessTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new RotateTunnelAccessTokenResponsePrivate(this), parent)
{
    setRequest(new RotateTunnelAccessTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RotateTunnelAccessTokenRequest * RotateTunnelAccessTokenResponse::request() const
{
    Q_D(const RotateTunnelAccessTokenResponse);
    return static_cast<const RotateTunnelAccessTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling RotateTunnelAccessToken \a response.
 */
void RotateTunnelAccessTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RotateTunnelAccessTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::RotateTunnelAccessTokenResponsePrivate
 * \brief The RotateTunnelAccessTokenResponsePrivate class provides private implementation for RotateTunnelAccessTokenResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a RotateTunnelAccessTokenResponsePrivate object with public implementation \a q.
 */
RotateTunnelAccessTokenResponsePrivate::RotateTunnelAccessTokenResponsePrivate(
    RotateTunnelAccessTokenResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling RotateTunnelAccessToken response element from \a xml.
 */
void RotateTunnelAccessTokenResponsePrivate::parseRotateTunnelAccessTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RotateTunnelAccessTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws
