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

#include "batchenablealarmresponse.h"
#include "batchenablealarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchEnableAlarmResponse
 * \brief The BatchEnableAlarmResponse class provides an interace for IoTEventsData BatchEnableAlarm responses.
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
 * \sa IoTEventsDataClient::batchEnableAlarm
 */

/*!
 * Constructs a BatchEnableAlarmResponse object for \a reply to \a request, with parent \a parent.
 */
BatchEnableAlarmResponse::BatchEnableAlarmResponse(
        const BatchEnableAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchEnableAlarmResponsePrivate(this), parent)
{
    setRequest(new BatchEnableAlarmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchEnableAlarmRequest * BatchEnableAlarmResponse::request() const
{
    Q_D(const BatchEnableAlarmResponse);
    return static_cast<const BatchEnableAlarmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchEnableAlarm \a response.
 */
void BatchEnableAlarmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchEnableAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchEnableAlarmResponsePrivate
 * \brief The BatchEnableAlarmResponsePrivate class provides private implementation for BatchEnableAlarmResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchEnableAlarmResponsePrivate object with public implementation \a q.
 */
BatchEnableAlarmResponsePrivate::BatchEnableAlarmResponsePrivate(
    BatchEnableAlarmResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchEnableAlarm response element from \a xml.
 */
void BatchEnableAlarmResponsePrivate::parseBatchEnableAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchEnableAlarmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
