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

#include "listtunnelsresponse.h"
#include "listtunnelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsResponse
 * \brief The ListTunnelsResponse class provides an interace for IoTSecureTunneling ListTunnels responses.
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
 * \sa IoTSecureTunnelingClient::listTunnels
 */

/*!
 * Constructs a ListTunnelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTunnelsResponse::ListTunnelsResponse(
        const ListTunnelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new ListTunnelsResponsePrivate(this), parent)
{
    setRequest(new ListTunnelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTunnelsRequest * ListTunnelsResponse::request() const
{
    Q_D(const ListTunnelsResponse);
    return static_cast<const ListTunnelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling ListTunnels \a response.
 */
void ListTunnelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTunnelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsResponsePrivate
 * \brief The ListTunnelsResponsePrivate class provides private implementation for ListTunnelsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a ListTunnelsResponsePrivate object with public implementation \a q.
 */
ListTunnelsResponsePrivate::ListTunnelsResponsePrivate(
    ListTunnelsResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling ListTunnels response element from \a xml.
 */
void ListTunnelsResponsePrivate::parseListTunnelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTunnelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws
