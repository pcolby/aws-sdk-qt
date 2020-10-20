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

#include "rekognitionresponse.h"
#include "rekognitionresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::RekognitionResponse
 * \brief The RekognitionResponse class provides an interface for Rekognition responses.
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RekognitionResponse object with parent \a parent.
 */
RekognitionResponse::RekognitionResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RekognitionResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RekognitionResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RekognitionResponsePrivate.
 */
RekognitionResponse::RekognitionResponse(RekognitionResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RekognitionResponse::parseFailure(QIODevice &response)
{
    //Q_D(RekognitionResponse);
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
 * \class QtAws::Rekognition::RekognitionResponsePrivate
 * \brief The RekognitionResponsePrivate class provides private implementation for RekognitionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RekognitionResponsePrivate object with public implementation \a q.
 */
RekognitionResponsePrivate::RekognitionResponsePrivate(
    RekognitionResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Rekognition
} // namespace QtAws
