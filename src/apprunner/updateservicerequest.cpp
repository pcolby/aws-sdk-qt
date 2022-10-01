// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>App Runner</fullname>
 * 
 *  App Runner is an application service that provides a fast, simple, and cost-effective way to go directly from an
 *  existing container image or source code to a running service in the Amazon Web Services Cloud in seconds. You don't need
 *  to learn new technologies, decide which compute service to use, or understand how to provision and configure Amazon Web
 *  Services
 * 
 *  resources>
 * 
 *  App Runner connects directly to your container registry or source code repository. It provides an automatic delivery
 *  pipeline with fully managed operations, high performance, scalability, and
 * 
 *  security>
 * 
 *  For more information about App Runner, see the <a href="https://docs.aws.amazon.com/apprunner/latest/dg/">App Runner
 *  Developer Guide</a>. For release information, see the <a
 *  href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">App Runner Release
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
 *  href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">App Runner endpoints and quotas</a> in the <i>Amazon
 *  Web Services General
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
