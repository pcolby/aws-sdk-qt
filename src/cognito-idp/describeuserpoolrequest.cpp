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

#include "describeuserpoolrequest.h"
#include "describeuserpoolrequest_p.h"
#include "describeuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolRequest
 *
 * \brief The DescribeUserPoolRequest class provides an interface for CognitoIdentityProvider DescribeUserPool requests.
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
 * \sa CognitoIdentityProviderClient::describeUserPool
 */

/*!
 * @brief  Constructs a new DescribeUserPoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUserPoolRequest::DescribeUserPoolRequest(const DescribeUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeUserPoolRequest object.
 */
DescribeUserPoolRequest::DescribeUserPoolRequest()
    : CognitoIdentityProviderRequest(new DescribeUserPoolRequestPrivate(CognitoIdentityProviderRequest::DescribeUserPoolAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserPoolRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeUserPoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUserPoolResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserPoolResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeUserPoolRequestPrivate
 *
 * @brief  Private implementation for DescribeUserPoolRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DescribeUserPoolRequest instance.
 */
DescribeUserPoolRequestPrivate::DescribeUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserPoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUserPoolRequest instance.
 */
DescribeUserPoolRequestPrivate::DescribeUserPoolRequestPrivate(
    const DescribeUserPoolRequestPrivate &other, DescribeUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
