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

#include "putcorspolicyrequest.h"
#include "putcorspolicyrequest_p.h"
#include "putcorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/**
 * @class  PutCorsPolicyRequest
 *
 * @brief  Implements MediaStore PutCorsPolicy requests.
 *
 * @see    MediaStoreClient::putCorsPolicy
 */

/**
 * @brief  Constructs a new PutCorsPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutCorsPolicyRequest::PutCorsPolicyRequest(const PutCorsPolicyRequest &other)
    : MediaStoreRequest(new PutCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutCorsPolicyRequest object.
 */
PutCorsPolicyRequest::PutCorsPolicyRequest()
    : MediaStoreRequest(new PutCorsPolicyRequestPrivate(MediaStoreRequest::PutCorsPolicyAction, this))
{

}

bool PutCorsPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutCorsPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutCorsPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
QtAws::Core::AwsAbstractResponse * PutCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutCorsPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutCorsPolicyRequestPrivate
 *
 * @brief  Private implementation for PutCorsPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutCorsPolicyRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public PutCorsPolicyRequest instance.
 */
PutCorsPolicyRequestPrivate::PutCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutCorsPolicyRequest * const q)
    : PutCorsPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutCorsPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutCorsPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutCorsPolicyRequest instance.
 */
PutCorsPolicyRequestPrivate::PutCorsPolicyRequestPrivate(
    const PutCorsPolicyRequestPrivate &other, PutCorsPolicyRequest * const q)
    : PutCorsPolicyPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
