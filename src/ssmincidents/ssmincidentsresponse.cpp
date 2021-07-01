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

#include "ssmincidentsresponse.h"
#include "ssmincidentsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::SSMIncidentsResponse
 * \brief The SSMIncidentsResponse class provides an interface for SSMIncidents responses.
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a SSMIncidentsResponse object with parent \a parent.
 */
SSMIncidentsResponse::SSMIncidentsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SSMIncidentsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SSMIncidentsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSMIncidentsResponsePrivate.
 */
SSMIncidentsResponse::SSMIncidentsResponse(SSMIncidentsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SSMIncidentsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SSMIncidentsResponse);
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
 * \class QtAws::SSMIncidents::SSMIncidentsResponsePrivate
 * \brief The SSMIncidentsResponsePrivate class provides private implementation for SSMIncidentsResponse.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a SSMIncidentsResponsePrivate object with public implementation \a q.
 */
SSMIncidentsResponsePrivate::SSMIncidentsResponsePrivate(
    SSMIncidentsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SSMIncidents
} // namespace QtAws
