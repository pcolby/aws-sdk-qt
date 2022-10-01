// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectionrequest.h"
#include "createconnectionrequest_p.h"
#include "createconnectionresponse.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::CreateConnectionRequest
 * \brief The CreateConnectionRequest class provides an interface for AppRunner CreateConnection requests.
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
 * \sa AppRunnerClient::createConnection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectionRequest::CreateConnectionRequest(const CreateConnectionRequest &other)
    : AppRunnerRequest(new CreateConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectionRequest object.
 */
CreateConnectionRequest::CreateConnectionRequest()
    : AppRunnerRequest(new CreateConnectionRequestPrivate(AppRunnerRequest::CreateConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::AppRunner::CreateConnectionRequestPrivate
 * \brief The CreateConnectionRequestPrivate class provides private implementation for CreateConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a CreateConnectionRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const AppRunnerRequest::Action action, CreateConnectionRequest * const q)
    : AppRunnerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectionRequest
 * class' copy constructor.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const CreateConnectionRequestPrivate &other, CreateConnectionRequest * const q)
    : AppRunnerRequestPrivate(other, q)
{

}

} // namespace AppRunner
} // namespace QtAws
