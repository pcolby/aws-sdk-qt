// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendenvironmentrequest.h"
#include "deletebackendenvironmentrequest_p.h"
#include "deletebackendenvironmentresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteBackendEnvironmentRequest
 * \brief The DeleteBackendEnvironmentRequest class provides an interface for Amplify DeleteBackendEnvironment requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteBackendEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendEnvironmentRequest::DeleteBackendEnvironmentRequest(const DeleteBackendEnvironmentRequest &other)
    : AmplifyRequest(new DeleteBackendEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendEnvironmentRequest object.
 */
DeleteBackendEnvironmentRequest::DeleteBackendEnvironmentRequest()
    : AmplifyRequest(new DeleteBackendEnvironmentRequestPrivate(AmplifyRequest::DeleteBackendEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteBackendEnvironmentRequestPrivate
 * \brief The DeleteBackendEnvironmentRequestPrivate class provides private implementation for DeleteBackendEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteBackendEnvironmentRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteBackendEnvironmentRequestPrivate::DeleteBackendEnvironmentRequestPrivate(
    const AmplifyRequest::Action action, DeleteBackendEnvironmentRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendEnvironmentRequest
 * class' copy constructor.
 */
DeleteBackendEnvironmentRequestPrivate::DeleteBackendEnvironmentRequestPrivate(
    const DeleteBackendEnvironmentRequestPrivate &other, DeleteBackendEnvironmentRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
