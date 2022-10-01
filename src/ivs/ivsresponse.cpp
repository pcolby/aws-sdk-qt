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

#include "ivsresponse.h"
#include "ivsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ivs {

/*!
 * \class QtAws::Ivs::IvsResponse
 * \brief The IvsResponse class provides an interface for Ivs responses.
 *
 * \inmodule QtAwsIvs
 */

/*!
 * Constructs a IvsResponse object with parent \a parent.
 */
IvsResponse::IvsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IvsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IvsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IvsResponsePrivate.
 */
IvsResponse::IvsResponse(IvsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IvsResponse::parseFailure(QIODevice &response)
{
    //Q_D(IvsResponse);
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
 * \class QtAws::Ivs::IvsResponsePrivate
 * \brief The IvsResponsePrivate class provides private implementation for IvsResponse.
 * \internal
 *
 * \inmodule QtAwsIvs
 */

/*!
 * Constructs a IvsResponsePrivate object with public implementation \a q.
 */
IvsResponsePrivate::IvsResponsePrivate(
    IvsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ivs
} // namespace QtAws
