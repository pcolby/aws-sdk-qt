/*
    Copyright 2013-2019 Paul Colby

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

#include "robomakerresponse.h"
#include "robomakerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RoboMakerResponse
 * \brief The RoboMakerResponse class provides an interface for RoboMaker responses.
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RoboMakerResponse object with parent \a parent.
 */
RoboMakerResponse::RoboMakerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RoboMakerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RoboMakerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RoboMakerResponsePrivate.
 */
RoboMakerResponse::RoboMakerResponse(RoboMakerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RoboMakerResponse::parseFailure(QIODevice &response)
{
    //Q_D(RoboMakerResponse);
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
 * \class QtAws::RoboMaker::RoboMakerResponsePrivate
 * \brief The RoboMakerResponsePrivate class provides private implementation for RoboMakerResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RoboMakerResponsePrivate object with public implementation \a q.
 */
RoboMakerResponsePrivate::RoboMakerResponsePrivate(
    RoboMakerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RoboMaker
} // namespace QtAws
