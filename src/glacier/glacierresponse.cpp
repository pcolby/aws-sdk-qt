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

#include "glacierresponse.h"
#include "glacierresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::GlacierResponse
 * \brief The GlacierResponse class provides an interface for Glacier responses.
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a GlacierResponse object with parent \a parent.
 */
GlacierResponse::GlacierResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GlacierResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GlacierResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlacierResponsePrivate.
 */
GlacierResponse::GlacierResponse(GlacierResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GlacierResponse::parseFailure(QIODevice &response)
{
    //Q_D(GlacierResponse);
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
 * \class QtAws::Glacier::GlacierResponsePrivate
 * \brief The GlacierResponsePrivate class provides private implementation for GlacierResponse.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a GlacierResponsePrivate object with public implementation \a q.
 */
GlacierResponsePrivate::GlacierResponsePrivate(
    GlacierResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Glacier
} // namespace QtAws
