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

#include "getresourceloglevelresponse.h"
#include "getresourceloglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetResourceLogLevelResponse
 * \brief The GetResourceLogLevelResponse class provides an interace for IoTWireless GetResourceLogLevel responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getResourceLogLevel
 */

/*!
 * Constructs a GetResourceLogLevelResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceLogLevelResponse::GetResourceLogLevelResponse(
        const GetResourceLogLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetResourceLogLevelResponsePrivate(this), parent)
{
    setRequest(new GetResourceLogLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceLogLevelRequest * GetResourceLogLevelResponse::request() const
{
    Q_D(const GetResourceLogLevelResponse);
    return static_cast<const GetResourceLogLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetResourceLogLevel \a response.
 */
void GetResourceLogLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceLogLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetResourceLogLevelResponsePrivate
 * \brief The GetResourceLogLevelResponsePrivate class provides private implementation for GetResourceLogLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetResourceLogLevelResponsePrivate object with public implementation \a q.
 */
GetResourceLogLevelResponsePrivate::GetResourceLogLevelResponsePrivate(
    GetResourceLogLevelResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetResourceLogLevel response element from \a xml.
 */
void GetResourceLogLevelResponsePrivate::parseGetResourceLogLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceLogLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
