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

#include "getstreamingsessionstreamresponse.h"
#include "getstreamingsessionstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionStreamResponse
 * \brief The GetStreamingSessionStreamResponse class provides an interace for NimbleStudio GetStreamingSessionStream responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStreamingSessionStream
 */

/*!
 * Constructs a GetStreamingSessionStreamResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingSessionStreamResponse::GetStreamingSessionStreamResponse(
        const GetStreamingSessionStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetStreamingSessionStreamResponsePrivate(this), parent)
{
    setRequest(new GetStreamingSessionStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingSessionStreamRequest * GetStreamingSessionStreamResponse::request() const
{
    return static_cast<const GetStreamingSessionStreamRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetStreamingSessionStream \a response.
 */
void GetStreamingSessionStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingSessionStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionStreamResponsePrivate
 * \brief The GetStreamingSessionStreamResponsePrivate class provides private implementation for GetStreamingSessionStreamResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStreamingSessionStreamResponsePrivate object with public implementation \a q.
 */
GetStreamingSessionStreamResponsePrivate::GetStreamingSessionStreamResponsePrivate(
    GetStreamingSessionStreamResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetStreamingSessionStream response element from \a xml.
 */
void GetStreamingSessionStreamResponsePrivate::parseGetStreamingSessionStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingSessionStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
