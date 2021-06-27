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

#include "batchstopresponse.h"
#include "batchstopresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchStopResponse
 * \brief The BatchStopResponse class provides an interace for MediaLive BatchStop responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchStop
 */

/*!
 * Constructs a BatchStopResponse object for \a reply to \a request, with parent \a parent.
 */
BatchStopResponse::BatchStopResponse(
        const BatchStopRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new BatchStopResponsePrivate(this), parent)
{
    setRequest(new BatchStopRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchStopRequest * BatchStopResponse::request() const
{
    return static_cast<const BatchStopRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive BatchStop \a response.
 */
void BatchStopResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchStopResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::BatchStopResponsePrivate
 * \brief The BatchStopResponsePrivate class provides private implementation for BatchStopResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchStopResponsePrivate object with public implementation \a q.
 */
BatchStopResponsePrivate::BatchStopResponsePrivate(
    BatchStopResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive BatchStop response element from \a xml.
 */
void BatchStopResponsePrivate::parseBatchStopResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchStopResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
