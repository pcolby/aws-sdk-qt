/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listassessmenttargetsrequest.h"
#include "listassessmenttargetsrequest_p.h"
#include "listassessmenttargetsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentTargetsRequest
 * \brief The ListAssessmentTargetsRequest class provides an interface for Inspector ListAssessmentTargets requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentTargets
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssessmentTargetsRequest::ListAssessmentTargetsRequest(const ListAssessmentTargetsRequest &other)
    : InspectorRequest(new ListAssessmentTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssessmentTargetsRequest object.
 */
ListAssessmentTargetsRequest::ListAssessmentTargetsRequest()
    : InspectorRequest(new ListAssessmentTargetsRequestPrivate(InspectorRequest::ListAssessmentTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssessmentTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssessmentTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssessmentTargetsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssessmentTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::ListAssessmentTargetsRequestPrivate
 * \brief The ListAssessmentTargetsRequestPrivate class provides private implementation for ListAssessmentTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 *
 * Constructs a ListAssessmentTargetsRequestPrivate object for Inspector \a action with,
 * public implementation \a q.
 */
ListAssessmentTargetsRequestPrivate::ListAssessmentTargetsRequestPrivate(
    const InspectorRequest::Action action, ListAssessmentTargetsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssessmentTargetsRequest
 * class' copy constructor.
 */
ListAssessmentTargetsRequestPrivate::ListAssessmentTargetsRequestPrivate(
    const ListAssessmentTargetsRequestPrivate &other, ListAssessmentTargetsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
