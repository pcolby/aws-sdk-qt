// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrecommendationfeedbackrequest.h"
#include "putrecommendationfeedbackrequest_p.h"
#include "putrecommendationfeedbackresponse.h"
#include "codegurureviewerrequest_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::PutRecommendationFeedbackRequest
 * \brief The PutRecommendationFeedbackRequest class provides an interface for CodeGuruReviewer PutRecommendationFeedback requests.
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
 * Constructs a copy of \a other.
 */
PutRecommendationFeedbackRequest::PutRecommendationFeedbackRequest(const PutRecommendationFeedbackRequest &other)
    : CodeGuruReviewerRequest(new PutRecommendationFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRecommendationFeedbackRequest object.
 */
PutRecommendationFeedbackRequest::PutRecommendationFeedbackRequest()
    : CodeGuruReviewerRequest(new PutRecommendationFeedbackRequestPrivate(CodeGuruReviewerRequest::PutRecommendationFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool PutRecommendationFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRecommendationFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecommendationFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new PutRecommendationFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruReviewer::PutRecommendationFeedbackRequestPrivate
 * \brief The PutRecommendationFeedbackRequestPrivate class provides private implementation for PutRecommendationFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a PutRecommendationFeedbackRequestPrivate object for CodeGuruReviewer \a action,
 * with public implementation \a q.
 */
PutRecommendationFeedbackRequestPrivate::PutRecommendationFeedbackRequestPrivate(
    const CodeGuruReviewerRequest::Action action, PutRecommendationFeedbackRequest * const q)
    : CodeGuruReviewerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRecommendationFeedbackRequest
 * class' copy constructor.
 */
PutRecommendationFeedbackRequestPrivate::PutRecommendationFeedbackRequestPrivate(
    const PutRecommendationFeedbackRequestPrivate &other, PutRecommendationFeedbackRequest * const q)
    : CodeGuruReviewerRequestPrivate(other, q)
{

}

} // namespace CodeGuruReviewer
} // namespace QtAws
