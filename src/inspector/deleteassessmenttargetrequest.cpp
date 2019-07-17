/*
    Copyright 2013-2019 Paul Colby

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
