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

#include "getbackendenvironmentrequest.h"
#include "getbackendenvironmentrequest_p.h"
#include "getbackendenvironmentresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetBackendEnvironmentRequest
 * \brief The GetBackendEnvironmentRequest class provides an interface for Amplify GetBackendEnvironment requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getBackendEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendEnvironmentRequest::GetBackendEnvironmentRequest(const GetBackendEnvironmentRequest &other)
    : AmplifyRequest(new GetBackendEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendEnvironmentRequest object.
 */
GetBackendEnvironmentRequest::GetBackendEnvironmentRequest()
    : AmplifyRequest(new GetBackendEnvironmentRequestPrivate(AmplifyRequest::GetBackendEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetBackendEnvironmentRequestPrivate
 * \brief The GetBackendEnvironmentRequestPrivate class provides private implementation for GetBackendEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetBackendEnvironmentRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetBackendEnvironmentRequestPrivate::GetBackendEnvironmentRequestPrivate(
    const AmplifyRequest::Action action, GetBackendEnvironmentRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendEnvironmentRequest
 * class' copy constructor.
 */
GetBackendEnvironmentRequestPrivate::GetBackendEnvironmentRequestPrivate(
    const GetBackendEnvironmentRequestPrivate &other, GetBackendEnvironmentRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
