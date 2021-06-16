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

#include "putloggingoptionsresponse.h"
#include "putloggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsResponse
 * \brief The PutLoggingOptionsResponse class provides an interace for IoTEvents PutLoggingOptions responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::putLoggingOptions
 */

/*!
 * Constructs a PutLoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutLoggingOptionsResponse::PutLoggingOptionsResponse(
        const PutLoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new PutLoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new PutLoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLoggingOptionsRequest * PutLoggingOptionsResponse::request() const
{
    Q_D(const PutLoggingOptionsResponse);
    return static_cast<const PutLoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents PutLoggingOptions \a response.
 */
void PutLoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsResponsePrivate
 * \brief The PutLoggingOptionsResponsePrivate class provides private implementation for PutLoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a PutLoggingOptionsResponsePrivate object with public implementation \a q.
 */
PutLoggingOptionsResponsePrivate::PutLoggingOptionsResponsePrivate(
    PutLoggingOptionsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents PutLoggingOptions response element from \a xml.
 */
void PutLoggingOptionsResponsePrivate::parsePutLoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
