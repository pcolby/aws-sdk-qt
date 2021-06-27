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

#include "deletemultiplexprogramresponse.h"
#include "deletemultiplexprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteMultiplexProgramResponse
 * \brief The DeleteMultiplexProgramResponse class provides an interace for MediaLive DeleteMultiplexProgram responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteMultiplexProgram
 */

/*!
 * Constructs a DeleteMultiplexProgramResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMultiplexProgramResponse::DeleteMultiplexProgramResponse(
        const DeleteMultiplexProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteMultiplexProgramResponsePrivate(this), parent)
{
    setRequest(new DeleteMultiplexProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMultiplexProgramRequest * DeleteMultiplexProgramResponse::request() const
{
    return static_cast<const DeleteMultiplexProgramRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteMultiplexProgram \a response.
 */
void DeleteMultiplexProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMultiplexProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteMultiplexProgramResponsePrivate
 * \brief The DeleteMultiplexProgramResponsePrivate class provides private implementation for DeleteMultiplexProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteMultiplexProgramResponsePrivate object with public implementation \a q.
 */
DeleteMultiplexProgramResponsePrivate::DeleteMultiplexProgramResponsePrivate(
    DeleteMultiplexProgramResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteMultiplexProgram response element from \a xml.
 */
void DeleteMultiplexProgramResponsePrivate::parseDeleteMultiplexProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMultiplexProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
