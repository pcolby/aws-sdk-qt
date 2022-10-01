// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassessmentrunrequest.h"
#include "deleteassessmentrunrequest_p.h"
#include "deleteassessmentrunresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentRunRequest
 * \brief The DeleteAssessmentRunRequest class provides an interface for Inspector DeleteAssessmentRun requests.
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
 * Constructs a copy of \a other.
 */
DeleteAssessmentRunRequest::DeleteAssessmentRunRequest(const DeleteAssessmentRunRequest &other)
    : InspectorRequest(new DeleteAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssessmentRunRequest object.
 */
DeleteAssessmentRunRequest::DeleteAssessmentRunRequest()
    : InspectorRequest(new DeleteAssessmentRunRequestPrivate(InspectorRequest::DeleteAssessmentRunAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssessmentRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssessmentRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssessmentRunResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DeleteAssessmentRunRequestPrivate
 * \brief The DeleteAssessmentRunRequestPrivate class provides private implementation for DeleteAssessmentRunRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DeleteAssessmentRunRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DeleteAssessmentRunRequestPrivate::DeleteAssessmentRunRequestPrivate(
    const InspectorRequest::Action action, DeleteAssessmentRunRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssessmentRunRequest
 * class' copy constructor.
 */
DeleteAssessmentRunRequestPrivate::DeleteAssessmentRunRequestPrivate(
    const DeleteAssessmentRunRequestPrivate &other, DeleteAssessmentRunRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
