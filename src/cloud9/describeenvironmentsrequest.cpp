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

#include "describeenvironmentsrequest.h"
#include "describeenvironmentsrequest_p.h"
#include "describeenvironmentsresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::DescribeEnvironmentsRequest
 *
 * \brief The DescribeEnvironmentsRequest class encapsulates Cloud9 DescribeEnvironments requests.
 *
 * \ingroup Cloud9
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
 * \sa Cloud9Client::describeEnvironments
 */

/*!
 * @brief  Constructs a new DescribeEnvironmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEnvironmentsRequest::DescribeEnvironmentsRequest(const DescribeEnvironmentsRequest &other)
    : Cloud9Request(new DescribeEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeEnvironmentsRequest object.
 */
DescribeEnvironmentsRequest::DescribeEnvironmentsRequest()
    : Cloud9Request(new DescribeEnvironmentsRequestPrivate(Cloud9Request::DescribeEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeEnvironmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEnvironmentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeEnvironmentsRequestPrivate
 *
 * @brief  Private implementation for DescribeEnvironmentsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentsRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public DescribeEnvironmentsRequest instance.
 */
DescribeEnvironmentsRequestPrivate::DescribeEnvironmentsRequestPrivate(
    const Cloud9Request::Action action, DescribeEnvironmentsRequest * const q)
    : Cloud9RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEnvironmentsRequest instance.
 */
DescribeEnvironmentsRequestPrivate::DescribeEnvironmentsRequestPrivate(
    const DescribeEnvironmentsRequestPrivate &other, DescribeEnvironmentsRequest * const q)
    : Cloud9RequestPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
