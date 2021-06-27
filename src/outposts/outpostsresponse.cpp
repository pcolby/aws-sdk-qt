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

#include "outpostsresponse.h"
#include "outpostsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::OutpostsResponse
 * \brief The OutpostsResponse class provides an interface for Outposts responses.
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a OutpostsResponse object with parent \a parent.
 */
OutpostsResponse::OutpostsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new OutpostsResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a OutpostsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OutpostsResponsePrivate.
 */
OutpostsResponse::OutpostsResponse(OutpostsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void OutpostsResponse::parseFailure(QIODevice &response)
{
    //Q_D(OutpostsResponse);
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
 * \class QtAws::Outposts::OutpostsResponsePrivate
 * \brief The OutpostsResponsePrivate class provides private implementation for OutpostsResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a OutpostsResponsePrivate object with public implementation \a q.
 */
OutpostsResponsePrivate::OutpostsResponsePrivate(
    OutpostsResponse * const q) : q_ptr(q)
{

}

} // namespace Outposts
} // namespace QtAws
