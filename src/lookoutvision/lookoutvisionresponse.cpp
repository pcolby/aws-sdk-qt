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

#include "lookoutvisionresponse.h"
#include "lookoutvisionresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::LookoutVisionResponse
 * \brief The LookoutVisionResponse class provides an interface for LookoutVision responses.
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a LookoutVisionResponse object with parent \a parent.
 */
LookoutVisionResponse::LookoutVisionResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LookoutVisionResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LookoutVisionResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutVisionResponsePrivate.
 */
LookoutVisionResponse::LookoutVisionResponse(LookoutVisionResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LookoutVisionResponse::parseFailure(QIODevice &response)
{
    //Q_D(LookoutVisionResponse);
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
 * \class QtAws::LookoutVision::LookoutVisionResponsePrivate
 * \brief The LookoutVisionResponsePrivate class provides private implementation for LookoutVisionResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a LookoutVisionResponsePrivate object with public implementation \a q.
 */
LookoutVisionResponsePrivate::LookoutVisionResponsePrivate(
    LookoutVisionResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LookoutVision
} // namespace QtAws
