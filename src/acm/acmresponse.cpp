/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "acmresponse.h"
#include "acmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::AcmResponse
 * \brief The AcmResponse class provides an interface for ACM responses.
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a AcmResponse object with parent \a parent.
 */
AcmResponse::AcmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AcmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AcmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmResponsePrivate.
 */
AcmResponse::AcmResponse(AcmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AcmResponse::parseFailure(QIODevice &response)
{
    Q_D(AcmResponse);
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
 * \class QtAws::ACM::AcmResponsePrivate
 * \brief The AcmResponsePrivate class provides private implementation for AcmResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a AcmResponsePrivate object with public implementation \a q.
 */
AcmResponsePrivate::AcmResponsePrivate(
    AcmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ACM
} // namespace QtAws
