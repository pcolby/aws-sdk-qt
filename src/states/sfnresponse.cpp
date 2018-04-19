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

#include "sfnresponse.h"
#include "sfnresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::SFNResponse
 * \brief The SFNResponse class provides an interface for SFN responses.
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SFNResponse object with parent \a parent.
 */
SFNResponse::SFNResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SFNResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SFNResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SFNResponsePrivate.
 */
SFNResponse::SFNResponse(SFNResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SFNResponse::parseFailure(QIODevice &response)
{
    Q_D(SFNResponse);
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
 * \class QtAws::SFN::SFNResponsePrivate
 * \brief The SFNResponsePrivate class provides private implementation for SFNResponse.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SFNResponsePrivate object with public implementation \a q.
 */
SFNResponsePrivate::SFNResponsePrivate(
    SFNResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SFN
} // namespace QtAws
