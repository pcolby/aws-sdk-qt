// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
