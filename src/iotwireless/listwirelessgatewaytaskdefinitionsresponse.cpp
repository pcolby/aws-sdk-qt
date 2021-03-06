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

#include "listwirelessgatewaytaskdefinitionsresponse.h"
#include "listwirelessgatewaytaskdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewayTaskDefinitionsResponse
 * \brief The ListWirelessGatewayTaskDefinitionsResponse class provides an interace for IoTWireless ListWirelessGatewayTaskDefinitions responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listWirelessGatewayTaskDefinitions
 */

/*!
 * Constructs a ListWirelessGatewayTaskDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWirelessGatewayTaskDefinitionsResponse::ListWirelessGatewayTaskDefinitionsResponse(
        const ListWirelessGatewayTaskDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListWirelessGatewayTaskDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListWirelessGatewayTaskDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWirelessGatewayTaskDefinitionsRequest * ListWirelessGatewayTaskDefinitionsResponse::request() const
{
    Q_D(const ListWirelessGatewayTaskDefinitionsResponse);
    return static_cast<const ListWirelessGatewayTaskDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListWirelessGatewayTaskDefinitions \a response.
 */
void ListWirelessGatewayTaskDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWirelessGatewayTaskDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewayTaskDefinitionsResponsePrivate
 * \brief The ListWirelessGatewayTaskDefinitionsResponsePrivate class provides private implementation for ListWirelessGatewayTaskDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListWirelessGatewayTaskDefinitionsResponsePrivate object with public implementation \a q.
 */
ListWirelessGatewayTaskDefinitionsResponsePrivate::ListWirelessGatewayTaskDefinitionsResponsePrivate(
    ListWirelessGatewayTaskDefinitionsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListWirelessGatewayTaskDefinitions response element from \a xml.
 */
void ListWirelessGatewayTaskDefinitionsResponsePrivate::parseListWirelessGatewayTaskDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWirelessGatewayTaskDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
