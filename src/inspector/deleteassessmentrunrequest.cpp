/*
    Copyright 2013-2021 Paul Colby

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
