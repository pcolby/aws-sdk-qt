/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putrecordrequest.h"
#include "putrecordrequest_p.h"
#include "putrecordresponse.h"
#include "firehoserequest_p.h"

namespace AWS {
namespace Firehose {

/**
 * @class  PutRecordRequest
 *
 * @brief  Implements Firehose PutRecord requests.
 *
 * @see    FirehoseClient::putRecord
 */

/**
 * @brief  Constructs a new PutRecordResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRecordResponse::PutRecordResponse(

/**
 * @brief  Constructs a new PutRecordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRecordRequest::PutRecordRequest(const PutRecordRequest &other)
    : FirehoseRequest(new PutRecordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRecordRequest object.
 */
PutRecordRequest::PutRecordRequest()
    : FirehoseRequest(new PutRecordRequestPrivate(FirehoseRequest::PutRecordAction, this))
{

}

bool PutRecordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRecordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRecordResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
AwsAbstractResponse * PutRecordRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRecordRequestPrivate
 *
 * @brief  Private implementation for PutRecordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRecordRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public PutRecordRequest instance.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const FirehoseRequest::Action action, PutRecordRequest * const q)
    : PutRecordPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRecordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRecordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRecordRequest instance.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const PutRecordRequestPrivate &other, PutRecordRequest * const q)
    : PutRecordPrivate(other, q)
{

}

} // namespace Firehose
} // namespace AWS
