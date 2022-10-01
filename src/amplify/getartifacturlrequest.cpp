// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getartifacturlrequest.h"
#include "getartifacturlrequest_p.h"
#include "getartifacturlresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetArtifactUrlRequest
 * \brief The GetArtifactUrlRequest class provides an interface for Amplify GetArtifactUrl requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getArtifactUrl
 */

/*!
 * Constructs a copy of \a other.
 */
GetArtifactUrlRequest::GetArtifactUrlRequest(const GetArtifactUrlRequest &other)
    : AmplifyRequest(new GetArtifactUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetArtifactUrlRequest object.
 */
GetArtifactUrlRequest::GetArtifactUrlRequest()
    : AmplifyRequest(new GetArtifactUrlRequestPrivate(AmplifyRequest::GetArtifactUrlAction, this))
{

}

/*!
 * \reimp
 */
bool GetArtifactUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetArtifactUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetArtifactUrlRequest::response(QNetworkReply * const reply) const
{
    return new GetArtifactUrlResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetArtifactUrlRequestPrivate
 * \brief The GetArtifactUrlRequestPrivate class provides private implementation for GetArtifactUrlRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetArtifactUrlRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetArtifactUrlRequestPrivate::GetArtifactUrlRequestPrivate(
    const AmplifyRequest::Action action, GetArtifactUrlRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetArtifactUrlRequest
 * class' copy constructor.
 */
GetArtifactUrlRequestPrivate::GetArtifactUrlRequestPrivate(
    const GetArtifactUrlRequestPrivate &other, GetArtifactUrlRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
