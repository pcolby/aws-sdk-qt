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

#include "lookoutforvisionresponse.h"
#include "lookoutforvisionresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutforVision {

/*!
 * \class QtAws::LookoutforVision::LookoutforVisionResponse
 * \brief The LookoutforVisionResponse class provides an interface for LookoutforVision responses.
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a LookoutforVisionResponse object with parent \a parent.
 */
LookoutforVisionResponse::LookoutforVisionResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LookoutforVisionResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LookoutforVisionResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutforVisionResponsePrivate.
 */
LookoutforVisionResponse::LookoutforVisionResponse(LookoutforVisionResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LookoutforVisionResponse::parseFailure(QIODevice &response)
{
    //Q_D(LookoutforVisionResponse);
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
 * \class QtAws::LookoutforVision::LookoutforVisionResponsePrivate
 * \brief The LookoutforVisionResponsePrivate class provides private implementation for LookoutforVisionResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a LookoutforVisionResponsePrivate object with public implementation \a q.
 */
LookoutforVisionResponsePrivate::LookoutforVisionResponsePrivate(
    LookoutforVisionResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LookoutforVision
} // namespace QtAws
