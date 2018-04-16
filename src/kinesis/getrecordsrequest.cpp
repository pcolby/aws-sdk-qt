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

#include "getrecordsrequest.h"
#include "getrecordsrequest_p.h"
#include "getrecordsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::GetRecordsRequest
 *
 * \brief The GetRecordsRequest class encapsulates Kinesis GetRecords requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::getRecords
 */

/*!
 * @brief  Constructs a new GetRecordsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRecordsRequest::GetRecordsRequest(const GetRecordsRequest &other)
    : KinesisRequest(new GetRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetRecordsRequest object.
 */
GetRecordsRequest::GetRecordsRequest()
    : KinesisRequest(new GetRecordsRequestPrivate(KinesisRequest::GetRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecordsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetRecordsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRecordsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecordsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecordsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetRecordsRequestPrivate
 *
 * @brief  Private implementation for GetRecordsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRecordsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public GetRecordsRequest instance.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const KinesisRequest::Action action, GetRecordsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetRecordsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRecordsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRecordsRequest instance.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const GetRecordsRequestPrivate &other, GetRecordsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
