// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createautoscalingconfigurationrequest.h"
#include "createautoscalingconfigurationrequest_p.h"
#include "createautoscalingconfigurationresponse.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::CreateAutoScalingConfigurationRequest
 * \brief The CreateAutoScalingConfigurationRequest class provides an interface for AppRunner CreateAutoScalingConfiguration requests.
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
 * \sa AppRunnerClient::createAutoScalingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAutoScalingConfigurationRequest::CreateAutoScalingConfigurationRequest(const CreateAutoScalingConfigurationRequest &other)
    : AppRunnerRequest(new CreateAutoScalingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAutoScalingConfigurationRequest object.
 */
CreateAutoScalingConfigurationRequest::CreateAutoScalingConfigurationRequest()
    : AppRunnerRequest(new CreateAutoScalingConfigurationRequestPrivate(AppRunnerRequest::CreateAutoScalingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAutoScalingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAutoScalingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAutoScalingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateAutoScalingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AppRunner::CreateAutoScalingConfigurationRequestPrivate
 * \brief The CreateAutoScalingConfigurationRequestPrivate class provides private implementation for CreateAutoScalingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a CreateAutoScalingConfigurationRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
CreateAutoScalingConfigurationRequestPrivate::CreateAutoScalingConfigurationRequestPrivate(
    const AppRunnerRequest::Action action, CreateAutoScalingConfigurationRequest * const q)
    : AppRunnerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAutoScalingConfigurationRequest
 * class' copy constructor.
 */
CreateAutoScalingConfigurationRequestPrivate::CreateAutoScalingConfigurationRequestPrivate(
    const CreateAutoScalingConfigurationRequestPrivate &other, CreateAutoScalingConfigurationRequest * const q)
    : AppRunnerRequestPrivate(other, q)
{

}

} // namespace AppRunner
} // namespace QtAws
