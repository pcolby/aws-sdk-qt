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

#include "listdetectorsresponse.h"
#include "listdetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::ListDetectorsResponse
 * \brief The ListDetectorsResponse class provides an interace for IoTEventsData ListDetectors responses.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. AWS IoT Events Data API commands enable you to send inputs to detectors, list detectors, and view or
 *  update a detector's
 *
 * \sa IoTEventsDataClient::listDetectors
 */

/*!
 * Constructs a ListDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDetectorsResponse::ListDetectorsResponse(
        const ListDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new ListDetectorsResponsePrivate(this), parent)
{
    setRequest(new ListDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDetectorsRequest * ListDetectorsResponse::request() const
{
    Q_D(const ListDetectorsResponse);
    return static_cast<const ListDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData ListDetectors \a response.
 */
void ListDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::ListDetectorsResponsePrivate
 * \brief The ListDetectorsResponsePrivate class provides private implementation for ListDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a ListDetectorsResponsePrivate object with public implementation \a q.
 */
ListDetectorsResponsePrivate::ListDetectorsResponsePrivate(
    ListDetectorsResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData ListDetectors response element from \a xml.
 */
void ListDetectorsResponsePrivate::parseListDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
