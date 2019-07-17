/*
    Copyright 2013-2019 Paul Colby

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

#include "describeenvironmentstatusrequest.h"
#include "describeenvironmentstatusrequest_p.h"
#include "describeenvironmentstatusresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::DescribeEnvironmentStatusRequest
 * \brief The DescribeEnvironmentStatusRequest class provides an interface for Cloud9 DescribeEnvironmentStatus requests.
 *
 * \inmodule QtAwsCloud9
 *
 *  <fullname>AWS Cloud9</fullname>
 * 
 *  AWS Cloud9 is a collection of tools that you can use to code, build, run, test, debug, and release software in the
 * 
 *  cloud>
 * 
 *  For more information about AWS Cloud9, see the <a href="https://docs.aws.amazon.com/cloud9/latest/user-guide">AWS Cloud9
 *  User
 * 
 *  Guide</a>>
 * 
 *  AWS Cloud9 supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>CreateEnvironmentEC2</code>: Creates an AWS Cloud9 development environment, launches an Amazon EC2 instance, and
 *  then connects from the instance to the
 * 
 *  environment> </li> <li>
 * 
 *  <code>CreateEnvironmentMembership</code>: Adds an environment member to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2 instance is connected to the environment, also
 *  terminates the
 * 
 *  instance> </li> <li>
 * 
 *  <code>DeleteEnvironmentMembership</code>: Deletes an environment member from an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironmentMemberships</code>: Gets information about environment members for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironments</code>: Gets information about
 * 
 *  environments> </li> <li>
 * 
 *  <code>DescribeEnvironmentStatus</code>: Gets status information for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>ListEnvironments</code>: Gets a list of environment
 * 
 *  identifiers> </li> <li>
 * 
 *  <code>UpdateEnvironment</code>: Changes the settings of an existing
 * 
 *  environment> </li> <li>
 * 
 *  <code>UpdateEnvironmentMembership</code>: Changes the settings of an existing environment member for an
 *
 * \sa Cloud9Client::describeEnvironmentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEnvironmentStatusRequest::DescribeEnvironmentStatusRequest(const DescribeEnvironmentStatusRequest &other)
    : Cloud9Request(new DescribeEnvironmentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEnvironmentStatusRequest object.
 */
DescribeEnvironmentStatusRequest::DescribeEnvironmentStatusRequest()
    : Cloud9Request(new DescribeEnvironmentStatusRequestPrivate(Cloud9Request::DescribeEnvironmentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEnvironmentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEnvironmentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEnvironmentStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Cloud9::DescribeEnvironmentStatusRequestPrivate
 * \brief The DescribeEnvironmentStatusRequestPrivate class provides private implementation for DescribeEnvironmentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a DescribeEnvironmentStatusRequestPrivate object for Cloud9 \a action,
 * with public implementation \a q.
 */
DescribeEnvironmentStatusRequestPrivate::DescribeEnvironmentStatusRequestPrivate(
    const Cloud9Request::Action action, DescribeEnvironmentStatusRequest * const q)
    : Cloud9RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentStatusRequest
 * class' copy constructor.
 */
DescribeEnvironmentStatusRequestPrivate::DescribeEnvironmentStatusRequestPrivate(
    const DescribeEnvironmentStatusRequestPrivate &other, DescribeEnvironmentStatusRequest * const q)
    : Cloud9RequestPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
