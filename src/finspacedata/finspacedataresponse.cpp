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
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::FinspaceDataResponse
 * \brief The FinspaceDataResponse class provides an interface for FinspaceData responses.
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a FinspaceDataResponse object with parent \a parent.
 */
FinspaceDataResponse::FinspaceDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FinspaceDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FinspaceDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinspaceDataResponsePrivate.
 */
FinspaceDataResponse::FinspaceDataResponse(FinspaceDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FinspaceDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(FinspaceDataResponse);
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
 * \class QtAws::FinspaceData::FinspaceDataResponsePrivate
 * \brief The FinspaceDataResponsePrivate class provides private implementation for FinspaceDataResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a FinspaceDataResponsePrivate object with public implementation \a q.
 */
FinspaceDataResponsePrivate::FinspaceDataResponsePrivate(
    FinspaceDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace FinspaceData
} // namespace QtAws
