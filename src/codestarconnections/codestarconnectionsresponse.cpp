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

#include "codestarconnectionsresponse.h"
#include "codestarconnectionsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStarconnections {

/*!
 * \class QtAws::CodeStarconnections::CodeStarconnectionsResponse
 * \brief The CodeStarconnectionsResponse class provides an interface for CodeStarconnections responses.
 *
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * Constructs a CodeStarconnectionsResponse object with parent \a parent.
 */
CodeStarconnectionsResponse::CodeStarconnectionsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeStarconnectionsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeStarconnectionsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarconnectionsResponsePrivate.
 */
CodeStarconnectionsResponse::CodeStarconnectionsResponse(CodeStarconnectionsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeStarconnectionsResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeStarconnectionsResponse);
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
 * \class QtAws::CodeStarconnections::CodeStarconnectionsResponsePrivate
 * \brief The CodeStarconnectionsResponsePrivate class provides private implementation for CodeStarconnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * Constructs a CodeStarconnectionsResponsePrivate object with public implementation \a q.
 */
CodeStarconnectionsResponsePrivate::CodeStarconnectionsResponsePrivate(
    CodeStarconnectionsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeStarconnections
} // namespace QtAws
