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

#include "updatealarmmodelresponse.h"
#include "updatealarmmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::UpdateAlarmModelResponse
 * \brief The UpdateAlarmModelResponse class provides an interace for IoTEvents UpdateAlarmModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::updateAlarmModel
 */

/*!
 * Constructs a UpdateAlarmModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAlarmModelResponse::UpdateAlarmModelResponse(
        const UpdateAlarmModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new UpdateAlarmModelResponsePrivate(this), parent)
{
    setRequest(new UpdateAlarmModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAlarmModelRequest * UpdateAlarmModelResponse::request() const
{
    return static_cast<const UpdateAlarmModelRequest *>(IoTEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTEvents UpdateAlarmModel \a response.
 */
void UpdateAlarmModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAlarmModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::UpdateAlarmModelResponsePrivate
 * \brief The UpdateAlarmModelResponsePrivate class provides private implementation for UpdateAlarmModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a UpdateAlarmModelResponsePrivate object with public implementation \a q.
 */
UpdateAlarmModelResponsePrivate::UpdateAlarmModelResponsePrivate(
    UpdateAlarmModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents UpdateAlarmModel response element from \a xml.
 */
void UpdateAlarmModelResponsePrivate::parseUpdateAlarmModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAlarmModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
