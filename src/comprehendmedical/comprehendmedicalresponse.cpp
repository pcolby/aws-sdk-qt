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

#include "comprehendmedicalresponse.h"
#include "comprehendmedicalresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalResponse
 * \brief The ComprehendMedicalResponse class provides an interface for ComprehendMedical responses.
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ComprehendMedicalResponse object with parent \a parent.
 */
ComprehendMedicalResponse::ComprehendMedicalResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ComprehendMedicalResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ComprehendMedicalResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComprehendMedicalResponsePrivate.
 */
ComprehendMedicalResponse::ComprehendMedicalResponse(ComprehendMedicalResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ComprehendMedicalResponse::parseFailure(QIODevice &response)
{
    //Q_D(ComprehendMedicalResponse);
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
 * \class QtAws::ComprehendMedical::ComprehendMedicalResponsePrivate
 * \brief The ComprehendMedicalResponsePrivate class provides private implementation for ComprehendMedicalResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ComprehendMedicalResponsePrivate object with public implementation \a q.
 */
ComprehendMedicalResponsePrivate::ComprehendMedicalResponsePrivate(
    ComprehendMedicalResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
