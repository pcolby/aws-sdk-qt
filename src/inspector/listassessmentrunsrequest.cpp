// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
