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

#include "honeycoderesponse.h"
#include "honeycoderesponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::HoneycodeResponse
 * \brief The HoneycodeResponse class provides an interface for Honeycode responses.
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a HoneycodeResponse object with parent \a parent.
 */
HoneycodeResponse::HoneycodeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new HoneycodeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a HoneycodeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HoneycodeResponsePrivate.
 */
HoneycodeResponse::HoneycodeResponse(HoneycodeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void HoneycodeResponse::parseFailure(QIODevice &response)
{
    //Q_D(HoneycodeResponse);
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
 * \class QtAws::Honeycode::HoneycodeResponsePrivate
 * \brief The HoneycodeResponsePrivate class provides private implementation for HoneycodeResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a HoneycodeResponsePrivate object with public implementation \a q.
 */
HoneycodeResponsePrivate::HoneycodeResponsePrivate(
    HoneycodeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Honeycode
} // namespace QtAws
