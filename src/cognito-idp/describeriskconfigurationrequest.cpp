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

#include "describeriskconfigurationrequest.h"
#include "describeriskconfigurationrequest_p.h"
#include "describeriskconfigurationresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeRiskConfigurationRequest
 *
 * @brief  Implements CognitoIdentityProvider DescribeRiskConfiguration requests.
 *
 * @see    CognitoIdentityProviderClient::describeRiskConfiguration
 */

/**
 * @brief  Constructs a new DescribeRiskConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRiskConfigurationRequest::DescribeRiskConfigurationRequest(const DescribeRiskConfigurationRequest &other)
    : CognitoIdentityProviderRequest(new DescribeRiskConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRiskConfigurationRequest object.
 */
DescribeRiskConfigurationRequest::DescribeRiskConfigurationRequest()
    : CognitoIdentityProviderRequest(new DescribeRiskConfigurationRequestPrivate(CognitoIdentityProviderRequest::DescribeRiskConfigurationAction, this))
{

}

bool DescribeRiskConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRiskConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRiskConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRiskConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRiskConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRiskConfigurationRequestPrivate
 *
 * @brief  Private implementation for DescribeRiskConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRiskConfigurationRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DescribeRiskConfigurationRequest instance.
 */
DescribeRiskConfigurationRequestPrivate::DescribeRiskConfigurationRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeRiskConfigurationRequest * const q)
    : DescribeRiskConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRiskConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRiskConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRiskConfigurationRequest instance.
 */
DescribeRiskConfigurationRequestPrivate::DescribeRiskConfigurationRequestPrivate(
    const DescribeRiskConfigurationRequestPrivate &other, DescribeRiskConfigurationRequest * const q)
    : DescribeRiskConfigurationPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
