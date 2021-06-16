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
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. AWS IoT Events Data API commands enable you to send inputs to detectors, list detectors, and view or
 *  update a detector's
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
