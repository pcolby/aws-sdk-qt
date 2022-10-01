// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchsnoozealarmresponse.h"
#include "batchsnoozealarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchSnoozeAlarmResponse
 * \brief The BatchSnoozeAlarmResponse class provides an interace for IoTEventsData BatchSnoozeAlarm responses.
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
 * \sa IoTEventsDataClient::batchSnoozeAlarm
 */

/*!
 * Constructs a BatchSnoozeAlarmResponse object for \a reply to \a request, with parent \a parent.
 */
BatchSnoozeAlarmResponse::BatchSnoozeAlarmResponse(
        const BatchSnoozeAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchSnoozeAlarmResponsePrivate(this), parent)
{
    setRequest(new BatchSnoozeAlarmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchSnoozeAlarmRequest * BatchSnoozeAlarmResponse::request() const
{
    Q_D(const BatchSnoozeAlarmResponse);
    return static_cast<const BatchSnoozeAlarmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchSnoozeAlarm \a response.
 */
void BatchSnoozeAlarmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchSnoozeAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchSnoozeAlarmResponsePrivate
 * \brief The BatchSnoozeAlarmResponsePrivate class provides private implementation for BatchSnoozeAlarmResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchSnoozeAlarmResponsePrivate object with public implementation \a q.
 */
BatchSnoozeAlarmResponsePrivate::BatchSnoozeAlarmResponsePrivate(
    BatchSnoozeAlarmResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchSnoozeAlarm response element from \a xml.
 */
void BatchSnoozeAlarmResponsePrivate::parseBatchSnoozeAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchSnoozeAlarmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
