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

#include "putresourceloglevelresponse.h"
#include "putresourceloglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::PutResourceLogLevelResponse
 * \brief The PutResourceLogLevelResponse class provides an interace for IoTWireless PutResourceLogLevel responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::putResourceLogLevel
 */

/*!
 * Constructs a PutResourceLogLevelResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourceLogLevelResponse::PutResourceLogLevelResponse(
        const PutResourceLogLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new PutResourceLogLevelResponsePrivate(this), parent)
{
    setRequest(new PutResourceLogLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourceLogLevelRequest * PutResourceLogLevelResponse::request() const
{
    Q_D(const PutResourceLogLevelResponse);
    return static_cast<const PutResourceLogLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless PutResourceLogLevel \a response.
 */
void PutResourceLogLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourceLogLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::PutResourceLogLevelResponsePrivate
 * \brief The PutResourceLogLevelResponsePrivate class provides private implementation for PutResourceLogLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a PutResourceLogLevelResponsePrivate object with public implementation \a q.
 */
PutResourceLogLevelResponsePrivate::PutResourceLogLevelResponsePrivate(
    PutResourceLogLevelResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless PutResourceLogLevel response element from \a xml.
 */
void PutResourceLogLevelResponsePrivate::parsePutResourceLogLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourceLogLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
