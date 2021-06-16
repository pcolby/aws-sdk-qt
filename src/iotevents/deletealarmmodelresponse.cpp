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

#include "deletealarmmodelresponse.h"
#include "deletealarmmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteAlarmModelResponse
 * \brief The DeleteAlarmModelResponse class provides an interace for IoTEvents DeleteAlarmModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::deleteAlarmModel
 */

/*!
 * Constructs a DeleteAlarmModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlarmModelResponse::DeleteAlarmModelResponse(
        const DeleteAlarmModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DeleteAlarmModelResponsePrivate(this), parent)
{
    setRequest(new DeleteAlarmModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlarmModelRequest * DeleteAlarmModelResponse::request() const
{
    Q_D(const DeleteAlarmModelResponse);
    return static_cast<const DeleteAlarmModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents DeleteAlarmModel \a response.
 */
void DeleteAlarmModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlarmModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DeleteAlarmModelResponsePrivate
 * \brief The DeleteAlarmModelResponsePrivate class provides private implementation for DeleteAlarmModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteAlarmModelResponsePrivate object with public implementation \a q.
 */
DeleteAlarmModelResponsePrivate::DeleteAlarmModelResponsePrivate(
    DeleteAlarmModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DeleteAlarmModel response element from \a xml.
 */
void DeleteAlarmModelResponsePrivate::parseDeleteAlarmModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlarmModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
