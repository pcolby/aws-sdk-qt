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
namespace QLDBSession {

/*!
 * \class QtAws::QLDBSession::QLDBSessionResponse
 * \brief The QLDBSessionResponse class provides an interface for QLDBSession responses.
 *
 * \inmodule QtAwsQLDBSession
 */

/*!
 * Constructs a QLDBSessionResponse object with parent \a parent.
 */
QLDBSessionResponse::QLDBSessionResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new QLDBSessionResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a QLDBSessionResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QLDBSessionResponsePrivate.
 */
QLDBSessionResponse::QLDBSessionResponse(QLDBSessionResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void QLDBSessionResponse::parseFailure(QIODevice &response)
{
    //Q_D(QLDBSessionResponse);
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
 * \class QtAws::QLDBSession::QLDBSessionResponsePrivate
 * \brief The QLDBSessionResponsePrivate class provides private implementation for QLDBSessionResponse.
 * \internal
 *
 * \inmodule QtAwsQLDBSession
 */

/*!
 * Constructs a QLDBSessionResponsePrivate object with public implementation \a q.
 */
QLDBSessionResponsePrivate::QLDBSessionResponsePrivate(
    QLDBSessionResponse * const q) : q_ptr(q)
{

}

} // namespace QLDBSession
} // namespace QtAws
