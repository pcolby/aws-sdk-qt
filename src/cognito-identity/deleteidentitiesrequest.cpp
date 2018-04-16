/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteidentitiesrequest.h"
#include "deleteidentitiesrequest_p.h"
#include "deleteidentitiesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::DeleteIdentitiesRequest
 *
 * \brief The DeleteIdentitiesRequest class encapsulates CognitoIdentity DeleteIdentities requests.
 *
 * \ingroup CognitoIdentity
 *
 *  <fullname>Amazon Cognito</fullname>
 * 
 *  Amazon Cognito is a web service that delivers scoped temporary credentials to mobile devices and other untrusted
 *  environments. Amazon Cognito uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito, you can enable authentication with one or more third-party identity providers (Facebook, Google,
 *  or Login with Amazon), and you can also choose to support unauthenticated access from your app. Cognito delivers a
 *  unique identifier for each user and acts as an OpenID token provider trusted by AWS Security Token Service (STS) to
 *  access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  To provide end-user credentials, first make an unsigned call to <a>GetId</a>. If the end user is authenticated with one
 *  of the supported identity providers, set the <code>Logins</code> map with the identity provider token.
 *  <code>GetId</code> returns a unique identifier for the
 * 
 *  user>
 * 
 *  Next, make an unsigned call to <a>GetCredentialsForIdentity</a>. This call expects the same <code>Logins</code> map as
 *  the <code>GetId</code> call, as well as the <code>IdentityID</code> originally returned by <code>GetId</code>. Assuming
 *  your identity pool has been configured via the <a>SetIdentityPoolRoles</a> operation,
 *  <code>GetCredentialsForIdentity</code> will return AWS credentials for your use. If your pool has not been configured
 *  with <code>SetIdentityPoolRoles</code>, or if you want to follow legacy flow, make an unsigned call to
 *  <a>GetOpenIdToken</a>, which returns the OpenID token necessary to call STS and retrieve AWS credentials. This call
 *  expects the same <code>Logins</code> map as the <code>GetId</code> call, as well as the <code>IdentityID</code>
 *  originally returned by <code>GetId</code>. The token returned by <code>GetOpenIdToken</code> can be passed to the STS
 *  operation <a
 *  href="http://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html">AssumeRoleWithWebIdentity</a>
 *  to retrieve AWS
 * 
 *  credentials>
 * 
 *  If you want to use Amazon Cognito in an Android, iOS, or Unity application, you will probably want to make API calls via
 *  the AWS Mobile SDK. To learn more, see the <a href="http://docs.aws.amazon.com/mobile/index.html">AWS Mobile SDK
 *  Developer
 *
 * \sa CognitoIdentityClient::deleteIdentities
 */

/*!
 * @brief  Constructs a new DeleteIdentitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIdentitiesRequest::DeleteIdentitiesRequest(const DeleteIdentitiesRequest &other)
    : CognitoIdentityRequest(new DeleteIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteIdentitiesRequest object.
 */
DeleteIdentitiesRequest::DeleteIdentitiesRequest()
    : CognitoIdentityRequest(new DeleteIdentitiesRequestPrivate(CognitoIdentityRequest::DeleteIdentitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIdentitiesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteIdentitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIdentitiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentitiesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteIdentitiesRequestPrivate
 *
 * @brief  Private implementation for DeleteIdentitiesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteIdentitiesRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public DeleteIdentitiesRequest instance.
 */
DeleteIdentitiesRequestPrivate::DeleteIdentitiesRequestPrivate(
    const CognitoIdentityRequest::Action action, DeleteIdentitiesRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteIdentitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIdentitiesRequest instance.
 */
DeleteIdentitiesRequestPrivate::DeleteIdentitiesRequestPrivate(
    const DeleteIdentitiesRequestPrivate &other, DeleteIdentitiesRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
