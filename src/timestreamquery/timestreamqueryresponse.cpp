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

#include "timestreamqueryresponse.h"
#include "timestreamqueryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::TimestreamQueryResponse
 * \brief The TimestreamQueryResponse class provides an interface for TimestreamQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a TimestreamQueryResponse object with parent \a parent.
 */
TimestreamQueryResponse::TimestreamQueryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new TimestreamQueryResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a TimestreamQueryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TimestreamQueryResponsePrivate.
 */
TimestreamQueryResponse::TimestreamQueryResponse(TimestreamQueryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void TimestreamQueryResponse::parseFailure(QIODevice &response)
{
    //Q_D(TimestreamQueryResponse);
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
 * \class QtAws::TimestreamQuery::TimestreamQueryResponsePrivate
 * \brief The TimestreamQueryResponsePrivate class provides private implementation for TimestreamQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a TimestreamQueryResponsePrivate object with public implementation \a q.
 */
TimestreamQueryResponsePrivate::TimestreamQueryResponsePrivate(
    TimestreamQueryResponse * const q) : q_ptr(q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
