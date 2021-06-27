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

#include "getloglevelsbyresourcetypesresponse.h"
#include "getloglevelsbyresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetLogLevelsByResourceTypesResponse
 * \brief The GetLogLevelsByResourceTypesResponse class provides an interace for IoTWireless GetLogLevelsByResourceTypes responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getLogLevelsByResourceTypes
 */

/*!
 * Constructs a GetLogLevelsByResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetLogLevelsByResourceTypesResponse::GetLogLevelsByResourceTypesResponse(
        const GetLogLevelsByResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetLogLevelsByResourceTypesResponsePrivate(this), parent)
{
    setRequest(new GetLogLevelsByResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLogLevelsByResourceTypesRequest * GetLogLevelsByResourceTypesResponse::request() const
{
    return static_cast<const GetLogLevelsByResourceTypesRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetLogLevelsByResourceTypes \a response.
 */
void GetLogLevelsByResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLogLevelsByResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetLogLevelsByResourceTypesResponsePrivate
 * \brief The GetLogLevelsByResourceTypesResponsePrivate class provides private implementation for GetLogLevelsByResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetLogLevelsByResourceTypesResponsePrivate object with public implementation \a q.
 */
GetLogLevelsByResourceTypesResponsePrivate::GetLogLevelsByResourceTypesResponsePrivate(
    GetLogLevelsByResourceTypesResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetLogLevelsByResourceTypes response element from \a xml.
 */
void GetLogLevelsByResourceTypesResponsePrivate::parseGetLogLevelsByResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLogLevelsByResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
