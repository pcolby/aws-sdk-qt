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

#include "qldbsessionresponse.h"
#include "qldbsessionresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace QldbSession {

/*!
 * \class QtAws::QldbSession::QldbSessionResponse
 * \brief The QldbSessionResponse class provides an interface for QldbSession responses.
 *
 * \inmodule QtAwsQldbSession
 */

/*!
 * Constructs a QldbSessionResponse object with parent \a parent.
 */
QldbSessionResponse::QldbSessionResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new QldbSessionResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a QldbSessionResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QldbSessionResponsePrivate.
 */
QldbSessionResponse::QldbSessionResponse(QldbSessionResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void QldbSessionResponse::parseFailure(QIODevice &response)
{
    //Q_D(QldbSessionResponse);
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
 * \class QtAws::QldbSession::QldbSessionResponsePrivate
 * \brief The QldbSessionResponsePrivate class provides private implementation for QldbSessionResponse.
 * \internal
 *
 * \inmodule QtAwsQldbSession
 */

/*!
 * Constructs a QldbSessionResponsePrivate object with public implementation \a q.
 */
QldbSessionResponsePrivate::QldbSessionResponsePrivate(
    QldbSessionResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace QldbSession
} // namespace QtAws
