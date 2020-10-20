/*
    Copyright 2013-2020 Paul Colby

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

#include "ramresponse.h"
#include "ramresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::RamResponse
 * \brief The RamResponse class provides an interface for RAM responses.
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a RamResponse object with parent \a parent.
 */
RamResponse::RamResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RamResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RamResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RamResponsePrivate.
 */
RamResponse::RamResponse(RamResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RamResponse::parseFailure(QIODevice &response)
{
    //Q_D(RamResponse);
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
 * \class QtAws::RAM::RamResponsePrivate
 * \brief The RamResponsePrivate class provides private implementation for RamResponse.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a RamResponsePrivate object with public implementation \a q.
 */
RamResponsePrivate::RamResponsePrivate(
    RamResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RAM
} // namespace QtAws
