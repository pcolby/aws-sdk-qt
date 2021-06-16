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
