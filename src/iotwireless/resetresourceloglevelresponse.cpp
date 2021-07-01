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

#include "resetresourceloglevelresponse.h"
#include "resetresourceloglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ResetResourceLogLevelResponse
 * \brief The ResetResourceLogLevelResponse class provides an interace for IoTWireless ResetResourceLogLevel responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::resetResourceLogLevel
 */

/*!
 * Constructs a ResetResourceLogLevelResponse object for \a reply to \a request, with parent \a parent.
 */
ResetResourceLogLevelResponse::ResetResourceLogLevelResponse(
        const ResetResourceLogLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ResetResourceLogLevelResponsePrivate(this), parent)
{
    setRequest(new ResetResourceLogLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetResourceLogLevelRequest * ResetResourceLogLevelResponse::request() const
{
    Q_D(const ResetResourceLogLevelResponse);
    return static_cast<const ResetResourceLogLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ResetResourceLogLevel \a response.
 */
void ResetResourceLogLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetResourceLogLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ResetResourceLogLevelResponsePrivate
 * \brief The ResetResourceLogLevelResponsePrivate class provides private implementation for ResetResourceLogLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ResetResourceLogLevelResponsePrivate object with public implementation \a q.
 */
ResetResourceLogLevelResponsePrivate::ResetResourceLogLevelResponsePrivate(
    ResetResourceLogLevelResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ResetResourceLogLevel response element from \a xml.
 */
void ResetResourceLogLevelResponsePrivate::parseResetResourceLogLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetResourceLogLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
