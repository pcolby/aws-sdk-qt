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

#include "batchupdatescheduleresponse.h"
#include "batchupdatescheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchUpdateScheduleResponse
 * \brief The BatchUpdateScheduleResponse class provides an interace for MediaLive BatchUpdateSchedule responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchUpdateSchedule
 */

/*!
 * Constructs a BatchUpdateScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpdateScheduleResponse::BatchUpdateScheduleResponse(
        const BatchUpdateScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new BatchUpdateScheduleResponsePrivate(this), parent)
{
    setRequest(new BatchUpdateScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpdateScheduleRequest * BatchUpdateScheduleResponse::request() const
{
    Q_D(const BatchUpdateScheduleResponse);
    return static_cast<const BatchUpdateScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive BatchUpdateSchedule \a response.
 */
void BatchUpdateScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpdateScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::BatchUpdateScheduleResponsePrivate
 * \brief The BatchUpdateScheduleResponsePrivate class provides private implementation for BatchUpdateScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchUpdateScheduleResponsePrivate object with public implementation \a q.
 */
BatchUpdateScheduleResponsePrivate::BatchUpdateScheduleResponsePrivate(
    BatchUpdateScheduleResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive BatchUpdateSchedule response element from \a xml.
 */
void BatchUpdateScheduleResponsePrivate::parseBatchUpdateScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpdateScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
