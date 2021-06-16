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
