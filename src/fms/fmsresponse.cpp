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

#include "fmsresponse.h"
#include "fmsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::FMSResponse
 * \brief The FMSResponse class provides an interface for FMS responses.
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a FMSResponse object with parent \a parent.
 */
FMSResponse::FMSResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FMSResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FMSResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FMSResponsePrivate.
 */
FMSResponse::FMSResponse(FMSResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FMSResponse::parseFailure(QIODevice &response)
{
    Q_D(FMSResponse);
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
 * \class QtAws::FMS::FMSResponsePrivate
 * \brief The FMSResponsePrivate class provides private implementation for FMSResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a FMSResponsePrivate object with public implementation \a q.
 */
FMSResponsePrivate::FMSResponsePrivate(
    FMSResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace FMS
} // namespace QtAws
