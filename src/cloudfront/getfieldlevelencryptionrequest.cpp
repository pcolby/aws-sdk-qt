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

#include "getfieldlevelencryptionrequest.h"
#include "getfieldlevelencryptionrequest_p.h"
#include "getfieldlevelencryptionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionRequest
 *
 * \brief The GetFieldLevelEncryptionRequest class provides an interface for CloudFront GetFieldLevelEncryption requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryption
 */

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFieldLevelEncryptionRequest::GetFieldLevelEncryptionRequest(const GetFieldLevelEncryptionRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionRequest object.
 */
GetFieldLevelEncryptionRequest::GetFieldLevelEncryptionRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFieldLevelEncryptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFieldLevelEncryptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFieldLevelEncryptionRequestPrivate
 *
 * @brief  Private implementation for GetFieldLevelEncryptionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetFieldLevelEncryptionRequest instance.
 */
GetFieldLevelEncryptionRequestPrivate::GetFieldLevelEncryptionRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFieldLevelEncryptionRequest instance.
 */
GetFieldLevelEncryptionRequestPrivate::GetFieldLevelEncryptionRequestPrivate(
    const GetFieldLevelEncryptionRequestPrivate &other, GetFieldLevelEncryptionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
