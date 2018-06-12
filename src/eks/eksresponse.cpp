/*
    Copyright 2013-2018 Paul Colby

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

#include "eksresponse.h"
#include "eksresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::EksResponse
 * \brief The EksResponse class provides an interface for EKS responses.
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a EksResponse object with parent \a parent.
 */
EksResponse::EksResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EksResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EksResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EksResponsePrivate.
 */
EksResponse::EksResponse(EksResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EksResponse::parseFailure(QIODevice &response)
{
    //Q_D(EksResponse);
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
 * \class QtAws::EKS::EksResponsePrivate
 * \brief The EksResponsePrivate class provides private implementation for EksResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a EksResponsePrivate object with public implementation \a q.
 */
EksResponsePrivate::EksResponsePrivate(
    EksResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EKS
} // namespace QtAws
