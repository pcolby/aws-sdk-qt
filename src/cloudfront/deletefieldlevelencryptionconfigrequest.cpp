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

#include "deletefieldlevelencryptionconfigrequest.h"
#include "deletefieldlevelencryptionconfigrequest_p.h"
#include "deletefieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionConfigRequest
 *
 * \brief The DeleteFieldLevelEncryptionConfigRequest class encapsulates CloudFront DeleteFieldLevelEncryptionConfig requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFieldLevelEncryptionConfig
 */

/*!
 * @brief  Constructs a new DeleteFieldLevelEncryptionConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFieldLevelEncryptionConfigRequest::DeleteFieldLevelEncryptionConfigRequest(const DeleteFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new DeleteFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteFieldLevelEncryptionConfigRequest object.
 */
DeleteFieldLevelEncryptionConfigRequest::DeleteFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new DeleteFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::DeleteFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteFieldLevelEncryptionConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFieldLevelEncryptionConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteFieldLevelEncryptionConfigRequestPrivate
 *
 * @brief  Private implementation for DeleteFieldLevelEncryptionConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteFieldLevelEncryptionConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public DeleteFieldLevelEncryptionConfigRequest instance.
 */
DeleteFieldLevelEncryptionConfigRequestPrivate::DeleteFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, DeleteFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteFieldLevelEncryptionConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFieldLevelEncryptionConfigRequest instance.
 */
DeleteFieldLevelEncryptionConfigRequestPrivate::DeleteFieldLevelEncryptionConfigRequestPrivate(
    const DeleteFieldLevelEncryptionConfigRequestPrivate &other, DeleteFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
