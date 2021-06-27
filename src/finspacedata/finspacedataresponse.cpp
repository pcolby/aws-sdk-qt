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

#include "finspacedataresponse.h"
#include "finspacedataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinSpaceData {

/*!
 * \class QtAws::FinSpaceData::FinSpaceDataResponse
 * \brief The FinSpaceDataResponse class provides an interface for FinSpaceData responses.
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a FinSpaceDataResponse object with parent \a parent.
 */
FinSpaceDataResponse::FinSpaceDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new FinSpaceDataResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a FinSpaceDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinSpaceDataResponsePrivate.
 */
FinSpaceDataResponse::FinSpaceDataResponse(FinSpaceDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void FinSpaceDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(FinSpaceDataResponse);
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
 * \class QtAws::FinSpaceData::FinSpaceDataResponsePrivate
 * \brief The FinSpaceDataResponsePrivate class provides private implementation for FinSpaceDataResponse.
 * \internal
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a FinSpaceDataResponsePrivate object with public implementation \a q.
 */
FinSpaceDataResponsePrivate::FinSpaceDataResponsePrivate(
    FinSpaceDataResponse * const q) : q_ptr(q)
{

}

} // namespace FinSpaceData
} // namespace QtAws
