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

#include "wellarchitectedresponse.h"
#include "wellarchitectedresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::WellArchitectedResponse
 * \brief The WellArchitectedResponse class provides an interface for WellArchitected responses.
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a WellArchitectedResponse object with parent \a parent.
 */
WellArchitectedResponse::WellArchitectedResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new WellArchitectedResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a WellArchitectedResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WellArchitectedResponsePrivate.
 */
WellArchitectedResponse::WellArchitectedResponse(WellArchitectedResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void WellArchitectedResponse::parseFailure(QIODevice &response)
{
    //Q_D(WellArchitectedResponse);
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
 * \class QtAws::WellArchitected::WellArchitectedResponsePrivate
 * \brief The WellArchitectedResponsePrivate class provides private implementation for WellArchitectedResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a WellArchitectedResponsePrivate object with public implementation \a q.
 */
WellArchitectedResponsePrivate::WellArchitectedResponsePrivate(
    WellArchitectedResponse * const q) : q_ptr(q)
{

}

} // namespace WellArchitected
} // namespace QtAws
