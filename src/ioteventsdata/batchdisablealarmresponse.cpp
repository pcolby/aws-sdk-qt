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

#include "batchdisablealarmresponse.h"
#include "batchdisablealarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchDisableAlarmResponse
 * \brief The BatchDisableAlarmResponse class provides an interace for IoTEventsData BatchDisableAlarm responses.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events Data API commands to send inputs to detectors, list detectors, and view or
 *  update a detector's
 * 
 *  status>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What is AWS IoT Events?</a> in
 *  the <i>AWS IoT Events Developer
 *
 * \sa IoTEventsDataClient::batchDisableAlarm
 */

/*!
 * Constructs a BatchDisableAlarmResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDisableAlarmResponse::BatchDisableAlarmResponse(
        const BatchDisableAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchDisableAlarmResponsePrivate(this), parent)
{
    setRequest(new BatchDisableAlarmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDisableAlarmRequest * BatchDisableAlarmResponse::request() const
{
    Q_D(const BatchDisableAlarmResponse);
    return static_cast<const BatchDisableAlarmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchDisableAlarm \a response.
 */
void BatchDisableAlarmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDisableAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchDisableAlarmResponsePrivate
 * \brief The BatchDisableAlarmResponsePrivate class provides private implementation for BatchDisableAlarmResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchDisableAlarmResponsePrivate object with public implementation \a q.
 */
BatchDisableAlarmResponsePrivate::BatchDisableAlarmResponsePrivate(
    BatchDisableAlarmResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchDisableAlarm response element from \a xml.
 */
void BatchDisableAlarmResponsePrivate::parseBatchDisableAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDisableAlarmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
