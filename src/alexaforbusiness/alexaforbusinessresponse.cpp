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

#include "alexaforbusinessresponse.h"
#include "alexaforbusinessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AlexaForBusinessResponse
 * \brief The AlexaForBusinessResponse class provides an interface for AlexaForBusiness responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AlexaForBusinessResponse object with parent \a parent.
 */
AlexaForBusinessResponse::AlexaForBusinessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AlexaForBusinessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AlexaForBusinessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AlexaForBusinessResponsePrivate.
 */
AlexaForBusinessResponse::AlexaForBusinessResponse(AlexaForBusinessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AlexaForBusinessResponse::parseFailure(QIODevice &response)
{
    //Q_D(AlexaForBusinessResponse);
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
 * \class QtAws::AlexaForBusiness::AlexaForBusinessResponsePrivate
 * \brief The AlexaForBusinessResponsePrivate class provides private implementation for AlexaForBusinessResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AlexaForBusinessResponsePrivate object with public implementation \a q.
 */
AlexaForBusinessResponsePrivate::AlexaForBusinessResponsePrivate(
    AlexaForBusinessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
