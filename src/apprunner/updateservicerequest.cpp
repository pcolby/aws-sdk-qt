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

#include "updateservicerequest.h"
#include "updateservicerequest_p.h"
#include "updateserviceresponse.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::UpdateServiceRequest
 * \brief The UpdateServiceRequest class provides an interface for AppRunner UpdateService requests.
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
 * \sa AppRunnerClient::updateService
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServiceRequest::UpdateServiceRequest(const UpdateServiceRequest &other)
    : AppRunnerRequest(new UpdateServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServiceRequest object.
 */
UpdateServiceRequest::UpdateServiceRequest()
    : AppRunnerRequest(new UpdateServiceRequestPrivate(AppRunnerRequest::UpdateServiceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceResponse(*this, reply);
}

/*!
 * \class QtAws::AppRunner::UpdateServiceRequestPrivate
 * \brief The UpdateServiceRequestPrivate class provides private implementation for UpdateServiceRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a UpdateServiceRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const AppRunnerRequest::Action action, UpdateServiceRequest * const q)
    : AppRunnerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceRequest
 * class' copy constructor.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const UpdateServiceRequestPrivate &other, UpdateServiceRequest * const q)
    : AppRunnerRequestPrivate(other, q)
{

}

} // namespace AppRunner
} // namespace QtAws
