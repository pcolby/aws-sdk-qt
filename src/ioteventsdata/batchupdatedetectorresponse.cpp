// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdatedetectorresponse.h"
#include "batchupdatedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchUpdateDetectorResponse
 * \brief The BatchUpdateDetectorResponse class provides an interace for IoTEventsData BatchUpdateDetector responses.
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
 * \sa IoTEventsDataClient::batchUpdateDetector
 */

/*!
 * Constructs a BatchUpdateDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpdateDetectorResponse::BatchUpdateDetectorResponse(
        const BatchUpdateDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchUpdateDetectorResponsePrivate(this), parent)
{
    setRequest(new BatchUpdateDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpdateDetectorRequest * BatchUpdateDetectorResponse::request() const
{
    Q_D(const BatchUpdateDetectorResponse);
    return static_cast<const BatchUpdateDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchUpdateDetector \a response.
 */
void BatchUpdateDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpdateDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchUpdateDetectorResponsePrivate
 * \brief The BatchUpdateDetectorResponsePrivate class provides private implementation for BatchUpdateDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchUpdateDetectorResponsePrivate object with public implementation \a q.
 */
BatchUpdateDetectorResponsePrivate::BatchUpdateDetectorResponsePrivate(
    BatchUpdateDetectorResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchUpdateDetector response element from \a xml.
 */
void BatchUpdateDetectorResponsePrivate::parseBatchUpdateDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpdateDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
