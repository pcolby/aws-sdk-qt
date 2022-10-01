// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(GameLiftResponse);
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
