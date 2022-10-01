// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassessmenttargetrequest.h"
#include "deleteassessmenttargetrequest_p.h"
#include "deleteassessmenttargetresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentTargetRequest
 * \brief The DeleteAssessmentTargetRequest class provides an interface for Inspector DeleteAssessmentTarget requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentTarget
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssessmentTargetRequest::DeleteAssessmentTargetRequest(const DeleteAssessmentTargetRequest &other)
    : InspectorRequest(new DeleteAssessmentTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssessmentTargetRequest object.
 */
DeleteAssessmentTargetRequest::DeleteAssessmentTargetRequest()
    : InspectorRequest(new DeleteAssessmentTargetRequestPrivate(InspectorRequest::DeleteAssessmentTargetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssessmentTargetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssessmentTargetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssessmentTargetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssessmentTargetResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DeleteAssessmentTargetRequestPrivate
 * \brief The DeleteAssessmentTargetRequestPrivate class provides private implementation for DeleteAssessmentTargetRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DeleteAssessmentTargetRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DeleteAssessmentTargetRequestPrivate::DeleteAssessmentTargetRequestPrivate(
    const InspectorRequest::Action action, DeleteAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssessmentTargetRequest
 * class' copy constructor.
 */
DeleteAssessmentTargetRequestPrivate::DeleteAssessmentTargetRequestPrivate(
    const DeleteAssessmentTargetRequestPrivate &other, DeleteAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
