// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalarmsresponse.h"
#include "listalarmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::ListAlarmsResponse
 * \brief The ListAlarmsResponse class provides an interace for IoTEventsData ListAlarms responses.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when such
 *  events occur. You can use IoT Events Data API commands to send inputs to detectors, list detectors, and view or update a
 *  detector's
 * 
 *  status>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What is IoT Events?</a> in the
 *  <i>IoT Events Developer
 *
 * \sa IoTEventsDataClient::listAlarms
 */

/*!
 * Constructs a ListAlarmsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlarmsResponse::ListAlarmsResponse(
        const ListAlarmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new ListAlarmsResponsePrivate(this), parent)
{
    setRequest(new ListAlarmsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlarmsRequest * ListAlarmsResponse::request() const
{
    Q_D(const ListAlarmsResponse);
    return static_cast<const ListAlarmsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData ListAlarms \a response.
 */
void ListAlarmsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlarmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::ListAlarmsResponsePrivate
 * \brief The ListAlarmsResponsePrivate class provides private implementation for ListAlarmsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a ListAlarmsResponsePrivate object with public implementation \a q.
 */
ListAlarmsResponsePrivate::ListAlarmsResponsePrivate(
    ListAlarmsResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData ListAlarms response element from \a xml.
 */
void ListAlarmsResponsePrivate::parseListAlarmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlarmsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
