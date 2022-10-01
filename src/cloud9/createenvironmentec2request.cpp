// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createenvironmentec2request.h"
#include "createenvironmentec2request_p.h"
#include "createenvironmentec2response.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::CreateEnvironmentEC2Request
 * \brief The CreateEnvironmentEC2Request class provides an interface for Cloud9 CreateEnvironmentEC2 requests.
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
 * \sa Cloud9Client::createEnvironmentEC2
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEnvironmentEC2Request::CreateEnvironmentEC2Request(const CreateEnvironmentEC2Request &other)
    : Cloud9Request(new CreateEnvironmentEC2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEnvironmentEC2Request object.
 */
CreateEnvironmentEC2Request::CreateEnvironmentEC2Request()
    : Cloud9Request(new CreateEnvironmentEC2RequestPrivate(Cloud9Request::CreateEnvironmentEC2Action, this))
{

}

/*!
 * \reimp
 */
bool CreateEnvironmentEC2Request::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEnvironmentEC2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEnvironmentEC2Request::response(QNetworkReply * const reply) const
{
    return new CreateEnvironmentEC2Response(*this, reply);
}

/*!
 * \class QtAws::Cloud9::CreateEnvironmentEC2RequestPrivate
 * \brief The CreateEnvironmentEC2RequestPrivate class provides private implementation for CreateEnvironmentEC2Request.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a CreateEnvironmentEC2RequestPrivate object for Cloud9 \a action,
 * with public implementation \a q.
 */
CreateEnvironmentEC2RequestPrivate::CreateEnvironmentEC2RequestPrivate(
    const Cloud9Request::Action action, CreateEnvironmentEC2Request * const q)
    : Cloud9RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEnvironmentEC2Request
 * class' copy constructor.
 */
CreateEnvironmentEC2RequestPrivate::CreateEnvironmentEC2RequestPrivate(
    const CreateEnvironmentEC2RequestPrivate &other, CreateEnvironmentEC2Request * const q)
    : Cloud9RequestPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
