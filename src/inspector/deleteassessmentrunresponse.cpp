// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassessmentrunresponse.h"
#include "deleteassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentRunResponse
 * \brief The DeleteAssessmentRunResponse class provides an interace for Inspector DeleteAssessmentRun responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentRun
 */

/*!
 * Constructs a DeleteAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssessmentRunResponse::DeleteAssessmentRunResponse(
        const DeleteAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DeleteAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new DeleteAssessmentRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssessmentRunRequest * DeleteAssessmentRunResponse::request() const
{
    Q_D(const DeleteAssessmentRunResponse);
    return static_cast<const DeleteAssessmentRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DeleteAssessmentRun \a response.
 */
void DeleteAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DeleteAssessmentRunResponsePrivate
 * \brief The DeleteAssessmentRunResponsePrivate class provides private implementation for DeleteAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DeleteAssessmentRunResponsePrivate object with public implementation \a q.
 */
DeleteAssessmentRunResponsePrivate::DeleteAssessmentRunResponsePrivate(
    DeleteAssessmentRunResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DeleteAssessmentRun response element from \a xml.
 */
void DeleteAssessmentRunResponsePrivate::parseDeleteAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
