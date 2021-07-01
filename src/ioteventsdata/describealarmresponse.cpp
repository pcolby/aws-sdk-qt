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

#include "describealarmresponse.h"
#include "describealarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::DescribeAlarmResponse
 * \brief The DescribeAlarmResponse class provides an interace for IoTEventsData DescribeAlarm responses.
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
 * \sa IoTEventsDataClient::describeAlarm
 */

/*!
 * Constructs a DescribeAlarmResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlarmResponse::DescribeAlarmResponse(
        const DescribeAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new DescribeAlarmResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlarmRequest * DescribeAlarmResponse::request() const
{
    Q_D(const DescribeAlarmResponse);
    return static_cast<const DescribeAlarmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData DescribeAlarm \a response.
 */
void DescribeAlarmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::DescribeAlarmResponsePrivate
 * \brief The DescribeAlarmResponsePrivate class provides private implementation for DescribeAlarmResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a DescribeAlarmResponsePrivate object with public implementation \a q.
 */
DescribeAlarmResponsePrivate::DescribeAlarmResponsePrivate(
    DescribeAlarmResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData DescribeAlarm response element from \a xml.
 */
void DescribeAlarmResponsePrivate::parseDescribeAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
