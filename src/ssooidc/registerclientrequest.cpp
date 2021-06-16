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

#include "registerclientrequest.h"
#include "registerclientrequest_p.h"
#include "registerclientresponse.h"
#include "ssooidcrequest_p.h"

namespace QtAws {
namespace SSOOIDC {

/*!
 * \class QtAws::SSOOIDC::RegisterClientRequest
 * \brief The RegisterClientRequest class provides an interface for SSOOIDC RegisterClient requests.
 *
 * \inmodule QtAwsSSOOIDC
 *
 *  AWS Single Sign-On (SSO) OpenID Connect (OIDC) is a web service that enables a client (such as AWS CLI or a native
 *  application) to register with AWS SSO. The service also enables the client to fetch the user’s access token upon
 *  successful authentication and authorization with AWS SSO. This service conforms with the OAuth 2.0 based implementation
 *  of the device authorization grant standard (<a
 * 
 *  href="https://tools.ietf.org/html/rfc8628">https://tools.ietf.org/html/rfc8628</a>)>
 * 
 *  For general information about AWS SSO, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What is AWS Single Sign-On?</a> in the
 *  <i>AWS SSO User
 * 
 *  Guide</i>>
 * 
 *  This API reference guide describes the AWS SSO OIDC operations that you can call programatically and includes detailed
 *  information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms such as
 *  Java, Ruby, .Net, iOS, and Android. The SDKs provide a convenient way to create programmatic access to AWS SSO and other
 *  AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsooidcClient::registerClient
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterClientRequest::RegisterClientRequest(const RegisterClientRequest &other)
    : SsooidcRequest(new RegisterClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterClientRequest object.
 */
RegisterClientRequest::RegisterClientRequest()
    : SsooidcRequest(new RegisterClientRequestPrivate(SsooidcRequest::RegisterClientAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterClientRequest::response(QNetworkReply * const reply) const
{
    return new RegisterClientResponse(*this, reply);
}

/*!
 * \class QtAws::SSOOIDC::RegisterClientRequestPrivate
 * \brief The RegisterClientRequestPrivate class provides private implementation for RegisterClientRequest.
 * \internal
 *
 * \inmodule QtAwsSSOOIDC
 */

/*!
 * Constructs a RegisterClientRequestPrivate object for Ssooidc \a action,
 * with public implementation \a q.
 */
RegisterClientRequestPrivate::RegisterClientRequestPrivate(
    const SsooidcRequest::Action action, RegisterClientRequest * const q)
    : SsooidcRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterClientRequest
 * class' copy constructor.
 */
RegisterClientRequestPrivate::RegisterClientRequestPrivate(
    const RegisterClientRequestPrivate &other, RegisterClientRequest * const q)
    : SsooidcRequestPrivate(other, q)
{

}

} // namespace SSOOIDC
} // namespace QtAws
