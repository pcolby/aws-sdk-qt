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

#include "deleteassessmenttemplateresponse.h"
#include "deleteassessmenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentTemplateResponse
 * \brief The DeleteAssessmentTemplateResponse class provides an interace for Inspector DeleteAssessmentTemplate responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentTemplate
 */

/*!
 * Constructs a DeleteAssessmentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssessmentTemplateResponse::DeleteAssessmentTemplateResponse(
        const DeleteAssessmentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DeleteAssessmentTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteAssessmentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssessmentTemplateRequest * DeleteAssessmentTemplateResponse::request() const
{
    Q_D(const DeleteAssessmentTemplateResponse);
    return static_cast<const DeleteAssessmentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DeleteAssessmentTemplate \a response.
 */
void DeleteAssessmentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssessmentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DeleteAssessmentTemplateResponsePrivate
 * \brief The DeleteAssessmentTemplateResponsePrivate class provides private implementation for DeleteAssessmentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DeleteAssessmentTemplateResponsePrivate object with public implementation \a q.
 */
DeleteAssessmentTemplateResponsePrivate::DeleteAssessmentTemplateResponsePrivate(
    DeleteAssessmentTemplateResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DeleteAssessmentTemplate response element from \a xml.
 */
void DeleteAssessmentTemplateResponsePrivate::parseDeleteAssessmentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
