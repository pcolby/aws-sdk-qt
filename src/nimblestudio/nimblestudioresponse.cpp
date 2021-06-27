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

#include "nimblestudioresponse.h"
#include "nimblestudioresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::NimbleStudioResponse
 * \brief The NimbleStudioResponse class provides an interface for NimbleStudio responses.
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a NimbleStudioResponse object with parent \a parent.
 */
NimbleStudioResponse::NimbleStudioResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new NimbleStudioResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a NimbleStudioResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NimbleStudioResponsePrivate.
 */
NimbleStudioResponse::NimbleStudioResponse(NimbleStudioResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void NimbleStudioResponse::parseFailure(QIODevice &response)
{
    //Q_D(NimbleStudioResponse);
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
 * \class QtAws::NimbleStudio::NimbleStudioResponsePrivate
 * \brief The NimbleStudioResponsePrivate class provides private implementation for NimbleStudioResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a NimbleStudioResponsePrivate object with public implementation \a q.
 */
NimbleStudioResponsePrivate::NimbleStudioResponsePrivate(
    NimbleStudioResponse * const q) : q_ptr(q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
