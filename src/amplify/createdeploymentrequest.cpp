// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeploymentrequest.h"
#include "createdeploymentrequest_p.h"
#include "createdeploymentresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateDeploymentRequest
 * \brief The CreateDeploymentRequest class provides an interface for Amplify CreateDeployment requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeploymentRequest::CreateDeploymentRequest(const CreateDeploymentRequest &other)
    : AmplifyRequest(new CreateDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeploymentRequest object.
 */
CreateDeploymentRequest::CreateDeploymentRequest()
    : AmplifyRequest(new CreateDeploymentRequestPrivate(AmplifyRequest::CreateDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::CreateDeploymentRequestPrivate
 * \brief The CreateDeploymentRequestPrivate class provides private implementation for CreateDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateDeploymentRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
CreateDeploymentRequestPrivate::CreateDeploymentRequestPrivate(
    const AmplifyRequest::Action action, CreateDeploymentRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeploymentRequest
 * class' copy constructor.
 */
CreateDeploymentRequestPrivate::CreateDeploymentRequestPrivate(
    const CreateDeploymentRequestPrivate &other, CreateDeploymentRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
