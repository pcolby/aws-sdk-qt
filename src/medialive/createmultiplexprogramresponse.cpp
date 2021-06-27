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

#include "createmultiplexprogramresponse.h"
#include "createmultiplexprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateMultiplexProgramResponse
 * \brief The CreateMultiplexProgramResponse class provides an interace for MediaLive CreateMultiplexProgram responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createMultiplexProgram
 */

/*!
 * Constructs a CreateMultiplexProgramResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMultiplexProgramResponse::CreateMultiplexProgramResponse(
        const CreateMultiplexProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateMultiplexProgramResponsePrivate(this), parent)
{
    setRequest(new CreateMultiplexProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMultiplexProgramRequest * CreateMultiplexProgramResponse::request() const
{
    return static_cast<const CreateMultiplexProgramRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive CreateMultiplexProgram \a response.
 */
void CreateMultiplexProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMultiplexProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreateMultiplexProgramResponsePrivate
 * \brief The CreateMultiplexProgramResponsePrivate class provides private implementation for CreateMultiplexProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateMultiplexProgramResponsePrivate object with public implementation \a q.
 */
CreateMultiplexProgramResponsePrivate::CreateMultiplexProgramResponsePrivate(
    CreateMultiplexProgramResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreateMultiplexProgram response element from \a xml.
 */
void CreateMultiplexProgramResponsePrivate::parseCreateMultiplexProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultiplexProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
