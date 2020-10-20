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

#include "supportresponse.h"
#include "supportresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::SupportResponse
 * \brief The SupportResponse class provides an interface for Support responses.
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a SupportResponse object with parent \a parent.
 */
SupportResponse::SupportResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SupportResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SupportResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SupportResponsePrivate.
 */
SupportResponse::SupportResponse(SupportResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SupportResponse::parseFailure(QIODevice &response)
{
    //Q_D(SupportResponse);
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
 * \class QtAws::Support::SupportResponsePrivate
 * \brief The SupportResponsePrivate class provides private implementation for SupportResponse.
 * \internal
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a SupportResponsePrivate object with public implementation \a q.
 */
SupportResponsePrivate::SupportResponsePrivate(
    SupportResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Support
} // namespace QtAws
