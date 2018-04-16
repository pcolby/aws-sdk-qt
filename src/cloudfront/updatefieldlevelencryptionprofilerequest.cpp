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

#include "updatefieldlevelencryptionprofilerequest.h"
#include "updatefieldlevelencryptionprofilerequest_p.h"
#include "updatefieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionProfileRequest
 *
 * \brief The UpdateFieldLevelEncryptionProfileRequest class provides an interface for CloudFront UpdateFieldLevelEncryptionProfile requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFieldLevelEncryptionProfile
 */

/*!
 * @brief  Constructs a new UpdateFieldLevelEncryptionProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFieldLevelEncryptionProfileRequest::UpdateFieldLevelEncryptionProfileRequest(const UpdateFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new UpdateFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateFieldLevelEncryptionProfileRequest object.
 */
UpdateFieldLevelEncryptionProfileRequest::UpdateFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new UpdateFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::UpdateFieldLevelEncryptionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateFieldLevelEncryptionProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFieldLevelEncryptionProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFieldLevelEncryptionProfileResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateFieldLevelEncryptionProfileRequestPrivate
 *
 * @brief  Private implementation for UpdateFieldLevelEncryptionProfileRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateFieldLevelEncryptionProfileRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public UpdateFieldLevelEncryptionProfileRequest instance.
 */
UpdateFieldLevelEncryptionProfileRequestPrivate::UpdateFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, UpdateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateFieldLevelEncryptionProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFieldLevelEncryptionProfileRequest instance.
 */
UpdateFieldLevelEncryptionProfileRequestPrivate::UpdateFieldLevelEncryptionProfileRequestPrivate(
    const UpdateFieldLevelEncryptionProfileRequestPrivate &other, UpdateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
