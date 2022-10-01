// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgrouprequest.h"
#include "getgrouprequest_p.h"
#include "getgroupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetGroupRequest
 * \brief The GetGroupRequest class provides an interface for CognitoIdentityProvider GetGroup requests.
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
 * \sa CognitoIdentityProviderClient::getGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupRequest::GetGroupRequest(const GetGroupRequest &other)
    : CognitoIdentityProviderRequest(new GetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupRequest object.
 */
GetGroupRequest::GetGroupRequest()
    : CognitoIdentityProviderRequest(new GetGroupRequestPrivate(CognitoIdentityProviderRequest::GetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetGroupRequestPrivate
 * \brief The GetGroupRequestPrivate class provides private implementation for GetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetGroupRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupRequest
 * class' copy constructor.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GetGroupRequestPrivate &other, GetGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
