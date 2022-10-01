// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecommendationsrequest.h"
#include "listrecommendationsrequest_p.h"
#include "listrecommendationsresponse.h"
#include "codegurureviewerrequest_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::ListRecommendationsRequest
 * \brief The ListRecommendationsRequest class provides an interface for CodeGuruReviewer ListRecommendations requests.
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
 * \sa CodeGuruReviewerClient::listRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecommendationsRequest::ListRecommendationsRequest(const ListRecommendationsRequest &other)
    : CodeGuruReviewerRequest(new ListRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecommendationsRequest object.
 */
ListRecommendationsRequest::ListRecommendationsRequest()
    : CodeGuruReviewerRequest(new ListRecommendationsRequestPrivate(CodeGuruReviewerRequest::ListRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruReviewer::ListRecommendationsRequestPrivate
 * \brief The ListRecommendationsRequestPrivate class provides private implementation for ListRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a ListRecommendationsRequestPrivate object for CodeGuruReviewer \a action,
 * with public implementation \a q.
 */
ListRecommendationsRequestPrivate::ListRecommendationsRequestPrivate(
    const CodeGuruReviewerRequest::Action action, ListRecommendationsRequest * const q)
    : CodeGuruReviewerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecommendationsRequest
 * class' copy constructor.
 */
ListRecommendationsRequestPrivate::ListRecommendationsRequestPrivate(
    const ListRecommendationsRequestPrivate &other, ListRecommendationsRequest * const q)
    : CodeGuruReviewerRequestPrivate(other, q)
{

}

} // namespace CodeGuruReviewer
} // namespace QtAws
