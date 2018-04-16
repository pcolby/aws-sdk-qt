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

#include "putrecordrequest.h"
#include "putrecordrequest_p.h"
#include "putrecordresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::PutRecordRequest
 *
 * \brief The PutRecordRequest class provides an interface for Kinesis PutRecord requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::putRecord
 */

/*!
 * @brief  Constructs a new PutRecordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRecordRequest::PutRecordRequest(const PutRecordRequest &other)
    : KinesisRequest(new PutRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutRecordRequest object.
 */
PutRecordRequest::PutRecordRequest()
    : KinesisRequest(new PutRecordRequestPrivate(KinesisRequest::PutRecordAction, this))
{

}

/*!
 * \reimp
 */
bool PutRecordRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutRecordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRecordResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecordRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutRecordRequestPrivate
 *
 * @brief  Private implementation for PutRecordRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutRecordRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public PutRecordRequest instance.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const KinesisRequest::Action action, PutRecordRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
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
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
