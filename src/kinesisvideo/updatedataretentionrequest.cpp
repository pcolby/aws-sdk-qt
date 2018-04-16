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

#include "updatedataretentionrequest.h"
#include "updatedataretentionrequest_p.h"
#include "updatedataretentionresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateDataRetentionRequest
 *
 * \brief The UpdateDataRetentionRequest class encapsulates KinesisVideo UpdateDataRetention requests.
 *
 * \ingroup KinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateDataRetention
 */

/*!
 * @brief  Constructs a new UpdateDataRetentionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDataRetentionRequest::UpdateDataRetentionRequest(const UpdateDataRetentionRequest &other)
    : KinesisVideoRequest(new UpdateDataRetentionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateDataRetentionRequest object.
 */
UpdateDataRetentionRequest::UpdateDataRetentionRequest()
    : KinesisVideoRequest(new UpdateDataRetentionRequestPrivate(KinesisVideoRequest::UpdateDataRetentionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataRetentionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateDataRetentionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDataRetentionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataRetentionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataRetentionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateDataRetentionRequestPrivate
 *
 * @brief  Private implementation for UpdateDataRetentionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDataRetentionRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public UpdateDataRetentionRequest instance.
 */
UpdateDataRetentionRequestPrivate::UpdateDataRetentionRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateDataRetentionRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDataRetentionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataRetentionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDataRetentionRequest instance.
 */
UpdateDataRetentionRequestPrivate::UpdateDataRetentionRequestPrivate(
    const UpdateDataRetentionRequestPrivate &other, UpdateDataRetentionRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
