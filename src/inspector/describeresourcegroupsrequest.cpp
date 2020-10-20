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
