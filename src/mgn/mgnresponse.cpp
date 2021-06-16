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

#include "mgnresponse.h"
#include "mgnresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::mgnResponse
 * \brief The mgnResponse class provides an interface for mgn responses.
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a mgnResponse object with parent \a parent.
 */
mgnResponse::mgnResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new mgnResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a mgnResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from mgnResponsePrivate.
 */
mgnResponse::mgnResponse(mgnResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void mgnResponse::parseFailure(QIODevice &response)
{
    //Q_D(mgnResponse);
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
 * \class QtAws::mgn::mgnResponsePrivate
 * \brief The mgnResponsePrivate class provides private implementation for mgnResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a mgnResponsePrivate object with public implementation \a q.
 */
mgnResponsePrivate::mgnResponsePrivate(
    mgnResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace mgn
} // namespace QtAws
