/*
    Copyright 2013-2019 Paul Colby

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

#include "describeidentityrequest.h"
#include "describeidentityrequest_p.h"
#include "describeidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::DescribeIdentityRequest
 * \brief The DescribeIdentityRequest class provides an interface for CognitoIdentity DescribeIdentity requests.
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
 * \sa CognitoIdentityClient::describeIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIdentityRequest::DescribeIdentityRequest(const DescribeIdentityRequest &other)
    : CognitoIdentityRequest(new DescribeIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIdentityRequest object.
 */
DescribeIdentityRequest::DescribeIdentityRequest()
    : CognitoIdentityRequest(new DescribeIdentityRequestPrivate(CognitoIdentityRequest::DescribeIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentity::DescribeIdentityRequestPrivate
 * \brief The DescribeIdentityRequestPrivate class provides private implementation for DescribeIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a DescribeIdentityRequestPrivate object for CognitoIdentity \a action,
 * with public implementation \a q.
 */
DescribeIdentityRequestPrivate::DescribeIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, DescribeIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityRequest
 * class' copy constructor.
 */
DescribeIdentityRequestPrivate::DescribeIdentityRequestPrivate(
    const DescribeIdentityRequestPrivate &other, DescribeIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
