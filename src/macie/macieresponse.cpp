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

#include "macieresponse.h"
#include "macieresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::MacieResponse
 * \brief The MacieResponse class provides an interface for Macie responses.
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a MacieResponse object with parent \a parent.
 */
MacieResponse::MacieResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MacieResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MacieResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MacieResponsePrivate.
 */
MacieResponse::MacieResponse(MacieResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MacieResponse::parseFailure(QIODevice &response)
{
    //Q_D(MacieResponse);
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
 * \class QtAws::Macie::MacieResponsePrivate
 * \brief The MacieResponsePrivate class provides private implementation for MacieResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a MacieResponsePrivate object with public implementation \a q.
 */
MacieResponsePrivate::MacieResponsePrivate(
    MacieResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Macie
} // namespace QtAws
