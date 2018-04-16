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

#include "describestreamsummaryrequest.h"
#include "describestreamsummaryrequest_p.h"
#include "describestreamsummaryresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamSummaryRequest
 *
 * \brief The DescribeStreamSummaryRequest class encapsulates Kinesis DescribeStreamSummary requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStreamSummary
 */

/*!
 * @brief  Constructs a new DescribeStreamSummaryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStreamSummaryRequest::DescribeStreamSummaryRequest(const DescribeStreamSummaryRequest &other)
    : KinesisRequest(new DescribeStreamSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeStreamSummaryRequest object.
 */
DescribeStreamSummaryRequest::DescribeStreamSummaryRequest()
    : KinesisRequest(new DescribeStreamSummaryRequestPrivate(KinesisRequest::DescribeStreamSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamSummaryRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeStreamSummaryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStreamSummaryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamSummaryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamSummaryResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeStreamSummaryRequestPrivate
 *
 * @brief  Private implementation for DescribeStreamSummaryRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStreamSummaryRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public DescribeStreamSummaryRequest instance.
 */
DescribeStreamSummaryRequestPrivate::DescribeStreamSummaryRequestPrivate(
    const KinesisRequest::Action action, DescribeStreamSummaryRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStreamSummaryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamSummaryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStreamSummaryRequest instance.
 */
DescribeStreamSummaryRequestPrivate::DescribeStreamSummaryRequestPrivate(
    const DescribeStreamSummaryRequestPrivate &other, DescribeStreamSummaryRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
