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

#include "describerulespackagesrequest.h"
#include "describerulespackagesrequest_p.h"
#include "describerulespackagesresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeRulesPackagesRequest
 * \brief The DescribeRulesPackagesRequest class provides an interface for Inspector DescribeRulesPackages requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeRulesPackages
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRulesPackagesRequest::DescribeRulesPackagesRequest(const DescribeRulesPackagesRequest &other)
    : InspectorRequest(new DescribeRulesPackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRulesPackagesRequest object.
 */
DescribeRulesPackagesRequest::DescribeRulesPackagesRequest()
    : InspectorRequest(new DescribeRulesPackagesRequestPrivate(InspectorRequest::DescribeRulesPackagesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRulesPackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRulesPackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRulesPackagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRulesPackagesResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeRulesPackagesRequestPrivate
 * \brief The DescribeRulesPackagesRequestPrivate class provides private implementation for DescribeRulesPackagesRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeRulesPackagesRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeRulesPackagesRequestPrivate::DescribeRulesPackagesRequestPrivate(
    const InspectorRequest::Action action, DescribeRulesPackagesRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRulesPackagesRequest
 * class' copy constructor.
 */
DescribeRulesPackagesRequestPrivate::DescribeRulesPackagesRequestPrivate(
    const DescribeRulesPackagesRequestPrivate &other, DescribeRulesPackagesRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
