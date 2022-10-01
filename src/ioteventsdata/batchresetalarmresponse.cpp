// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchresetalarmresponse.h"
#include "batchresetalarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchResetAlarmResponse
 * \brief The BatchResetAlarmResponse class provides an interace for IoTEventsData BatchResetAlarm responses.
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
 * \sa IoTEventsDataClient::batchResetAlarm
 */

/*!
 * Constructs a BatchResetAlarmResponse object for \a reply to \a request, with parent \a parent.
 */
BatchResetAlarmResponse::BatchResetAlarmResponse(
        const BatchResetAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchResetAlarmResponsePrivate(this), parent)
{
    setRequest(new BatchResetAlarmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchResetAlarmRequest * BatchResetAlarmResponse::request() const
{
    Q_D(const BatchResetAlarmResponse);
    return static_cast<const BatchResetAlarmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchResetAlarm \a response.
 */
void BatchResetAlarmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchResetAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchResetAlarmResponsePrivate
 * \brief The BatchResetAlarmResponsePrivate class provides private implementation for BatchResetAlarmResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchResetAlarmResponsePrivate object with public implementation \a q.
 */
BatchResetAlarmResponsePrivate::BatchResetAlarmResponsePrivate(
    BatchResetAlarmResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchResetAlarm response element from \a xml.
 */
void BatchResetAlarmResponsePrivate::parseBatchResetAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchResetAlarmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
