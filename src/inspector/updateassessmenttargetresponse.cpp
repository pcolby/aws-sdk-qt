// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassessmenttargetresponse.h"
#include "updateassessmenttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::UpdateAssessmentTargetResponse
 * \brief The UpdateAssessmentTargetResponse class provides an interace for Inspector UpdateAssessmentTarget responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::updateAssessmentTarget
 */

/*!
 * Constructs a UpdateAssessmentTargetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAssessmentTargetResponse::UpdateAssessmentTargetResponse(
        const UpdateAssessmentTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new UpdateAssessmentTargetResponsePrivate(this), parent)
{
    setRequest(new UpdateAssessmentTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAssessmentTargetRequest * UpdateAssessmentTargetResponse::request() const
{
    Q_D(const UpdateAssessmentTargetResponse);
    return static_cast<const UpdateAssessmentTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector UpdateAssessmentTarget \a response.
 */
void UpdateAssessmentTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAssessmentTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::UpdateAssessmentTargetResponsePrivate
 * \brief The UpdateAssessmentTargetResponsePrivate class provides private implementation for UpdateAssessmentTargetResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a UpdateAssessmentTargetResponsePrivate object with public implementation \a q.
 */
UpdateAssessmentTargetResponsePrivate::UpdateAssessmentTargetResponsePrivate(
    UpdateAssessmentTargetResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector UpdateAssessmentTarget response element from \a xml.
 */
void UpdateAssessmentTargetResponsePrivate::parseUpdateAssessmentTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssessmentTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
