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

#include "sesresponse.h"
#include "sesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SesResponse
 * \brief The SesResponse class provides an interface for Ses responses.
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SesResponse object with parent \a parent.
 */
SesResponse::SesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SesResponsePrivate.
 */
SesResponse::SesResponse(SesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SesResponse::parseFailure(QIODevice &response)
{
    //Q_D(SesResponse);
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
 * \class QtAws::Ses::SesResponsePrivate
 * \brief The SesResponsePrivate class provides private implementation for SesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SesResponsePrivate object with public implementation \a q.
 */
SesResponsePrivate::SesResponsePrivate(
    SesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ses
} // namespace QtAws
