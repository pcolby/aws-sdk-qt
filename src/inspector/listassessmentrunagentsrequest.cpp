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

#include "listassessmentrunagentsrequest.h"
#include "listassessmentrunagentsrequest_p.h"
#include "listassessmentrunagentsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentRunAgentsRequest
 * \brief The ListAssessmentRunAgentsRequest class provides an interface for Inspector ListAssessmentRunAgents requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentRunAgents
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssessmentRunAgentsRequest::ListAssessmentRunAgentsRequest(const ListAssessmentRunAgentsRequest &other)
    : InspectorRequest(new ListAssessmentRunAgentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssessmentRunAgentsRequest object.
 */
ListAssessmentRunAgentsRequest::ListAssessmentRunAgentsRequest()
    : InspectorRequest(new ListAssessmentRunAgentsRequestPrivate(InspectorRequest::ListAssessmentRunAgentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssessmentRunAgentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssessmentRunAgentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssessmentRunAgentsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssessmentRunAgentsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::ListAssessmentRunAgentsRequestPrivate
 * \brief The ListAssessmentRunAgentsRequestPrivate class provides private implementation for ListAssessmentRunAgentsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListAssessmentRunAgentsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
ListAssessmentRunAgentsRequestPrivate::ListAssessmentRunAgentsRequestPrivate(
    const InspectorRequest::Action action, ListAssessmentRunAgentsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssessmentRunAgentsRequest
 * class' copy constructor.
 */
ListAssessmentRunAgentsRequestPrivate::ListAssessmentRunAgentsRequestPrivate(
    const ListAssessmentRunAgentsRequestPrivate &other, ListAssessmentRunAgentsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
