// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerclientrequest.h"
#include "registerclientrequest_p.h"
#include "registerclientresponse.h"
#include "ssooidcrequest_p.h"

namespace QtAws {
namespace SsoOidc {

/*!
 * \class QtAws::SsoOidc::RegisterClientRequest
 * \brief The RegisterClientRequest class provides an interface for SsoOidc RegisterClient requests.
 *
 * \inmodule QtAwsSsoOidc
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
 * \sa SsoOidcClient::registerClient
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterClientRequest::RegisterClientRequest(const RegisterClientRequest &other)
    : SsoOidcRequest(new RegisterClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterClientRequest object.
 */
RegisterClientRequest::RegisterClientRequest()
    : SsoOidcRequest(new RegisterClientRequestPrivate(SsoOidcRequest::RegisterClientAction, this))
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
 * \class QtAws::SsoOidc::RegisterClientRequestPrivate
 * \brief The RegisterClientRequestPrivate class provides private implementation for RegisterClientRequest.
 * \internal
 *
 * \inmodule QtAwsSsoOidc
 */

/*!
 * Constructs a RegisterClientRequestPrivate object for SsoOidc \a action,
 * with public implementation \a q.
 */
RegisterClientRequestPrivate::RegisterClientRequestPrivate(
    const SsoOidcRequest::Action action, RegisterClientRequest * const q)
    : SsoOidcRequestPrivate(action, q)
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
    : SsoOidcRequestPrivate(other, q)
{

}

} // namespace SsoOidc
} // namespace QtAws
