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

#include "listalarmmodelversionsresponse.h"
#include "listalarmmodelversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListAlarmModelVersionsResponse
 * \brief The ListAlarmModelVersionsResponse class provides an interace for IoTEvents ListAlarmModelVersions responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listAlarmModelVersions
 */

/*!
 * Constructs a ListAlarmModelVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlarmModelVersionsResponse::ListAlarmModelVersionsResponse(
        const ListAlarmModelVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListAlarmModelVersionsResponsePrivate(this), parent)
{
    setRequest(new ListAlarmModelVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlarmModelVersionsRequest * ListAlarmModelVersionsResponse::request() const
{
    return static_cast<const ListAlarmModelVersionsRequest *>(IoTEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListAlarmModelVersions \a response.
 */
void ListAlarmModelVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlarmModelVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListAlarmModelVersionsResponsePrivate
 * \brief The ListAlarmModelVersionsResponsePrivate class provides private implementation for ListAlarmModelVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListAlarmModelVersionsResponsePrivate object with public implementation \a q.
 */
ListAlarmModelVersionsResponsePrivate::ListAlarmModelVersionsResponsePrivate(
    ListAlarmModelVersionsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListAlarmModelVersions response element from \a xml.
 */
void ListAlarmModelVersionsResponsePrivate::parseListAlarmModelVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlarmModelVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
