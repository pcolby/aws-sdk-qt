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

#include "getfieldlevelencryptionprofileconfigrequest.h"
#include "getfieldlevelencryptionprofileconfigrequest_p.h"
#include "getfieldlevelencryptionprofileconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigRequest
 *
 * \brief The GetFieldLevelEncryptionProfileConfigRequest class provides an interface for CloudFront GetFieldLevelEncryptionProfileConfig requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfileConfig
 */

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionProfileConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFieldLevelEncryptionProfileConfigRequest::GetFieldLevelEncryptionProfileConfigRequest(const GetFieldLevelEncryptionProfileConfigRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionProfileConfigRequest object.
 */
GetFieldLevelEncryptionProfileConfigRequest::GetFieldLevelEncryptionProfileConfigRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileConfigRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionProfileConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionProfileConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFieldLevelEncryptionProfileConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFieldLevelEncryptionProfileConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionProfileConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionProfileConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFieldLevelEncryptionProfileConfigRequestPrivate
 *
 * @brief  Private implementation for GetFieldLevelEncryptionProfileConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionProfileConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetFieldLevelEncryptionProfileConfigRequest instance.
 */
GetFieldLevelEncryptionProfileConfigRequestPrivate::GetFieldLevelEncryptionProfileConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionProfileConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionProfileConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionProfileConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFieldLevelEncryptionProfileConfigRequest instance.
 */
GetFieldLevelEncryptionProfileConfigRequestPrivate::GetFieldLevelEncryptionProfileConfigRequestPrivate(
    const GetFieldLevelEncryptionProfileConfigRequestPrivate &other, GetFieldLevelEncryptionProfileConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
