// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const UpdateAlarmModelResponse);
    return static_cast<const UpdateAlarmModelRequest *>(d->request);
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
