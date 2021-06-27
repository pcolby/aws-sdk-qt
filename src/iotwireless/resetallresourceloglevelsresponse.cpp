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

#include "resetallresourceloglevelsresponse.h"
#include "resetallresourceloglevelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ResetAllResourceLogLevelsResponse
 * \brief The ResetAllResourceLogLevelsResponse class provides an interace for IoTWireless ResetAllResourceLogLevels responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::resetAllResourceLogLevels
 */

/*!
 * Constructs a ResetAllResourceLogLevelsResponse object for \a reply to \a request, with parent \a parent.
 */
ResetAllResourceLogLevelsResponse::ResetAllResourceLogLevelsResponse(
        const ResetAllResourceLogLevelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ResetAllResourceLogLevelsResponsePrivate(this), parent)
{
    setRequest(new ResetAllResourceLogLevelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetAllResourceLogLevelsRequest * ResetAllResourceLogLevelsResponse::request() const
{
    return static_cast<const ResetAllResourceLogLevelsRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless ResetAllResourceLogLevels \a response.
 */
void ResetAllResourceLogLevelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetAllResourceLogLevelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ResetAllResourceLogLevelsResponsePrivate
 * \brief The ResetAllResourceLogLevelsResponsePrivate class provides private implementation for ResetAllResourceLogLevelsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ResetAllResourceLogLevelsResponsePrivate object with public implementation \a q.
 */
ResetAllResourceLogLevelsResponsePrivate::ResetAllResourceLogLevelsResponsePrivate(
    ResetAllResourceLogLevelsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ResetAllResourceLogLevels response element from \a xml.
 */
void ResetAllResourceLogLevelsResponsePrivate::parseResetAllResourceLogLevelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetAllResourceLogLevelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
