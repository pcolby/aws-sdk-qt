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

#include "creategameresponse.h"
#include "creategameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateGameResponse
 * \brief The CreateGameResponse class provides an interace for GameSparks CreateGame responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createGame
 */

/*!
 * Constructs a CreateGameResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGameResponse::CreateGameResponse(
        const CreateGameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new CreateGameResponsePrivate(this), parent)
{
    setRequest(new CreateGameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGameRequest * CreateGameResponse::request() const
{
    Q_D(const CreateGameResponse);
    return static_cast<const CreateGameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks CreateGame \a response.
 */
void CreateGameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::CreateGameResponsePrivate
 * \brief The CreateGameResponsePrivate class provides private implementation for CreateGameResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateGameResponsePrivate object with public implementation \a q.
 */
CreateGameResponsePrivate::CreateGameResponsePrivate(
    CreateGameResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks CreateGame response element from \a xml.
 */
void CreateGameResponsePrivate::parseCreateGameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
