// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcodereviewrequest.h"
#include "createcodereviewrequest_p.h"
#include "createcodereviewresponse.h"
#include "codegurureviewerrequest_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::CreateCodeReviewRequest
 * \brief The CreateCodeReviewRequest class provides an interface for CodeGuruReviewer CreateCodeReview requests.
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
 * \sa CodeGuruReviewerClient::createCodeReview
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCodeReviewRequest::CreateCodeReviewRequest(const CreateCodeReviewRequest &other)
    : CodeGuruReviewerRequest(new CreateCodeReviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCodeReviewRequest object.
 */
CreateCodeReviewRequest::CreateCodeReviewRequest()
    : CodeGuruReviewerRequest(new CreateCodeReviewRequestPrivate(CodeGuruReviewerRequest::CreateCodeReviewAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCodeReviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCodeReviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCodeReviewRequest::response(QNetworkReply * const reply) const
{
    return new CreateCodeReviewResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruReviewer::CreateCodeReviewRequestPrivate
 * \brief The CreateCodeReviewRequestPrivate class provides private implementation for CreateCodeReviewRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a CreateCodeReviewRequestPrivate object for CodeGuruReviewer \a action,
 * with public implementation \a q.
 */
CreateCodeReviewRequestPrivate::CreateCodeReviewRequestPrivate(
    const CodeGuruReviewerRequest::Action action, CreateCodeReviewRequest * const q)
    : CodeGuruReviewerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCodeReviewRequest
 * class' copy constructor.
 */
CreateCodeReviewRequestPrivate::CreateCodeReviewRequestPrivate(
    const CreateCodeReviewRequestPrivate &other, CreateCodeReviewRequest * const q)
    : CodeGuruReviewerRequestPrivate(other, q)
{

}

} // namespace CodeGuruReviewer
} // namespace QtAws
