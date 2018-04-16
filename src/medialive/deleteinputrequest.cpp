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

#include "deleteinputrequest.h"
#include "deleteinputrequest_p.h"
#include "deleteinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputRequest
 *
 * \brief The DeleteInputRequest class encapsulates MediaLive DeleteInput requests.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::deleteInput
 */

/*!
 * @brief  Constructs a new DeleteInputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInputRequest::DeleteInputRequest(const DeleteInputRequest &other)
    : MediaLiveRequest(new DeleteInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteInputRequest object.
 */
DeleteInputRequest::DeleteInputRequest()
    : MediaLiveRequest(new DeleteInputRequestPrivate(MediaLiveRequest::DeleteInputAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInputRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteInputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInputResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInputRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInputResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteInputRequestPrivate
 *
 * @brief  Private implementation for DeleteInputRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteInputRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public DeleteInputRequest instance.
 */
DeleteInputRequestPrivate::DeleteInputRequestPrivate(
    const MediaLiveRequest::Action action, DeleteInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteInputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInputRequest instance.
 */
DeleteInputRequestPrivate::DeleteInputRequestPrivate(
    const DeleteInputRequestPrivate &other, DeleteInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
