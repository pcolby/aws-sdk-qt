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

#include "accessanalyzerresponse.h"
#include "accessanalyzerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::AccessAnalyzerResponse
 * \brief The AccessAnalyzerResponse class provides an interface for AccessAnalyzer responses.
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a AccessAnalyzerResponse object with parent \a parent.
 */
AccessAnalyzerResponse::AccessAnalyzerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new AccessAnalyzerResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a AccessAnalyzerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AccessAnalyzerResponsePrivate.
 */
AccessAnalyzerResponse::AccessAnalyzerResponse(AccessAnalyzerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void AccessAnalyzerResponse::parseFailure(QIODevice &response)
{
    //Q_D(AccessAnalyzerResponse);
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
 * \class QtAws::AccessAnalyzer::AccessAnalyzerResponsePrivate
 * \brief The AccessAnalyzerResponsePrivate class provides private implementation for AccessAnalyzerResponse.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a AccessAnalyzerResponsePrivate object with public implementation \a q.
 */
AccessAnalyzerResponsePrivate::AccessAnalyzerResponsePrivate(
    AccessAnalyzerResponse * const q) : q_ptr(q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
