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

#include "readpresetrequest.h"
#include "readpresetrequest_p.h"
#include "readpresetresponse.h"
#include "elastictranscoderrequest_p.h"

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  ReadPresetRequest
 *
 * @brief  Implements ElasticTranscoder ReadPreset requests.
 *
 * @see    ElasticTranscoderClient::readPreset
 */

/**
 * @brief  Constructs a new ReadPresetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReadPresetRequest::ReadPresetRequest(const ReadPresetRequest &other)
    : ElasticTranscoderRequest(new ReadPresetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReadPresetRequest object.
 */
ReadPresetRequest::ReadPresetRequest()
    : ElasticTranscoderRequest(new ReadPresetRequestPrivate(ElasticTranscoderRequest::ReadPresetAction, this))
{

}

bool ReadPresetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReadPresetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReadPresetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * ReadPresetRequest::response(QNetworkReply * const reply) const
{
    return new ReadPresetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReadPresetRequestPrivate
 *
 * @brief  Private implementation for ReadPresetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReadPresetRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public ReadPresetRequest instance.
 */
ReadPresetRequestPrivate::ReadPresetRequestPrivate(
    const ElasticTranscoderRequest::Action action, ReadPresetRequest * const q)
    : ReadPresetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReadPresetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReadPresetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReadPresetRequest instance.
 */
ReadPresetRequestPrivate::ReadPresetRequestPrivate(
    const ReadPresetRequestPrivate &other, ReadPresetRequest * const q)
    : ReadPresetPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace AWS
