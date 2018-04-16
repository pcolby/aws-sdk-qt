/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gameliftresponse.h"
#include "gameliftresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::GameLiftResponse
 *
 * \brief The GameLiftResponse class is the base class for all GameLift responses.
 *
 * \ingroup GameLift
 */

/*!
 * @brief  Constructs a new GameLiftResponse object.
 *
 * @param  parent   This object's parent.
 */
GameLiftResponse::GameLiftResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GameLiftResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GameLiftResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GameLiftResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
GameLiftResponse::GameLiftResponse(GameLiftResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
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
 * @internal
 *
 * @class  GameLiftResponsePrivate
 *
 * @brief  Private implementation for GameLiftResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GameLiftResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GameLiftResponse instance.
 */
GameLiftResponsePrivate::GameLiftResponsePrivate(
    GameLiftResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GameLift
} // namespace QtAws
