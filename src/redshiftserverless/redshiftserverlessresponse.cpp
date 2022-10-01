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

#include "redshiftserverlessresponse.h"
#include "redshiftserverlessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RedshiftServerlessResponse
 * \brief The RedshiftServerlessResponse class provides an interface for RedshiftServerless responses.
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RedshiftServerlessResponse object with parent \a parent.
 */
RedshiftServerlessResponse::RedshiftServerlessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RedshiftServerlessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RedshiftServerlessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftServerlessResponsePrivate.
 */
RedshiftServerlessResponse::RedshiftServerlessResponse(RedshiftServerlessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RedshiftServerlessResponse::parseFailure(QIODevice &response)
{
    //Q_D(RedshiftServerlessResponse);
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
 * \class QtAws::RedshiftServerless::RedshiftServerlessResponsePrivate
 * \brief The RedshiftServerlessResponsePrivate class provides private implementation for RedshiftServerlessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RedshiftServerlessResponsePrivate object with public implementation \a q.
 */
RedshiftServerlessResponsePrivate::RedshiftServerlessResponsePrivate(
    RedshiftServerlessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
