// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListAlarmModelVersionsResponse);
    return static_cast<const ListAlarmModelVersionsRequest *>(d->request);
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
