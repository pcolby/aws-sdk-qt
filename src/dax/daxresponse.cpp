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
 * \class QtAws::DAX::DaxResponse
 * \brief The DaxResponse class provides an interface for DAX responses.
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DaxResponse object with parent \a parent.
 */
DaxResponse::DaxResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DaxResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DaxResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DaxResponsePrivate.
 */
DaxResponse::DaxResponse(DaxResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DaxResponse::parseFailure(QIODevice &response)
{
    Q_D(DaxResponse);
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
 * \class QtAws::DAX::DaxResponsePrivate
 * \brief The DaxResponsePrivate class provides private implementation for DaxResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DaxResponsePrivate object with public implementation \a q.
 */
DaxResponsePrivate::DaxResponsePrivate(
    DaxResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DAX
} // namespace QtAws
