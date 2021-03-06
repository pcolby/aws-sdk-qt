/*
    Copyright 2013-2021 Paul Colby

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

#include "describeservicerequest.h"
#include "describeservicerequest_p.h"
#include "describeserviceresponse.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::DescribeServiceRequest
 * \brief The DescribeServiceRequest class provides an interface for AppRunner DescribeService requests.
 *
 * \inmodule QtAwsAppRunner
 *
 *  <fullname>AWS App Runner</fullname>
 * 
 *  AWS App Runner is an application service that provides a fast, simple, and cost-effective way to go directly from an
 *  existing container image or source code to a running service in the AWS cloud in seconds. You don't need to learn new
 *  technologies, decide which compute service to use, or understand how to provision and configure AWS
 * 
 *  resources>
 * 
 *  App Runner connects directly to your container registry or source code repository. It provides an automatic delivery
 *  pipeline with fully managed operations, high performance, scalability, and
 * 
 *  security>
 * 
 *  For more information about App Runner, see the <a href="https://docs.aws.amazon.com/apprunner/latest/dg/">AWS App Runner
 *  Developer Guide</a>. For release information, see the <a
 *  href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">AWS App Runner Release
 * 
 *  Notes</a>>
 * 
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that you can use to access the API, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that App Runner supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">AWS App Runner endpoints and quotas</a> in the
 *  <i>AWS General
 *
 * \sa AppRunnerClient::describeService
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceRequest::DescribeServiceRequest(const DescribeServiceRequest &other)
    : AppRunnerRequest(new DescribeServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceRequest object.
 */
DescribeServiceRequest::DescribeServiceRequest()
    : AppRunnerRequest(new DescribeServiceRequestPrivate(AppRunnerRequest::DescribeServiceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceResponse(*this, reply);
}

/*!
 * \class QtAws::AppRunner::DescribeServiceRequestPrivate
 * \brief The DescribeServiceRequestPrivate class provides private implementation for DescribeServiceRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a DescribeServiceRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
DescribeServiceRequestPrivate::DescribeServiceRequestPrivate(
    const AppRunnerRequest::Action action, DescribeServiceRequest * const q)
    : AppRunnerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceRequest
 * class' copy constructor.
 */
DescribeServiceRequestPrivate::DescribeServiceRequestPrivate(
    const DescribeServiceRequestPrivate &other, DescribeServiceRequest * const q)
    : AppRunnerRequestPrivate(other, q)
{

}

} // namespace AppRunner
} // namespace QtAws
