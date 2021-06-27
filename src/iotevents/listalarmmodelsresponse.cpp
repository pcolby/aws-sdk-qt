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

#include "listalarmmodelsresponse.h"
#include "listalarmmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListAlarmModelsResponse
 * \brief The ListAlarmModelsResponse class provides an interace for IoTEvents ListAlarmModels responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listAlarmModels
 */

/*!
 * Constructs a ListAlarmModelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlarmModelsResponse::ListAlarmModelsResponse(
        const ListAlarmModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListAlarmModelsResponsePrivate(this), parent)
{
    setRequest(new ListAlarmModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlarmModelsRequest * ListAlarmModelsResponse::request() const
{
    return static_cast<const ListAlarmModelsRequest *>(IoTEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListAlarmModels \a response.
 */
void ListAlarmModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlarmModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListAlarmModelsResponsePrivate
 * \brief The ListAlarmModelsResponsePrivate class provides private implementation for ListAlarmModelsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListAlarmModelsResponsePrivate object with public implementation \a q.
 */
ListAlarmModelsResponsePrivate::ListAlarmModelsResponsePrivate(
    ListAlarmModelsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListAlarmModels response element from \a xml.
 */
void ListAlarmModelsResponsePrivate::parseListAlarmModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlarmModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
