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

#include "updatefieldlevelencryptionconfigrequest.h"
#include "updatefieldlevelencryptionconfigrequest_p.h"
#include "updatefieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionConfigRequest
 *
 * \brief The UpdateFieldLevelEncryptionConfigRequest class encapsulates CloudFront UpdateFieldLevelEncryptionConfig requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFieldLevelEncryptionConfig
 */

/*!
 * @brief  Constructs a new UpdateFieldLevelEncryptionConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFieldLevelEncryptionConfigRequest::UpdateFieldLevelEncryptionConfigRequest(const UpdateFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new UpdateFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateFieldLevelEncryptionConfigRequest object.
 */
UpdateFieldLevelEncryptionConfigRequest::UpdateFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new UpdateFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::UpdateFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateFieldLevelEncryptionConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFieldLevelEncryptionConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateFieldLevelEncryptionConfigRequestPrivate
 *
 * @brief  Private implementation for UpdateFieldLevelEncryptionConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateFieldLevelEncryptionConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public UpdateFieldLevelEncryptionConfigRequest instance.
 */
UpdateFieldLevelEncryptionConfigRequestPrivate::UpdateFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, UpdateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateFieldLevelEncryptionConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFieldLevelEncryptionConfigRequest instance.
 */
UpdateFieldLevelEncryptionConfigRequestPrivate::UpdateFieldLevelEncryptionConfigRequestPrivate(
    const UpdateFieldLevelEncryptionConfigRequestPrivate &other, UpdateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
