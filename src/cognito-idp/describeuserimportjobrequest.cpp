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

#include "describeuserimportjobrequest.h"
#include "describeuserimportjobrequest_p.h"
#include "describeuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeUserImportJobRequest
 *
 * @brief  Implements CognitoIdentityProvider DescribeUserImportJob requests.
 *
 * @see    CognitoIdentityProviderClient::describeUserImportJob
 */

/**
 * @brief  Constructs a new DescribeUserImportJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUserImportJobRequest::DescribeUserImportJobRequest(const DescribeUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUserImportJobRequest object.
 */
DescribeUserImportJobRequest::DescribeUserImportJobRequest()
    : CognitoIdentityProviderRequest(new DescribeUserImportJobRequestPrivate(CognitoIdentityProviderRequest::DescribeUserImportJobAction, this))
{

}

bool DescribeUserImportJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUserImportJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUserImportJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * DescribeUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserImportJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUserImportJobRequestPrivate
 *
 * @brief  Private implementation for DescribeUserImportJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserImportJobRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DescribeUserImportJobRequest instance.
 */
DescribeUserImportJobRequestPrivate::DescribeUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserImportJobRequest * const q)
    : DescribeUserImportJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserImportJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserImportJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUserImportJobRequest instance.
 */
DescribeUserImportJobRequestPrivate::DescribeUserImportJobRequestPrivate(
    const DescribeUserImportJobRequestPrivate &other, DescribeUserImportJobRequest * const q)
    : DescribeUserImportJobPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
