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

#include "deletewirelessgatewaytaskdefinitionresponse.h"
#include "deletewirelessgatewaytaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskDefinitionResponse
 * \brief The DeleteWirelessGatewayTaskDefinitionResponse class provides an interace for IoTWireless DeleteWirelessGatewayTaskDefinition responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteWirelessGatewayTaskDefinition
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessGatewayTaskDefinitionResponse::DeleteWirelessGatewayTaskDefinitionResponse(
        const DeleteWirelessGatewayTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessGatewayTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessGatewayTaskDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessGatewayTaskDefinitionRequest * DeleteWirelessGatewayTaskDefinitionResponse::request() const
{
    Q_D(const DeleteWirelessGatewayTaskDefinitionResponse);
    return static_cast<const DeleteWirelessGatewayTaskDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessGatewayTaskDefinition \a response.
 */
void DeleteWirelessGatewayTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessGatewayTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskDefinitionResponsePrivate
 * \brief The DeleteWirelessGatewayTaskDefinitionResponsePrivate class provides private implementation for DeleteWirelessGatewayTaskDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteWirelessGatewayTaskDefinitionResponsePrivate::DeleteWirelessGatewayTaskDefinitionResponsePrivate(
    DeleteWirelessGatewayTaskDefinitionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessGatewayTaskDefinition response element from \a xml.
 */
void DeleteWirelessGatewayTaskDefinitionResponsePrivate::parseDeleteWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessGatewayTaskDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
