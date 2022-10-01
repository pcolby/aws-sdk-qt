// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startjobrequest.h"
#include "startjobrequest_p.h"
#include "startjobresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StartJobRequest
 * \brief The StartJobRequest class provides an interface for Amplify StartJob requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::startJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartJobRequest::StartJobRequest(const StartJobRequest &other)
    : AmplifyRequest(new StartJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartJobRequest object.
 */
StartJobRequest::StartJobRequest()
    : AmplifyRequest(new StartJobRequestPrivate(AmplifyRequest::StartJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartJobRequest::response(QNetworkReply * const reply) const
{
    return new StartJobResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::StartJobRequestPrivate
 * \brief The StartJobRequestPrivate class provides private implementation for StartJobRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StartJobRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
StartJobRequestPrivate::StartJobRequestPrivate(
    const AmplifyRequest::Action action, StartJobRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartJobRequest
 * class' copy constructor.
 */
StartJobRequestPrivate::StartJobRequestPrivate(
    const StartJobRequestPrivate &other, StartJobRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
