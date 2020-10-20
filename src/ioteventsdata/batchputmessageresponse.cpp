/*
    Copyright 2013-2020 Paul Colby

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

#include "batchputmessageresponse.h"
#include "batchputmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchPutMessageResponse
 * \brief The BatchPutMessageResponse class provides an interace for IoTEventsData BatchPutMessage responses.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. AWS IoT Events Data API commands enable you to send inputs to detectors, list detectors, and view or
 *  update a detector's
 *
 * \sa IoTEventsDataClient::batchPutMessage
 */

/*!
 * Constructs a BatchPutMessageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutMessageResponse::BatchPutMessageResponse(
        const BatchPutMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchPutMessageResponsePrivate(this), parent)
{
    setRequest(new BatchPutMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutMessageRequest * BatchPutMessageResponse::request() const
{
    Q_D(const BatchPutMessageResponse);
    return static_cast<const BatchPutMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchPutMessage \a response.
 */
void BatchPutMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchPutMessageResponsePrivate
 * \brief The BatchPutMessageResponsePrivate class provides private implementation for BatchPutMessageResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchPutMessageResponsePrivate object with public implementation \a q.
 */
BatchPutMessageResponsePrivate::BatchPutMessageResponsePrivate(
    BatchPutMessageResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchPutMessage response element from \a xml.
 */
void BatchPutMessageResponsePrivate::parseBatchPutMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
