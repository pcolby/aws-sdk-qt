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

#include "deletestreamingsessionresponse.h"
#include "deletestreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingSessionResponse
 * \brief The DeleteStreamingSessionResponse class provides an interace for NimbleStudio DeleteStreamingSession responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStreamingSession
 */

/*!
 * Constructs a DeleteStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamingSessionResponse::DeleteStreamingSessionResponse(
        const DeleteStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new DeleteStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamingSessionRequest * DeleteStreamingSessionResponse::request() const
{
    Q_D(const DeleteStreamingSessionResponse);
    return static_cast<const DeleteStreamingSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio DeleteStreamingSession \a response.
 */
void DeleteStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingSessionResponsePrivate
 * \brief The DeleteStreamingSessionResponsePrivate class provides private implementation for DeleteStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStreamingSessionResponsePrivate object with public implementation \a q.
 */
DeleteStreamingSessionResponsePrivate::DeleteStreamingSessionResponsePrivate(
    DeleteStreamingSessionResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio DeleteStreamingSession response element from \a xml.
 */
void DeleteStreamingSessionResponsePrivate::parseDeleteStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
