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

#include "controltowerresponse.h"
#include "controltowerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ControlTower {

/*!
 * \class QtAws::ControlTower::ControlTowerResponse
 * \brief The ControlTowerResponse class provides an interface for ControlTower responses.
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a ControlTowerResponse object with parent \a parent.
 */
ControlTowerResponse::ControlTowerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ControlTowerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ControlTowerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ControlTowerResponsePrivate.
 */
ControlTowerResponse::ControlTowerResponse(ControlTowerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ControlTowerResponse::parseFailure(QIODevice &response)
{
    //Q_D(ControlTowerResponse);
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
 * \class QtAws::ControlTower::ControlTowerResponsePrivate
 * \brief The ControlTowerResponsePrivate class provides private implementation for ControlTowerResponse.
 * \internal
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a ControlTowerResponsePrivate object with public implementation \a q.
 */
ControlTowerResponsePrivate::ControlTowerResponsePrivate(
    ControlTowerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ControlTower
} // namespace QtAws
