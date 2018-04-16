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

#include "deleteenvironmentmembershiprequest.h"
#include "deleteenvironmentmembershiprequest_p.h"
#include "deleteenvironmentmembershipresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::DeleteEnvironmentMembershipRequest
 *
 * \brief The DeleteEnvironmentMembershipRequest class encapsulates Cloud9 DeleteEnvironmentMembership requests.
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
 * \sa Cloud9Client::deleteEnvironmentMembership
 */

/*!
 * @brief  Constructs a new DeleteEnvironmentMembershipRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEnvironmentMembershipRequest::DeleteEnvironmentMembershipRequest(const DeleteEnvironmentMembershipRequest &other)
    : Cloud9Request(new DeleteEnvironmentMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteEnvironmentMembershipRequest object.
 */
DeleteEnvironmentMembershipRequest::DeleteEnvironmentMembershipRequest()
    : Cloud9Request(new DeleteEnvironmentMembershipRequestPrivate(Cloud9Request::DeleteEnvironmentMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEnvironmentMembershipRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteEnvironmentMembershipResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEnvironmentMembershipResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEnvironmentMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEnvironmentMembershipResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteEnvironmentMembershipRequestPrivate
 *
 * @brief  Private implementation for DeleteEnvironmentMembershipRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentMembershipRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public DeleteEnvironmentMembershipRequest instance.
 */
DeleteEnvironmentMembershipRequestPrivate::DeleteEnvironmentMembershipRequestPrivate(
    const Cloud9Request::Action action, DeleteEnvironmentMembershipRequest * const q)
    : Cloud9RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentMembershipRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEnvironmentMembershipRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEnvironmentMembershipRequest instance.
 */
DeleteEnvironmentMembershipRequestPrivate::DeleteEnvironmentMembershipRequestPrivate(
    const DeleteEnvironmentMembershipRequestPrivate &other, DeleteEnvironmentMembershipRequest * const q)
    : Cloud9RequestPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
