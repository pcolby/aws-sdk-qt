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

#include "creategroupcertificateauthorityrequest.h"
#include "creategroupcertificateauthorityrequest_p.h"
#include "creategroupcertificateauthorityresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateGroupCertificateAuthorityRequest
 *
 * @brief  Implements Greengrass CreateGroupCertificateAuthority requests.
 *
 * @see    GreengrassClient::createGroupCertificateAuthority
 */

/**
 * @brief  Constructs a new CreateGroupCertificateAuthorityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGroupCertificateAuthorityRequest::CreateGroupCertificateAuthorityRequest(const CreateGroupCertificateAuthorityRequest &other)
    : GreengrassRequest(new CreateGroupCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGroupCertificateAuthorityRequest object.
 */
CreateGroupCertificateAuthorityRequest::CreateGroupCertificateAuthorityRequest()
    : GreengrassRequest(new CreateGroupCertificateAuthorityRequestPrivate(GreengrassRequest::CreateGroupCertificateAuthorityAction, this))
{

}

bool CreateGroupCertificateAuthorityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGroupCertificateAuthorityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGroupCertificateAuthorityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateGroupCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupCertificateAuthorityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGroupCertificateAuthorityRequestPrivate
 *
 * @brief  Private implementation for CreateGroupCertificateAuthorityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupCertificateAuthorityRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateGroupCertificateAuthorityRequest instance.
 */
CreateGroupCertificateAuthorityRequestPrivate::CreateGroupCertificateAuthorityRequestPrivate(
    const GreengrassRequest::Action action, CreateGroupCertificateAuthorityRequest * const q)
    : CreateGroupCertificateAuthorityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupCertificateAuthorityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupCertificateAuthorityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGroupCertificateAuthorityRequest instance.
 */
CreateGroupCertificateAuthorityRequestPrivate::CreateGroupCertificateAuthorityRequestPrivate(
    const CreateGroupCertificateAuthorityRequestPrivate &other, CreateGroupCertificateAuthorityRequest * const q)
    : CreateGroupCertificateAuthorityPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
