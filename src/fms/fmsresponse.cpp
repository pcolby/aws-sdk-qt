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

#include "fmsresponse.h"
#include "fmsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::FmsResponse
 * \brief The FmsResponse class provides an interface for FMS responses.
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a FmsResponse object with parent \a parent.
 */
FmsResponse::FmsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FmsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FmsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FmsResponsePrivate.
 */
FmsResponse::FmsResponse(FmsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FmsResponse::parseFailure(QIODevice &response)
{
    Q_D(FmsResponse);
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
 * \class QtAws::FMS::FmsResponsePrivate
 * \brief The FmsResponsePrivate class provides private implementation for FmsResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a FmsResponsePrivate object with public implementation \a q.
 */
FmsResponsePrivate::FmsResponsePrivate(
    FmsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace FMS
} // namespace QtAws
