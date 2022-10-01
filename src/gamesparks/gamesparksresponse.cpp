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

#include "gamesparksresponse.h"
#include "gamesparksresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GameSparksResponse
 * \brief The GameSparksResponse class provides an interface for GameSparks responses.
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GameSparksResponse object with parent \a parent.
 */
GameSparksResponse::GameSparksResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GameSparksResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GameSparksResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GameSparksResponsePrivate.
 */
GameSparksResponse::GameSparksResponse(GameSparksResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GameSparksResponse::parseFailure(QIODevice &response)
{
    //Q_D(GameSparksResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::GameSparks::GameSparksResponsePrivate
 * \brief The GameSparksResponsePrivate class provides private implementation for GameSparksResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GameSparksResponsePrivate object with public implementation \a q.
 */
GameSparksResponsePrivate::GameSparksResponsePrivate(
    GameSparksResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GameSparks
} // namespace QtAws
