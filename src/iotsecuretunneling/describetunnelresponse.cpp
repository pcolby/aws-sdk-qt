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

#include "describetunnelresponse.h"
#include "describetunnelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::DescribeTunnelResponse
 * \brief The DescribeTunnelResponse class provides an interace for IoTSecureTunneling DescribeTunnel responses.
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
 * \sa IoTSecureTunnelingClient::describeTunnel
 */

/*!
 * Constructs a DescribeTunnelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTunnelResponse::DescribeTunnelResponse(
        const DescribeTunnelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new DescribeTunnelResponsePrivate(this), parent)
{
    setRequest(new DescribeTunnelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTunnelRequest * DescribeTunnelResponse::request() const
{
    return static_cast<const DescribeTunnelRequest *>(IoTSecureTunnelingResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling DescribeTunnel \a response.
 */
void DescribeTunnelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTunnelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::DescribeTunnelResponsePrivate
 * \brief The DescribeTunnelResponsePrivate class provides private implementation for DescribeTunnelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a DescribeTunnelResponsePrivate object with public implementation \a q.
 */
DescribeTunnelResponsePrivate::DescribeTunnelResponsePrivate(
    DescribeTunnelResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling DescribeTunnel response element from \a xml.
 */
void DescribeTunnelResponsePrivate::parseDescribeTunnelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTunnelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws
