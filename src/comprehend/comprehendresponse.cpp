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

#include "comprehendresponse.h"
#include "comprehendresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ComprehendResponse
 * \brief The ComprehendResponse class provides an interface for Comprehend responses.
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ComprehendResponse object with parent \a parent.
 */
ComprehendResponse::ComprehendResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ComprehendResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ComprehendResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComprehendResponsePrivate.
 */
ComprehendResponse::ComprehendResponse(ComprehendResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ComprehendResponse::parseFailure(QIODevice &response)
{
    //Q_D(ComprehendResponse);
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
 * \class QtAws::Comprehend::ComprehendResponsePrivate
 * \brief The ComprehendResponsePrivate class provides private implementation for ComprehendResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ComprehendResponsePrivate object with public implementation \a q.
 */
ComprehendResponsePrivate::ComprehendResponsePrivate(
    ComprehendResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Comprehend
} // namespace QtAws
