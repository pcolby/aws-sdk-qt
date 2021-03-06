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

#include "lexruntimev2response.h"
#include "lexruntimev2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::LexRuntimeV2Response
 * \brief The LexRuntimeV2Response class provides an interface for LexRuntimeV2 responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a LexRuntimeV2Response object with parent \a parent.
 */
LexRuntimeV2Response::LexRuntimeV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LexRuntimeV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LexRuntimeV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexRuntimeV2ResponsePrivate.
 */
LexRuntimeV2Response::LexRuntimeV2Response(LexRuntimeV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LexRuntimeV2Response::parseFailure(QIODevice &response)
{
    //Q_D(LexRuntimeV2Response);
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
 * \class QtAws::LexRuntimeV2::LexRuntimeV2ResponsePrivate
 * \brief The LexRuntimeV2ResponsePrivate class provides private implementation for LexRuntimeV2Response.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a LexRuntimeV2ResponsePrivate object with public implementation \a q.
 */
LexRuntimeV2ResponsePrivate::LexRuntimeV2ResponsePrivate(
    LexRuntimeV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
