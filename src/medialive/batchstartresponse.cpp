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

#include "batchstartresponse.h"
#include "batchstartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchStartResponse
 * \brief The BatchStartResponse class provides an interace for MediaLive BatchStart responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchStart
 */

/*!
 * Constructs a BatchStartResponse object for \a reply to \a request, with parent \a parent.
 */
BatchStartResponse::BatchStartResponse(
        const BatchStartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new BatchStartResponsePrivate(this), parent)
{
    setRequest(new BatchStartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchStartRequest * BatchStartResponse::request() const
{
    Q_D(const BatchStartResponse);
    return static_cast<const BatchStartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive BatchStart \a response.
 */
void BatchStartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchStartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::BatchStartResponsePrivate
 * \brief The BatchStartResponsePrivate class provides private implementation for BatchStartResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchStartResponsePrivate object with public implementation \a q.
 */
BatchStartResponsePrivate::BatchStartResponsePrivate(
    BatchStartResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive BatchStart response element from \a xml.
 */
void BatchStartResponsePrivate::parseBatchStartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchStartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
