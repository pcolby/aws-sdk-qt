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

#include "rumresponse.h"
#include "rumresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::RumResponse
 * \brief The RumResponse class provides an interface for Rum responses.
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a RumResponse object with parent \a parent.
 */
RumResponse::RumResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RumResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RumResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RumResponsePrivate.
 */
RumResponse::RumResponse(RumResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RumResponse::parseFailure(QIODevice &response)
{
    //Q_D(RumResponse);
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
 * \class QtAws::Rum::RumResponsePrivate
 * \brief The RumResponsePrivate class provides private implementation for RumResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a RumResponsePrivate object with public implementation \a q.
 */
RumResponsePrivate::RumResponsePrivate(
    RumResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Rum
} // namespace QtAws
