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

#include "getstreamingsessionresponse.h"
#include "getstreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionResponse
 * \brief The GetStreamingSessionResponse class provides an interace for NimbleStudio GetStreamingSession responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStreamingSession
 */

/*!
 * Constructs a GetStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingSessionResponse::GetStreamingSessionResponse(
        const GetStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new GetStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingSessionRequest * GetStreamingSessionResponse::request() const
{
    return static_cast<const GetStreamingSessionRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetStreamingSession \a response.
 */
void GetStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionResponsePrivate
 * \brief The GetStreamingSessionResponsePrivate class provides private implementation for GetStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStreamingSessionResponsePrivate object with public implementation \a q.
 */
GetStreamingSessionResponsePrivate::GetStreamingSessionResponsePrivate(
    GetStreamingSessionResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetStreamingSession response element from \a xml.
 */
void GetStreamingSessionResponsePrivate::parseGetStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
