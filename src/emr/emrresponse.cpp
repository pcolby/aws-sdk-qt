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

#include "emrresponse.h"
#include "emrresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::EmrResponse
 * \brief The EmrResponse class provides an interface for EMR responses.
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a EmrResponse object with parent \a parent.
 */
EmrResponse::EmrResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EmrResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EmrResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrResponsePrivate.
 */
EmrResponse::EmrResponse(EmrResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EmrResponse::parseFailure(QIODevice &response)
{
    //Q_D(EmrResponse);
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
 * \class QtAws::EMR::EmrResponsePrivate
 * \brief The EmrResponsePrivate class provides private implementation for EmrResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a EmrResponsePrivate object with public implementation \a q.
 */
EmrResponsePrivate::EmrResponsePrivate(
    EmrResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EMR
} // namespace QtAws
