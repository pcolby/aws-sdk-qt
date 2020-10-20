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

#include "fsxresponse.h"
#include "fsxresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::FSxResponse
 * \brief The FSxResponse class provides an interface for FSx responses.
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a FSxResponse object with parent \a parent.
 */
FSxResponse::FSxResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FSxResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FSxResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FSxResponsePrivate.
 */
FSxResponse::FSxResponse(FSxResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FSxResponse::parseFailure(QIODevice &response)
{
    //Q_D(FSxResponse);
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
 * \class QtAws::FSx::FSxResponsePrivate
 * \brief The FSxResponsePrivate class provides private implementation for FSxResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a FSxResponsePrivate object with public implementation \a q.
 */
FSxResponsePrivate::FSxResponsePrivate(
    FSxResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace FSx
} // namespace QtAws
