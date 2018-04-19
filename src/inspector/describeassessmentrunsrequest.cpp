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

#include "describeassessmentrunsrequest.h"
#include "describeassessmentrunsrequest_p.h"
#include "describeassessmentrunsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentRunsRequest
 * \brief The DescribeAssessmentRunsRequest class provides an interface for Inspector DescribeAssessmentRuns requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentRuns
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssessmentRunsRequest::DescribeAssessmentRunsRequest(const DescribeAssessmentRunsRequest &other)
    : InspectorRequest(new DescribeAssessmentRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssessmentRunsRequest object.
 */
DescribeAssessmentRunsRequest::DescribeAssessmentRunsRequest()
    : InspectorRequest(new DescribeAssessmentRunsRequestPrivate(InspectorRequest::DescribeAssessmentRunsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssessmentRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssessmentRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssessmentRunsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentRunsRequestPrivate
 * \brief The DescribeAssessmentRunsRequestPrivate class provides private implementation for DescribeAssessmentRunsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 *
 * Constructs a DescribeAssessmentRunsRequestPrivate object for Inspector \a action with,
 * public implementation \a q.
 */
DescribeAssessmentRunsRequestPrivate::DescribeAssessmentRunsRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentRunsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentRunsRequest
 * class' copy constructor.
 */
DescribeAssessmentRunsRequestPrivate::DescribeAssessmentRunsRequestPrivate(
    const DescribeAssessmentRunsRequestPrivate &other, DescribeAssessmentRunsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
