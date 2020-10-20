/*
    Copyright 2013-2020 Paul Colby

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

#include "mergedeveloperidentitiesrequest.h"
#include "mergedeveloperidentitiesrequest_p.h"
#include "mergedeveloperidentitiesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::MergeDeveloperIdentitiesRequest
 * \brief The MergeDeveloperIdentitiesRequest class provides an interface for CognitoIdentity MergeDeveloperIdentities requests.
 *
 * \inmodule QtAwsCognitoIdentity
 *
 *  <fullname>Amazon Cognito Federated Identities</fullname>
 * 
 *  Amazon Cognito Federated Identities is a web service that delivers scoped temporary credentials to mobile devices and
 *  other untrusted environments. It uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito Federated Identities, you can enable authentication with one or more third-party identity providers
 *  (Facebook, Google, or Login with Amazon) or an Amazon Cognito user pool, and you can also choose to support
 *  unauthenticated access from your app. Cognito delivers a unique identifier for each user and acts as an OpenID token
 *  provider trusted by AWS Security Token Service (STS) to access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  For a description of the authentication flow from the Amazon Cognito Developer Guide see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Authentication
 * 
 *  Flow</a>>
 * 
 *  For more information see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-identity.html">Amazon Cognito Federated
 *
 * \sa CognitoIdentityClient::mergeDeveloperIdentities
 */

/*!
 * Constructs a copy of \a other.
 */
MergeDeveloperIdentitiesRequest::MergeDeveloperIdentitiesRequest(const MergeDeveloperIdentitiesRequest &other)
    : CognitoIdentityRequest(new MergeDeveloperIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MergeDeveloperIdentitiesRequest object.
 */
MergeDeveloperIdentitiesRequest::MergeDeveloperIdentitiesRequest()
    : CognitoIdentityRequest(new MergeDeveloperIdentitiesRequestPrivate(CognitoIdentityRequest::MergeDeveloperIdentitiesAction, this))
{

}

/*!
 * \reimp
 */
bool MergeDeveloperIdentitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MergeDeveloperIdentitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MergeDeveloperIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new MergeDeveloperIdentitiesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentity::MergeDeveloperIdentitiesRequestPrivate
 * \brief The MergeDeveloperIdentitiesRequestPrivate class provides private implementation for MergeDeveloperIdentitiesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a MergeDeveloperIdentitiesRequestPrivate object for CognitoIdentity \a action,
 * with public implementation \a q.
 */
MergeDeveloperIdentitiesRequestPrivate::MergeDeveloperIdentitiesRequestPrivate(
    const CognitoIdentityRequest::Action action, MergeDeveloperIdentitiesRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MergeDeveloperIdentitiesRequest
 * class' copy constructor.
 */
MergeDeveloperIdentitiesRequestPrivate::MergeDeveloperIdentitiesRequestPrivate(
    const MergeDeveloperIdentitiesRequestPrivate &other, MergeDeveloperIdentitiesRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
