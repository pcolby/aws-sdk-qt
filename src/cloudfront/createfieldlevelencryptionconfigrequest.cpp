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

#include "createfieldlevelencryptionconfigrequest.h"
#include "createfieldlevelencryptionconfigrequest_p.h"
#include "createfieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  CreateFieldLevelEncryptionConfigRequest
 *
 * @brief  Implements CloudFront CreateFieldLevelEncryptionConfig requests.
 *
 * @see    CloudFrontClient::createFieldLevelEncryptionConfig
 */

/**
 * @brief  Constructs a new CreateFieldLevelEncryptionConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFieldLevelEncryptionConfigRequest::CreateFieldLevelEncryptionConfigRequest(const CreateFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new CreateFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFieldLevelEncryptionConfigRequest object.
 */
CreateFieldLevelEncryptionConfigRequest::CreateFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new CreateFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::CreateFieldLevelEncryptionConfigAction, this))
{

}

bool CreateFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFieldLevelEncryptionConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFieldLevelEncryptionConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateFieldLevelEncryptionConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFieldLevelEncryptionConfigRequestPrivate
 *
 * @brief  Private implementation for CreateFieldLevelEncryptionConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFieldLevelEncryptionConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateFieldLevelEncryptionConfigRequest instance.
 */
CreateFieldLevelEncryptionConfigRequestPrivate::CreateFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, CreateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFieldLevelEncryptionConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFieldLevelEncryptionConfigRequest instance.
 */
CreateFieldLevelEncryptionConfigRequestPrivate::CreateFieldLevelEncryptionConfigRequestPrivate(
    const CreateFieldLevelEncryptionConfigRequestPrivate &other, CreateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
