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

#include "listassessmentrunsrequest.h"
#include "listassessmentrunsrequest_p.h"
#include "listassessmentrunsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentRunsRequest
 * \brief The ListAssessmentRunsRequest class provides an interface for Inspector ListAssessmentRuns requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentRuns
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssessmentRunsRequest::ListAssessmentRunsRequest(const ListAssessmentRunsRequest &other)
    : InspectorRequest(new ListAssessmentRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssessmentRunsRequest object.
 */
ListAssessmentRunsRequest::ListAssessmentRunsRequest()
    : InspectorRequest(new ListAssessmentRunsRequestPrivate(InspectorRequest::ListAssessmentRunsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssessmentRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssessmentRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssessmentRunsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssessmentRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::ListAssessmentRunsRequestPrivate
 * \brief The ListAssessmentRunsRequestPrivate class provides private implementation for ListAssessmentRunsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListAssessmentRunsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
ListAssessmentRunsRequestPrivate::ListAssessmentRunsRequestPrivate(
    const InspectorRequest::Action action, ListAssessmentRunsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssessmentRunsRequest
 * class' copy constructor.
 */
ListAssessmentRunsRequestPrivate::ListAssessmentRunsRequestPrivate(
    const ListAssessmentRunsRequestPrivate &other, ListAssessmentRunsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
