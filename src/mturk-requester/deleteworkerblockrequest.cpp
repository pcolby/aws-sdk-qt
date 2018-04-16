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

#include "deleteworkerblockrequest.h"
#include "deleteworkerblockrequest_p.h"
#include "deleteworkerblockresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockRequest
 *
 * \brief The DeleteWorkerBlockRequest class encapsulates MTurk DeleteWorkerBlock requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::deleteWorkerBlock
 */

/*!
 * @brief  Constructs a new DeleteWorkerBlockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteWorkerBlockRequest::DeleteWorkerBlockRequest(const DeleteWorkerBlockRequest &other)
    : MTurkRequest(new DeleteWorkerBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteWorkerBlockRequest object.
 */
DeleteWorkerBlockRequest::DeleteWorkerBlockRequest()
    : MTurkRequest(new DeleteWorkerBlockRequestPrivate(MTurkRequest::DeleteWorkerBlockAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkerBlockRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteWorkerBlockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteWorkerBlockResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkerBlockRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkerBlockResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteWorkerBlockRequestPrivate
 *
 * @brief  Private implementation for DeleteWorkerBlockRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteWorkerBlockRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public DeleteWorkerBlockRequest instance.
 */
DeleteWorkerBlockRequestPrivate::DeleteWorkerBlockRequestPrivate(
    const MTurkRequest::Action action, DeleteWorkerBlockRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteWorkerBlockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkerBlockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteWorkerBlockRequest instance.
 */
DeleteWorkerBlockRequestPrivate::DeleteWorkerBlockRequestPrivate(
    const DeleteWorkerBlockRequestPrivate &other, DeleteWorkerBlockRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
