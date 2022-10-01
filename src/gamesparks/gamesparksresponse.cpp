// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
