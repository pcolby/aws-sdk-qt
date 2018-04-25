/*
    Copyright 2013-2018 Paul Colby

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

#include "gameliftresponse.h"
#include "gameliftresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::GameLiftResponse
 * \brief The GameLiftResponse class provides an interface for GameLift responses.
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a GameLiftResponse object with parent \a parent.
 */
GameLiftResponse::GameLiftResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GameLiftResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GameLiftResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GameLiftResponsePrivate.
 */
GameLiftResponse::GameLiftResponse(GameLiftResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GameLiftResponse::parseFailure(QIODevice &response)
{
    Q_D(GameLiftResponse);
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
 * \class QtAws::GameLift::GameLiftResponsePrivate
 * \brief The GameLiftResponsePrivate class provides private implementation for GameLiftResponse.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a GameLiftResponsePrivate object with public implementation \a q.
 */
GameLiftResponsePrivate::GameLiftResponsePrivate(
    GameLiftResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GameLift
} // namespace QtAws
