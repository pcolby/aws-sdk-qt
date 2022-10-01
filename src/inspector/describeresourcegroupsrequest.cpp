// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourcegroupsrequest.h"
#include "describeresourcegroupsrequest_p.h"
#include "describeresourcegroupsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeResourceGroupsRequest
 * \brief The DescribeResourceGroupsRequest class provides an interface for Inspector DescribeResourceGroups requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeResourceGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResourceGroupsRequest::DescribeResourceGroupsRequest(const DescribeResourceGroupsRequest &other)
    : InspectorRequest(new DescribeResourceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResourceGroupsRequest object.
 */
DescribeResourceGroupsRequest::DescribeResourceGroupsRequest()
    : InspectorRequest(new DescribeResourceGroupsRequestPrivate(InspectorRequest::DescribeResourceGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResourceGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeResourceGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResourceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourceGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeResourceGroupsRequestPrivate
 * \brief The DescribeResourceGroupsRequestPrivate class provides private implementation for DescribeResourceGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeResourceGroupsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeResourceGroupsRequestPrivate::DescribeResourceGroupsRequestPrivate(
    const InspectorRequest::Action action, DescribeResourceGroupsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourceGroupsRequest
 * class' copy constructor.
 */
DescribeResourceGroupsRequestPrivate::DescribeResourceGroupsRequestPrivate(
    const DescribeResourceGroupsRequestPrivate &other, DescribeResourceGroupsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
