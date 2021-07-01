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

#include "inspectorresponse.h"
#include "inspectorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::InspectorResponse
 * \brief The InspectorResponse class provides an interface for Inspector responses.
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a InspectorResponse object with parent \a parent.
 */
InspectorResponse::InspectorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new InspectorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a InspectorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from InspectorResponsePrivate.
 */
InspectorResponse::InspectorResponse(InspectorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void InspectorResponse::parseFailure(QIODevice &response)
{
    //Q_D(InspectorResponse);
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
 * \class QtAws::Inspector::InspectorResponsePrivate
 * \brief The InspectorResponsePrivate class provides private implementation for InspectorResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a InspectorResponsePrivate object with public implementation \a q.
 */
InspectorResponsePrivate::InspectorResponsePrivate(
    InspectorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Inspector
} // namespace QtAws
