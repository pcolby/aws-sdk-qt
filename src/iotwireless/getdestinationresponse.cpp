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

#include "getdestinationresponse.h"
#include "getdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetDestinationResponse
 * \brief The GetDestinationResponse class provides an interace for IoTWireless GetDestination responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getDestination
 */

/*!
 * Constructs a GetDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDestinationResponse::GetDestinationResponse(
        const GetDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetDestinationResponsePrivate(this), parent)
{
    setRequest(new GetDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDestinationRequest * GetDestinationResponse::request() const
{
    Q_D(const GetDestinationResponse);
    return static_cast<const GetDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetDestination \a response.
 */
void GetDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetDestinationResponsePrivate
 * \brief The GetDestinationResponsePrivate class provides private implementation for GetDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetDestinationResponsePrivate object with public implementation \a q.
 */
GetDestinationResponsePrivate::GetDestinationResponsePrivate(
    GetDestinationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetDestination response element from \a xml.
 */
void GetDestinationResponsePrivate::parseGetDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
