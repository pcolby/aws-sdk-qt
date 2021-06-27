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

#include "quicksightresponse.h"
#include "quicksightresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::QuickSightResponse
 * \brief The QuickSightResponse class provides an interface for QuickSight responses.
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightResponse object with parent \a parent.
 */
QuickSightResponse::QuickSightResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new QuickSightResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a QuickSightResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QuickSightResponsePrivate.
 */
QuickSightResponse::QuickSightResponse(QuickSightResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void QuickSightResponse::parseFailure(QIODevice &response)
{
    //Q_D(QuickSightResponse);
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
 * \class QtAws::QuickSight::QuickSightResponsePrivate
 * \brief The QuickSightResponsePrivate class provides private implementation for QuickSightResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightResponsePrivate object with public implementation \a q.
 */
QuickSightResponsePrivate::QuickSightResponsePrivate(
    QuickSightResponse * const q) : q_ptr(q)
{

}

} // namespace QuickSight
} // namespace QtAws
