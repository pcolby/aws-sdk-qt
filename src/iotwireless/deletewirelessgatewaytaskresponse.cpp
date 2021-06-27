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

#include "deletewirelessgatewaytaskresponse.h"
#include "deletewirelessgatewaytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskResponse
 * \brief The DeleteWirelessGatewayTaskResponse class provides an interace for IoTWireless DeleteWirelessGatewayTask responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteWirelessGatewayTask
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessGatewayTaskResponse::DeleteWirelessGatewayTaskResponse(
        const DeleteWirelessGatewayTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessGatewayTaskResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessGatewayTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessGatewayTaskRequest * DeleteWirelessGatewayTaskResponse::request() const
{
    return static_cast<const DeleteWirelessGatewayTaskRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessGatewayTask \a response.
 */
void DeleteWirelessGatewayTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessGatewayTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskResponsePrivate
 * \brief The DeleteWirelessGatewayTaskResponsePrivate class provides private implementation for DeleteWirelessGatewayTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskResponsePrivate object with public implementation \a q.
 */
DeleteWirelessGatewayTaskResponsePrivate::DeleteWirelessGatewayTaskResponsePrivate(
    DeleteWirelessGatewayTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessGatewayTask response element from \a xml.
 */
void DeleteWirelessGatewayTaskResponsePrivate::parseDeleteWirelessGatewayTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessGatewayTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
