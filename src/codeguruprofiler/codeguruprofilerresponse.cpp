// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    : QtAws::Core::AwsAbstractResponse(new CodeGuruProfilerResponsePrivate(this), parent)
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
    : QtAws::Core::AwsAbstractResponse(d, parent)
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
    CodeGuruProfilerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
