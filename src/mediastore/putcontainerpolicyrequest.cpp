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

#include "putcontainerpolicyrequest.h"
#include "putcontainerpolicyrequest_p.h"
#include "putcontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutContainerPolicyRequest
 *
 * \brief The PutContainerPolicyRequest class encapsulates MediaStore PutContainerPolicy requests.
 *
 * \ingroup MediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putContainerPolicy
 */

/*!
 * @brief  Constructs a new PutContainerPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutContainerPolicyRequest::PutContainerPolicyRequest(const PutContainerPolicyRequest &other)
    : MediaStoreRequest(new PutContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutContainerPolicyRequest object.
 */
PutContainerPolicyRequest::PutContainerPolicyRequest()
    : MediaStoreRequest(new PutContainerPolicyRequestPrivate(MediaStoreRequest::PutContainerPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutContainerPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutContainerPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutContainerPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutContainerPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutContainerPolicyRequestPrivate
 *
 * @brief  Private implementation for PutContainerPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutContainerPolicyRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public PutContainerPolicyRequest instance.
 */
PutContainerPolicyRequestPrivate::PutContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutContainerPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutContainerPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutContainerPolicyRequest instance.
 */
PutContainerPolicyRequestPrivate::PutContainerPolicyRequestPrivate(
    const PutContainerPolicyRequestPrivate &other, PutContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
