/*
    Copyright 2013-2019 Paul Colby

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

#include "rdsresponse.h"
#include "rdsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/*!
 * \class QtAws::RDS::RdsResponse
 * \brief The RdsResponse class provides an interface for RDS responses.
 *
 * \inmodule QtAwsRDS
 */

/*!
 * Constructs a RdsResponse object with parent \a parent.
 */
RdsResponse::RdsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RdsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RdsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RdsResponsePrivate.
 */
RdsResponse::RdsResponse(RdsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RdsResponse::parseFailure(QIODevice &response)
{
    //Q_D(RdsResponse);
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
 * \class QtAws::RDS::RdsResponsePrivate
 * \brief The RdsResponsePrivate class provides private implementation for RdsResponse.
 * \internal
 *
 * \inmodule QtAwsRDS
 */

/*!
 * Constructs a RdsResponsePrivate object with public implementation \a q.
 */
RdsResponsePrivate::RdsResponsePrivate(
    RdsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RDS
} // namespace QtAws
