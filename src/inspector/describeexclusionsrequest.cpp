// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexclusionsrequest.h"
#include "describeexclusionsrequest_p.h"
#include "describeexclusionsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeExclusionsRequest
 * \brief The DescribeExclusionsRequest class provides an interface for Inspector DescribeExclusions requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeExclusions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExclusionsRequest::DescribeExclusionsRequest(const DescribeExclusionsRequest &other)
    : InspectorRequest(new DescribeExclusionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExclusionsRequest object.
 */
DescribeExclusionsRequest::DescribeExclusionsRequest()
    : InspectorRequest(new DescribeExclusionsRequestPrivate(InspectorRequest::DescribeExclusionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExclusionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExclusionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExclusionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExclusionsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeExclusionsRequestPrivate
 * \brief The DescribeExclusionsRequestPrivate class provides private implementation for DescribeExclusionsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeExclusionsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeExclusionsRequestPrivate::DescribeExclusionsRequestPrivate(
    const InspectorRequest::Action action, DescribeExclusionsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExclusionsRequest
 * class' copy constructor.
 */
DescribeExclusionsRequestPrivate::DescribeExclusionsRequestPrivate(
    const DescribeExclusionsRequestPrivate &other, DescribeExclusionsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
