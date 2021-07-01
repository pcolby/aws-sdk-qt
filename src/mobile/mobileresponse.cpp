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

#include "mobileresponse.h"
#include "mobileresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::MobileResponse
 * \brief The MobileResponse class provides an interface for Mobile responses.
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a MobileResponse object with parent \a parent.
 */
MobileResponse::MobileResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MobileResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MobileResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MobileResponsePrivate.
 */
MobileResponse::MobileResponse(MobileResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MobileResponse::parseFailure(QIODevice &response)
{
    //Q_D(MobileResponse);
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
 * \class QtAws::Mobile::MobileResponsePrivate
 * \brief The MobileResponsePrivate class provides private implementation for MobileResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a MobileResponsePrivate object with public implementation \a q.
 */
MobileResponsePrivate::MobileResponsePrivate(
    MobileResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Mobile
} // namespace QtAws
