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

#include "assumerolewithsamlrequest.h"
#include "assumerolewithsamlrequest_p.h"
#include "assumerolewithsamlresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/**
 * @class  AssumeRoleWithSAMLRequest
 *
 * @brief  Implements STS AssumeRoleWithSAML requests.
 *
 * @see    STSClient::assumeRoleWithSAML
 */

/**
 * @brief  Constructs a new AssumeRoleWithSAMLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssumeRoleWithSAMLRequest::AssumeRoleWithSAMLRequest(const AssumeRoleWithSAMLRequest &other)
    : STSRequest(new AssumeRoleWithSAMLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssumeRoleWithSAMLRequest object.
 */
AssumeRoleWithSAMLRequest::AssumeRoleWithSAMLRequest()
    : STSRequest(new AssumeRoleWithSAMLRequestPrivate(STSRequest::AssumeRoleWithSAMLAction, this))
{

}

bool AssumeRoleWithSAMLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssumeRoleWithSAMLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssumeRoleWithSAMLResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  STSClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeRoleWithSAMLRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleWithSAMLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssumeRoleWithSAMLRequestPrivate
 *
 * @brief  Private implementation for AssumeRoleWithSAMLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithSAMLRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public AssumeRoleWithSAMLRequest instance.
 */
AssumeRoleWithSAMLRequestPrivate::AssumeRoleWithSAMLRequestPrivate(
    const STSRequest::Action action, AssumeRoleWithSAMLRequest * const q)
    : STSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithSAMLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleWithSAMLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssumeRoleWithSAMLRequest instance.
 */
AssumeRoleWithSAMLRequestPrivate::AssumeRoleWithSAMLRequestPrivate(
    const AssumeRoleWithSAMLRequestPrivate &other, AssumeRoleWithSAMLRequest * const q)
    : STSRequestPrivate(other, q)
{

}

} // namespace STS
} // namespace QtAws
