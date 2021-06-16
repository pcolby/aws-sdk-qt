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

#include "describedetectorresponse.h"
#include "describedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::DescribeDetectorResponse
 * \brief The DescribeDetectorResponse class provides an interace for IoTEventsData DescribeDetector responses.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. AWS IoT Events Data API commands enable you to send inputs to detectors, list detectors, and view or
 *  update a detector's
 *
 * \sa IoTEventsDataClient::describeDetector
 */

/*!
 * Constructs a DescribeDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDetectorResponse::DescribeDetectorResponse(
        const DescribeDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new DescribeDetectorResponsePrivate(this), parent)
{
    setRequest(new DescribeDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDetectorRequest * DescribeDetectorResponse::request() const
{
    Q_D(const DescribeDetectorResponse);
    return static_cast<const DescribeDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData DescribeDetector \a response.
 */
void DescribeDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::DescribeDetectorResponsePrivate
 * \brief The DescribeDetectorResponsePrivate class provides private implementation for DescribeDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a DescribeDetectorResponsePrivate object with public implementation \a q.
 */
DescribeDetectorResponsePrivate::DescribeDetectorResponsePrivate(
    DescribeDetectorResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData DescribeDetector response element from \a xml.
 */
void DescribeDetectorResponsePrivate::parseDescribeDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
