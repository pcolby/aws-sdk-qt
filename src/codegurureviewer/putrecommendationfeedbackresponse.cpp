// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrecommendationfeedbackresponse.h"
#include "putrecommendationfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::PutRecommendationFeedbackResponse
 * \brief The PutRecommendationFeedbackResponse class provides an interace for CodeGuruReviewer PutRecommendationFeedback responses.
 *
 * \inmodule QtAwsCodeGuruReviewer
 *
 *  This section provides documentation for the Amazon CodeGuru Reviewer API operations. CodeGuru Reviewer is a service that
 *  uses program analysis and machine learning to detect potential defects that are difficult for developers to find and
 *  recommends fixes in your Java and Python
 * 
 *  code>
 * 
 *  By proactively detecting and providing recommendations for addressing code defects and implementing best practices,
 *  CodeGuru Reviewer improves the overall quality and maintainability of your code base during the code review stage. For
 *  more information about CodeGuru Reviewer, see the <i> <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/welcome.html">Amazon CodeGuru Reviewer User Guide</a>.</i>
 * 
 *  </p
 * 
 *  To improve the security of your CodeGuru Reviewer API calls, you can establish a private connection between your VPC and
 *  CodeGuru Reviewer by creating an <i>interface VPC endpoint</i>. For more information, see <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/vpc-interface-endpoints.html">CodeGuru Reviewer and
 *  interface VPC endpoints (Amazon Web Services PrivateLink)</a> in the <i>Amazon CodeGuru Reviewer User
 *
 * \sa CodeGuruReviewerClient::putRecommendationFeedback
 */

/*!
 * Constructs a PutRecommendationFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
PutRecommendationFeedbackResponse::PutRecommendationFeedbackResponse(
        const PutRecommendationFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruReviewerResponse(new PutRecommendationFeedbackResponsePrivate(this), parent)
{
    setRequest(new PutRecommendationFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRecommendationFeedbackRequest * PutRecommendationFeedbackResponse::request() const
{
    Q_D(const PutRecommendationFeedbackResponse);
    return static_cast<const PutRecommendationFeedbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruReviewer PutRecommendationFeedback \a response.
 */
void PutRecommendationFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRecommendationFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruReviewer::PutRecommendationFeedbackResponsePrivate
 * \brief The PutRecommendationFeedbackResponsePrivate class provides private implementation for PutRecommendationFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a PutRecommendationFeedbackResponsePrivate object with public implementation \a q.
 */
PutRecommendationFeedbackResponsePrivate::PutRecommendationFeedbackResponsePrivate(
    PutRecommendationFeedbackResponse * const q) : CodeGuruReviewerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruReviewer PutRecommendationFeedback response element from \a xml.
 */
void PutRecommendationFeedbackResponsePrivate::parsePutRecommendationFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecommendationFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruReviewer
} // namespace QtAws
