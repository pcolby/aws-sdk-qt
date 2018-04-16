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

#include "describestreamrequest.h"
#include "describestreamrequest_p.h"
#include "describestreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamRequest
 *
 * \brief The DescribeStreamRequest class provides an interface for Kinesis DescribeStream requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStream
 */

/*!
 * @brief  Constructs a new DescribeStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStreamRequest::DescribeStreamRequest(const DescribeStreamRequest &other)
    : KinesisRequest(new DescribeStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeStreamRequest object.
 */
DescribeStreamRequest::DescribeStreamRequest()
    : KinesisRequest(new DescribeStreamRequestPrivate(KinesisRequest::DescribeStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeStreamRequestPrivate
 *
 * @brief  Private implementation for DescribeStreamRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStreamRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public DescribeStreamRequest instance.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const KinesisRequest::Action action, DescribeStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStreamRequest instance.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const DescribeStreamRequestPrivate &other, DescribeStreamRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
