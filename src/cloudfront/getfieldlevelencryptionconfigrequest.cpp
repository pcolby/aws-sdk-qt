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

#include "getfieldlevelencryptionconfigrequest.h"
#include "getfieldlevelencryptionconfigrequest_p.h"
#include "getfieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionConfigRequest
 *
 * \brief The GetFieldLevelEncryptionConfigRequest class encapsulates CloudFront GetFieldLevelEncryptionConfig requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionConfig
 */

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFieldLevelEncryptionConfigRequest::GetFieldLevelEncryptionConfigRequest(const GetFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionConfigRequest object.
 */
GetFieldLevelEncryptionConfigRequest::GetFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFieldLevelEncryptionConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFieldLevelEncryptionConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFieldLevelEncryptionConfigRequestPrivate
 *
 * @brief  Private implementation for GetFieldLevelEncryptionConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetFieldLevelEncryptionConfigRequest instance.
 */
GetFieldLevelEncryptionConfigRequestPrivate::GetFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFieldLevelEncryptionConfigRequest instance.
 */
GetFieldLevelEncryptionConfigRequestPrivate::GetFieldLevelEncryptionConfigRequestPrivate(
    const GetFieldLevelEncryptionConfigRequestPrivate &other, GetFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
