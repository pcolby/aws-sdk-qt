// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workdocsresponse.h"
#include "workdocsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::WorkDocsResponse
 * \brief The WorkDocsResponse class provides an interface for WorkDocs responses.
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a WorkDocsResponse object with parent \a parent.
 */
WorkDocsResponse::WorkDocsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkDocsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WorkDocsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkDocsResponsePrivate.
 */
WorkDocsResponse::WorkDocsResponse(WorkDocsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WorkDocsResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkDocsResponse);
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
 * \class QtAws::WorkDocs::WorkDocsResponsePrivate
 * \brief The WorkDocsResponsePrivate class provides private implementation for WorkDocsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a WorkDocsResponsePrivate object with public implementation \a q.
 */
WorkDocsResponsePrivate::WorkDocsResponsePrivate(
    WorkDocsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WorkDocs
} // namespace QtAws
