// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteenvironmentmembershiprequest.h"
#include "deleteenvironmentmembershiprequest_p.h"
#include "deleteenvironmentmembershipresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::DeleteEnvironmentMembershipRequest
 * \brief The DeleteEnvironmentMembershipRequest class provides an interface for Cloud9 DeleteEnvironmentMembership requests.
 *
 * \inmodule QtAwsCloud9
 *
 *  <fullname>Cloud9</fullname>
 * 
 *  Cloud9 is a collection of tools that you can use to code, build, run, test, debug, and release software in the
 * 
 *  cloud>
 * 
 *  For more information about Cloud9, see the <a href="https://docs.aws.amazon.com/cloud9/latest/user-guide">Cloud9 User
 * 
 *  Guide</a>>
 * 
 *  Cloud9 supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>CreateEnvironmentEC2</code>: Creates an Cloud9 development environment, launches an Amazon EC2 instance, and then
 *  connects from the instance to the
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
 *  <code>ListTagsForResource</code>: Gets the tags for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>TagResource</code>: Adds tags to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>UntagResource</code>: Removes tags from an
 * 
 *  environment> </li> <li>
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
 * Constructs a copy of \a other.
 */
DeleteEnvironmentMembershipRequest::DeleteEnvironmentMembershipRequest(const DeleteEnvironmentMembershipRequest &other)
    : Cloud9Request(new DeleteEnvironmentMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEnvironmentMembershipRequest object.
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
 * Returns a DeleteEnvironmentMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEnvironmentMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEnvironmentMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::Cloud9::DeleteEnvironmentMembershipRequestPrivate
 * \brief The DeleteEnvironmentMembershipRequestPrivate class provides private implementation for DeleteEnvironmentMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a DeleteEnvironmentMembershipRequestPrivate object for Cloud9 \a action,
 * with public implementation \a q.
 */
DeleteEnvironmentMembershipRequestPrivate::DeleteEnvironmentMembershipRequestPrivate(
    const Cloud9Request::Action action, DeleteEnvironmentMembershipRequest * const q)
    : Cloud9RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEnvironmentMembershipRequest
 * class' copy constructor.
 */
DeleteEnvironmentMembershipRequestPrivate::DeleteEnvironmentMembershipRequestPrivate(
    const DeleteEnvironmentMembershipRequestPrivate &other, DeleteEnvironmentMembershipRequest * const q)
    : Cloud9RequestPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
