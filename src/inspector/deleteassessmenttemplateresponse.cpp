// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
