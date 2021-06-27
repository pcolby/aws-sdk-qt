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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new CodeGuruReviewerResponsePrivate(this))
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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
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
    CodeGuruReviewerResponse * const q) : q_ptr(q)
{

}

} // namespace CodeGuruReviewer
} // namespace QtAws
