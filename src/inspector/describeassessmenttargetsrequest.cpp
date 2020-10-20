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

#include "describeassessmenttargetsrequest.h"
#include "describeassessmenttargetsrequest_p.h"
#include "describeassessmenttargetsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentTargetsRequest
 * \brief The DescribeAssessmentTargetsRequest class provides an interface for Inspector DescribeAssessmentTargets requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentTargets
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssessmentTargetsRequest::DescribeAssessmentTargetsRequest(const DescribeAssessmentTargetsRequest &other)
    : InspectorRequest(new DescribeAssessmentTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssessmentTargetsRequest object.
 */
DescribeAssessmentTargetsRequest::DescribeAssessmentTargetsRequest()
    : InspectorRequest(new DescribeAssessmentTargetsRequestPrivate(InspectorRequest::DescribeAssessmentTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssessmentTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssessmentTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssessmentTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentTargetsRequestPrivate
 * \brief The DescribeAssessmentTargetsRequestPrivate class provides private implementation for DescribeAssessmentTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeAssessmentTargetsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeAssessmentTargetsRequestPrivate::DescribeAssessmentTargetsRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentTargetsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentTargetsRequest
 * class' copy constructor.
 */
DescribeAssessmentTargetsRequestPrivate::DescribeAssessmentTargetsRequestPrivate(
    const DescribeAssessmentTargetsRequestPrivate &other, DescribeAssessmentTargetsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
