/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
