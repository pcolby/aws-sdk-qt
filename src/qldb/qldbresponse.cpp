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

#include "qldbresponse.h"
#include "qldbresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::QldbResponse
 * \brief The QldbResponse class provides an interface for Qldb responses.
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a QldbResponse object with parent \a parent.
 */
QldbResponse::QldbResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new QldbResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a QldbResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QldbResponsePrivate.
 */
QldbResponse::QldbResponse(QldbResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void QldbResponse::parseFailure(QIODevice &response)
{
    //Q_D(QldbResponse);
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
 * \class QtAws::Qldb::QldbResponsePrivate
 * \brief The QldbResponsePrivate class provides private implementation for QldbResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a QldbResponsePrivate object with public implementation \a q.
 */
QldbResponsePrivate::QldbResponsePrivate(
    QldbResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Qldb
} // namespace QtAws
