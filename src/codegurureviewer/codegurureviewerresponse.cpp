// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codegurureviewerresponse.h"
#include "codegurureviewerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::CodeGuruReviewerResponse
 * \brief The CodeGuruReviewerResponse class provides an interface for CodeGuruReviewer responses.
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a CodeGuruReviewerResponse object with parent \a parent.
 */
CodeGuruReviewerResponse::CodeGuruReviewerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeGuruReviewerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeGuruReviewerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeGuruReviewerResponsePrivate.
 */
CodeGuruReviewerResponse::CodeGuruReviewerResponse(CodeGuruReviewerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeGuruReviewerResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeGuruReviewerResponse);
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
 * \class QtAws::CodeGuruReviewer::CodeGuruReviewerResponsePrivate
 * \brief The CodeGuruReviewerResponsePrivate class provides private implementation for CodeGuruReviewerResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a CodeGuruReviewerResponsePrivate object with public implementation \a q.
 */
CodeGuruReviewerResponsePrivate::CodeGuruReviewerResponsePrivate(
    CodeGuruReviewerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeGuruReviewer
} // namespace QtAws
