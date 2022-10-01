// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassessmenttargetrequest.h"
#include "updateassessmenttargetrequest_p.h"
#include "updateassessmenttargetresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::UpdateAssessmentTargetRequest
 * \brief The UpdateAssessmentTargetRequest class provides an interface for Inspector UpdateAssessmentTarget requests.
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
 * Constructs a copy of \a other.
 */
UpdateAssessmentTargetRequest::UpdateAssessmentTargetRequest(const UpdateAssessmentTargetRequest &other)
    : InspectorRequest(new UpdateAssessmentTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssessmentTargetRequest object.
 */
UpdateAssessmentTargetRequest::UpdateAssessmentTargetRequest()
    : InspectorRequest(new UpdateAssessmentTargetRequestPrivate(InspectorRequest::UpdateAssessmentTargetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssessmentTargetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssessmentTargetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssessmentTargetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssessmentTargetResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::UpdateAssessmentTargetRequestPrivate
 * \brief The UpdateAssessmentTargetRequestPrivate class provides private implementation for UpdateAssessmentTargetRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a UpdateAssessmentTargetRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
UpdateAssessmentTargetRequestPrivate::UpdateAssessmentTargetRequestPrivate(
    const InspectorRequest::Action action, UpdateAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssessmentTargetRequest
 * class' copy constructor.
 */
UpdateAssessmentTargetRequestPrivate::UpdateAssessmentTargetRequestPrivate(
    const UpdateAssessmentTargetRequestPrivate &other, UpdateAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
