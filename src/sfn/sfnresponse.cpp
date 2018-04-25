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

#include "sfnresponse.h"
#include "sfnresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::SfnResponse
 * \brief The SfnResponse class provides an interface for SFN responses.
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SfnResponse object with parent \a parent.
 */
SfnResponse::SfnResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SfnResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SfnResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SfnResponsePrivate.
 */
SfnResponse::SfnResponse(SfnResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SfnResponse::parseFailure(QIODevice &response)
{
    Q_D(SfnResponse);
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
 * \class QtAws::SFN::SfnResponsePrivate
 * \brief The SfnResponsePrivate class provides private implementation for SfnResponse.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SfnResponsePrivate object with public implementation \a q.
 */
SfnResponsePrivate::SfnResponsePrivate(
    SfnResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SFN
} // namespace QtAws
