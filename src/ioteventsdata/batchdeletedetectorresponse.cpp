// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletedetectorresponse.h"
#include "batchdeletedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchDeleteDetectorResponse
 * \brief The BatchDeleteDetectorResponse class provides an interace for IoTEventsData BatchDeleteDetector responses.
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
 * \sa IoTEventsDataClient::batchDeleteDetector
 */

/*!
 * Constructs a BatchDeleteDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteDetectorResponse::BatchDeleteDetectorResponse(
        const BatchDeleteDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchDeleteDetectorResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteDetectorRequest * BatchDeleteDetectorResponse::request() const
{
    Q_D(const BatchDeleteDetectorResponse);
    return static_cast<const BatchDeleteDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchDeleteDetector \a response.
 */
void BatchDeleteDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchDeleteDetectorResponsePrivate
 * \brief The BatchDeleteDetectorResponsePrivate class provides private implementation for BatchDeleteDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchDeleteDetectorResponsePrivate object with public implementation \a q.
 */
BatchDeleteDetectorResponsePrivate::BatchDeleteDetectorResponsePrivate(
    BatchDeleteDetectorResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchDeleteDetector response element from \a xml.
 */
void BatchDeleteDetectorResponsePrivate::parseBatchDeleteDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
