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

#include "codeguruprofilerresponse.h"
#include "codeguruprofilerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::CodeGuruProfilerResponse
 * \brief The CodeGuruProfilerResponse class provides an interface for CodeGuruProfiler responses.
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a CodeGuruProfilerResponse object with parent \a parent.
 */
CodeGuruProfilerResponse::CodeGuruProfilerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new CodeGuruProfilerResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a CodeGuruProfilerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeGuruProfilerResponsePrivate.
 */
CodeGuruProfilerResponse::CodeGuruProfilerResponse(CodeGuruProfilerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void CodeGuruProfilerResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeGuruProfilerResponse);
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
 * \class QtAws::CodeGuruProfiler::CodeGuruProfilerResponsePrivate
 * \brief The CodeGuruProfilerResponsePrivate class provides private implementation for CodeGuruProfilerResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a CodeGuruProfilerResponsePrivate object with public implementation \a q.
 */
CodeGuruProfilerResponsePrivate::CodeGuruProfilerResponsePrivate(
    CodeGuruProfilerResponse * const q) : q_ptr(q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
