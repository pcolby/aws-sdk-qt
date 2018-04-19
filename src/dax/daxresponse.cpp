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

#include "daxresponse.h"
#include "daxresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DAXResponse
 * \brief The DAXResponse class provides an interface for DAX responses.
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DAXResponse object with parent \a parent.
 */
DAXResponse::DAXResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DAXResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DAXResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DAXResponsePrivate.
 */
DAXResponse::DAXResponse(DAXResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DAXResponse::parseFailure(QIODevice &response)
{
    Q_D(DAXResponse);
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
 * \class QtAws::DAX::DAXResponsePrivate
 * \brief The DAXResponsePrivate class provides private implementation for DAXResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DAXResponsePrivate object with public implementation \a q.
 */
DAXResponsePrivate::DAXResponsePrivate(
    DAXResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DAX
} // namespace QtAws
