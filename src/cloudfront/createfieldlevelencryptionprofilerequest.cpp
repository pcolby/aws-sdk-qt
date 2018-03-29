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

#include "createfieldlevelencryptionprofilerequest.h"
#include "createfieldlevelencryptionprofilerequest_p.h"
#include "createfieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  CreateFieldLevelEncryptionProfileRequest
 *
 * @brief  Implements CloudFront CreateFieldLevelEncryptionProfile requests.
 *
 * @see    CloudFrontClient::createFieldLevelEncryptionProfile
 */

/**
 * @brief  Constructs a new CreateFieldLevelEncryptionProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFieldLevelEncryptionProfileRequest::CreateFieldLevelEncryptionProfileRequest(const CreateFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new CreateFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFieldLevelEncryptionProfileRequest object.
 */
CreateFieldLevelEncryptionProfileRequest::CreateFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new CreateFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::CreateFieldLevelEncryptionProfileAction, this))
{

}

bool CreateFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFieldLevelEncryptionProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFieldLevelEncryptionProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateFieldLevelEncryptionProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFieldLevelEncryptionProfileRequestPrivate
 *
 * @brief  Private implementation for CreateFieldLevelEncryptionProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFieldLevelEncryptionProfileRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateFieldLevelEncryptionProfileRequest instance.
 */
CreateFieldLevelEncryptionProfileRequestPrivate::CreateFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, CreateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFieldLevelEncryptionProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFieldLevelEncryptionProfileRequest instance.
 */
CreateFieldLevelEncryptionProfileRequestPrivate::CreateFieldLevelEncryptionProfileRequestPrivate(
    const CreateFieldLevelEncryptionProfileRequestPrivate &other, CreateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
