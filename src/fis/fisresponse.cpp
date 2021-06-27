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

#include "fisresponse.h"
#include "fisresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::FisResponse
 * \brief The FisResponse class provides an interface for FIS responses.
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a FisResponse object with parent \a parent.
 */
FisResponse::FisResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new FisResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a FisResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FisResponsePrivate.
 */
FisResponse::FisResponse(FisResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void FisResponse::parseFailure(QIODevice &response)
{
    //Q_D(FisResponse);
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
 * \class QtAws::FIS::FisResponsePrivate
 * \brief The FisResponsePrivate class provides private implementation for FisResponse.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a FisResponsePrivate object with public implementation \a q.
 */
FisResponsePrivate::FisResponsePrivate(
    FisResponse * const q) : q_ptr(q)
{

}

} // namespace FIS
} // namespace QtAws
