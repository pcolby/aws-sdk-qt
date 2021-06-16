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

#include "updatemultiplexprogramresponse.h"
#include "updatemultiplexprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramResponse
 * \brief The UpdateMultiplexProgramResponse class provides an interace for MediaLive UpdateMultiplexProgram responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplexProgram
 */

/*!
 * Constructs a UpdateMultiplexProgramResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMultiplexProgramResponse::UpdateMultiplexProgramResponse(
        const UpdateMultiplexProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateMultiplexProgramResponsePrivate(this), parent)
{
    setRequest(new UpdateMultiplexProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMultiplexProgramRequest * UpdateMultiplexProgramResponse::request() const
{
    Q_D(const UpdateMultiplexProgramResponse);
    return static_cast<const UpdateMultiplexProgramRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateMultiplexProgram \a response.
 */
void UpdateMultiplexProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMultiplexProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramResponsePrivate
 * \brief The UpdateMultiplexProgramResponsePrivate class provides private implementation for UpdateMultiplexProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexProgramResponsePrivate object with public implementation \a q.
 */
UpdateMultiplexProgramResponsePrivate::UpdateMultiplexProgramResponsePrivate(
    UpdateMultiplexProgramResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateMultiplexProgram response element from \a xml.
 */
void UpdateMultiplexProgramResponsePrivate::parseUpdateMultiplexProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMultiplexProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
