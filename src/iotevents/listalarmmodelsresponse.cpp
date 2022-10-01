// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListAlarmModelsResponse);
    return static_cast<const ListAlarmModelsRequest *>(d->request);
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
