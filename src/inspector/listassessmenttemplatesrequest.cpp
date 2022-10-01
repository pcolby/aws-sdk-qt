// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassessmenttemplatesrequest.h"
#include "listassessmenttemplatesrequest_p.h"
#include "listassessmenttemplatesresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentTemplatesRequest
 * \brief The ListAssessmentTemplatesRequest class provides an interface for Inspector ListAssessmentTemplates requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssessmentTemplatesRequest::ListAssessmentTemplatesRequest(const ListAssessmentTemplatesRequest &other)
    : InspectorRequest(new ListAssessmentTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssessmentTemplatesRequest object.
 */
ListAssessmentTemplatesRequest::ListAssessmentTemplatesRequest()
    : InspectorRequest(new ListAssessmentTemplatesRequestPrivate(InspectorRequest::ListAssessmentTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssessmentTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssessmentTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssessmentTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListAssessmentTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::ListAssessmentTemplatesRequestPrivate
 * \brief The ListAssessmentTemplatesRequestPrivate class provides private implementation for ListAssessmentTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListAssessmentTemplatesRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
ListAssessmentTemplatesRequestPrivate::ListAssessmentTemplatesRequestPrivate(
    const InspectorRequest::Action action, ListAssessmentTemplatesRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssessmentTemplatesRequest
 * class' copy constructor.
 */
ListAssessmentTemplatesRequestPrivate::ListAssessmentTemplatesRequestPrivate(
    const ListAssessmentTemplatesRequestPrivate &other, ListAssessmentTemplatesRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
