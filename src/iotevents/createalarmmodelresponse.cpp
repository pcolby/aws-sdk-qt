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

#include "createalarmmodelresponse.h"
#include "createalarmmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::CreateAlarmModelResponse
 * \brief The CreateAlarmModelResponse class provides an interace for IoTEvents CreateAlarmModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::createAlarmModel
 */

/*!
 * Constructs a CreateAlarmModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAlarmModelResponse::CreateAlarmModelResponse(
        const CreateAlarmModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new CreateAlarmModelResponsePrivate(this), parent)
{
    setRequest(new CreateAlarmModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAlarmModelRequest * CreateAlarmModelResponse::request() const
{
    Q_D(const CreateAlarmModelResponse);
    return static_cast<const CreateAlarmModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents CreateAlarmModel \a response.
 */
void CreateAlarmModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAlarmModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::CreateAlarmModelResponsePrivate
 * \brief The CreateAlarmModelResponsePrivate class provides private implementation for CreateAlarmModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a CreateAlarmModelResponsePrivate object with public implementation \a q.
 */
CreateAlarmModelResponsePrivate::CreateAlarmModelResponsePrivate(
    CreateAlarmModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents CreateAlarmModel response element from \a xml.
 */
void CreateAlarmModelResponsePrivate::parseCreateAlarmModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAlarmModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
