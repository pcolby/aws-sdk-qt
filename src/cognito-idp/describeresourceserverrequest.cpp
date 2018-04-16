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

#include "describeresourceserverrequest.h"
#include "describeresourceserverrequest_p.h"
#include "describeresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeResourceServerRequest
 *
 * \brief The DescribeResourceServerRequest class provides an interface for CognitoIdentityProvider DescribeResourceServer requests.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::describeResourceServer
 */

/*!
 * @brief  Constructs a new DescribeResourceServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeResourceServerRequest::DescribeResourceServerRequest(const DescribeResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new DescribeResourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeResourceServerRequest object.
 */
DescribeResourceServerRequest::DescribeResourceServerRequest()
    : CognitoIdentityProviderRequest(new DescribeResourceServerRequestPrivate(CognitoIdentityProviderRequest::DescribeResourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResourceServerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeResourceServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeResourceServerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourceServerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeResourceServerRequestPrivate
 *
 * @brief  Private implementation for DescribeResourceServerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeResourceServerRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DescribeResourceServerRequest instance.
 */
DescribeResourceServerRequestPrivate::DescribeResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeResourceServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourceServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeResourceServerRequest instance.
 */
DescribeResourceServerRequestPrivate::DescribeResourceServerRequestPrivate(
    const DescribeResourceServerRequestPrivate &other, DescribeResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
