// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
