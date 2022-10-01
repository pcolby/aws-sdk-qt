// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdeploymentrequest.h"
#include "startdeploymentrequest_p.h"
#include "startdeploymentresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StartDeploymentRequest
 * \brief The StartDeploymentRequest class provides an interface for Amplify StartDeployment requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::startDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
StartDeploymentRequest::StartDeploymentRequest(const StartDeploymentRequest &other)
    : AmplifyRequest(new StartDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDeploymentRequest object.
 */
StartDeploymentRequest::StartDeploymentRequest()
    : AmplifyRequest(new StartDeploymentRequestPrivate(AmplifyRequest::StartDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool StartDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StartDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::StartDeploymentRequestPrivate
 * \brief The StartDeploymentRequestPrivate class provides private implementation for StartDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StartDeploymentRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
StartDeploymentRequestPrivate::StartDeploymentRequestPrivate(
    const AmplifyRequest::Action action, StartDeploymentRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDeploymentRequest
 * class' copy constructor.
 */
StartDeploymentRequestPrivate::StartDeploymentRequestPrivate(
    const StartDeploymentRequestPrivate &other, StartDeploymentRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
