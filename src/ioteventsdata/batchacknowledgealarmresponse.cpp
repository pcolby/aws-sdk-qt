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

#include "batchacknowledgealarmresponse.h"
#include "batchacknowledgealarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchAcknowledgeAlarmResponse
 * \brief The BatchAcknowledgeAlarmResponse class provides an interace for IoTEventsData BatchAcknowledgeAlarm responses.
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
 * \sa IoTEventsDataClient::batchAcknowledgeAlarm
 */

/*!
 * Constructs a BatchAcknowledgeAlarmResponse object for \a reply to \a request, with parent \a parent.
 */
BatchAcknowledgeAlarmResponse::BatchAcknowledgeAlarmResponse(
        const BatchAcknowledgeAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchAcknowledgeAlarmResponsePrivate(this), parent)
{
    setRequest(new BatchAcknowledgeAlarmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchAcknowledgeAlarmRequest * BatchAcknowledgeAlarmResponse::request() const
{
    Q_D(const BatchAcknowledgeAlarmResponse);
    return static_cast<const BatchAcknowledgeAlarmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchAcknowledgeAlarm \a response.
 */
void BatchAcknowledgeAlarmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchAcknowledgeAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchAcknowledgeAlarmResponsePrivate
 * \brief The BatchAcknowledgeAlarmResponsePrivate class provides private implementation for BatchAcknowledgeAlarmResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchAcknowledgeAlarmResponsePrivate object with public implementation \a q.
 */
BatchAcknowledgeAlarmResponsePrivate::BatchAcknowledgeAlarmResponsePrivate(
    BatchAcknowledgeAlarmResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchAcknowledgeAlarm response element from \a xml.
 */
void BatchAcknowledgeAlarmResponsePrivate::parseBatchAcknowledgeAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchAcknowledgeAlarmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
