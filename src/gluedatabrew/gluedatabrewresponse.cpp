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

#include "gluedatabrewresponse.h"
#include "gluedatabrewresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::GlueDataBrewResponse
 * \brief The GlueDataBrewResponse class provides an interface for GlueDataBrew responses.
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a GlueDataBrewResponse object with parent \a parent.
 */
GlueDataBrewResponse::GlueDataBrewResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new GlueDataBrewResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a GlueDataBrewResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlueDataBrewResponsePrivate.
 */
GlueDataBrewResponse::GlueDataBrewResponse(GlueDataBrewResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void GlueDataBrewResponse::parseFailure(QIODevice &response)
{
    //Q_D(GlueDataBrewResponse);
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
 * \class QtAws::GlueDataBrew::GlueDataBrewResponsePrivate
 * \brief The GlueDataBrewResponsePrivate class provides private implementation for GlueDataBrewResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a GlueDataBrewResponsePrivate object with public implementation \a q.
 */
GlueDataBrewResponsePrivate::GlueDataBrewResponsePrivate(
    GlueDataBrewResponse * const q) : q_ptr(q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
