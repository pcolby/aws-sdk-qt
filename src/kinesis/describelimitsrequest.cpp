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

#include "describelimitsrequest.h"
#include "describelimitsrequest_p.h"
#include "describelimitsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeLimitsRequest
 *
 * \brief The DescribeLimitsRequest class encapsulates Kinesis DescribeLimits requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeLimits
 */

/*!
 * @brief  Constructs a new DescribeLimitsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLimitsRequest::DescribeLimitsRequest(const DescribeLimitsRequest &other)
    : KinesisRequest(new DescribeLimitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeLimitsRequest object.
 */
DescribeLimitsRequest::DescribeLimitsRequest()
    : KinesisRequest(new DescribeLimitsRequestPrivate(KinesisRequest::DescribeLimitsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLimitsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeLimitsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLimitsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLimitsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeLimitsRequestPrivate
 *
 * @brief  Private implementation for DescribeLimitsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeLimitsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public DescribeLimitsRequest instance.
 */
DescribeLimitsRequestPrivate::DescribeLimitsRequestPrivate(
    const KinesisRequest::Action action, DescribeLimitsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeLimitsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLimitsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLimitsRequest instance.
 */
DescribeLimitsRequestPrivate::DescribeLimitsRequestPrivate(
    const DescribeLimitsRequestPrivate &other, DescribeLimitsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
