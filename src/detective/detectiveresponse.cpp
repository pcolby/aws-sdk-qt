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

#include "detectiveresponse.h"
#include "detectiveresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Detective {

/*!
 * \class QtAws::Detective::DetectiveResponse
 * \brief The DetectiveResponse class provides an interface for Detective responses.
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a DetectiveResponse object with parent \a parent.
 */
DetectiveResponse::DetectiveResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new DetectiveResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a DetectiveResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DetectiveResponsePrivate.
 */
DetectiveResponse::DetectiveResponse(DetectiveResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void DetectiveResponse::parseFailure(QIODevice &response)
{
    //Q_D(DetectiveResponse);
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
 * \class QtAws::Detective::DetectiveResponsePrivate
 * \brief The DetectiveResponsePrivate class provides private implementation for DetectiveResponse.
 * \internal
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a DetectiveResponsePrivate object with public implementation \a q.
 */
DetectiveResponsePrivate::DetectiveResponsePrivate(
    DetectiveResponse * const q) : q_ptr(q)
{

}

} // namespace Detective
} // namespace QtAws
