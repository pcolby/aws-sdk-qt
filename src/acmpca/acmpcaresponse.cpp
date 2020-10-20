/*
    Copyright 2013-2020 Paul Colby

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

#include "acmpcaresponse.h"
#include "acmpcaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::AcmpcaResponse
 * \brief The AcmpcaResponse class provides an interface for ACMPCA responses.
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a AcmpcaResponse object with parent \a parent.
 */
AcmpcaResponse::AcmpcaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AcmpcaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AcmpcaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmpcaResponsePrivate.
 */
AcmpcaResponse::AcmpcaResponse(AcmpcaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AcmpcaResponse::parseFailure(QIODevice &response)
{
    //Q_D(AcmpcaResponse);
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
 * \class QtAws::ACMPCA::AcmpcaResponsePrivate
 * \brief The AcmpcaResponsePrivate class provides private implementation for AcmpcaResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a AcmpcaResponsePrivate object with public implementation \a q.
 */
AcmpcaResponsePrivate::AcmpcaResponsePrivate(
    AcmpcaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ACMPCA
} // namespace QtAws
