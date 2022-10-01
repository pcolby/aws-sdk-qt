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

#include "finspaceresponse.h"
#include "finspaceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::FinspaceResponse
 * \brief The FinspaceResponse class provides an interface for Finspace responses.
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a FinspaceResponse object with parent \a parent.
 */
FinspaceResponse::FinspaceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FinspaceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FinspaceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinspaceResponsePrivate.
 */
FinspaceResponse::FinspaceResponse(FinspaceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FinspaceResponse::parseFailure(QIODevice &response)
{
    //Q_D(FinspaceResponse);
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
 * \class QtAws::Finspace::FinspaceResponsePrivate
 * \brief The FinspaceResponsePrivate class provides private implementation for FinspaceResponse.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a FinspaceResponsePrivate object with public implementation \a q.
 */
FinspaceResponsePrivate::FinspaceResponsePrivate(
    FinspaceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Finspace
} // namespace QtAws
