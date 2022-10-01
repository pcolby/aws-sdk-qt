// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcsvheaderrequest.h"
#include "getcsvheaderrequest_p.h"
#include "getcsvheaderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetCSVHeaderRequest
 * \brief The GetCSVHeaderRequest class provides an interface for CognitoIdentityProvider GetCSVHeader requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::getCSVHeader
 */

/*!
 * Constructs a copy of \a other.
 */
GetCSVHeaderRequest::GetCSVHeaderRequest(const GetCSVHeaderRequest &other)
    : CognitoIdentityProviderRequest(new GetCSVHeaderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCSVHeaderRequest object.
 */
GetCSVHeaderRequest::GetCSVHeaderRequest()
    : CognitoIdentityProviderRequest(new GetCSVHeaderRequestPrivate(CognitoIdentityProviderRequest::GetCSVHeaderAction, this))
{

}

/*!
 * \reimp
 */
bool GetCSVHeaderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCSVHeaderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCSVHeaderRequest::response(QNetworkReply * const reply) const
{
    return new GetCSVHeaderResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetCSVHeaderRequestPrivate
 * \brief The GetCSVHeaderRequestPrivate class provides private implementation for GetCSVHeaderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetCSVHeaderRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
GetCSVHeaderRequestPrivate::GetCSVHeaderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetCSVHeaderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCSVHeaderRequest
 * class' copy constructor.
 */
GetCSVHeaderRequestPrivate::GetCSVHeaderRequestPrivate(
    const GetCSVHeaderRequestPrivate &other, GetCSVHeaderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
