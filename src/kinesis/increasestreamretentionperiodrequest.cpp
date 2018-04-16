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

#include "increasestreamretentionperiodrequest.h"
#include "increasestreamretentionperiodrequest_p.h"
#include "increasestreamretentionperiodresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::IncreaseStreamRetentionPeriodRequest
 *
 * \brief The IncreaseStreamRetentionPeriodRequest class provides an interface for Kinesis IncreaseStreamRetentionPeriod requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::increaseStreamRetentionPeriod
 */

/*!
 * @brief  Constructs a new IncreaseStreamRetentionPeriodRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
IncreaseStreamRetentionPeriodRequest::IncreaseStreamRetentionPeriodRequest(const IncreaseStreamRetentionPeriodRequest &other)
    : KinesisRequest(new IncreaseStreamRetentionPeriodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new IncreaseStreamRetentionPeriodRequest object.
 */
IncreaseStreamRetentionPeriodRequest::IncreaseStreamRetentionPeriodRequest()
    : KinesisRequest(new IncreaseStreamRetentionPeriodRequestPrivate(KinesisRequest::IncreaseStreamRetentionPeriodAction, this))
{

}

/*!
 * \reimp
 */
bool IncreaseStreamRetentionPeriodRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an IncreaseStreamRetentionPeriodResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An IncreaseStreamRetentionPeriodResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * IncreaseStreamRetentionPeriodRequest::response(QNetworkReply * const reply) const
{
    return new IncreaseStreamRetentionPeriodResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  IncreaseStreamRetentionPeriodRequestPrivate
 *
 * @brief  Private implementation for IncreaseStreamRetentionPeriodRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new IncreaseStreamRetentionPeriodRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public IncreaseStreamRetentionPeriodRequest instance.
 */
IncreaseStreamRetentionPeriodRequestPrivate::IncreaseStreamRetentionPeriodRequestPrivate(
    const KinesisRequest::Action action, IncreaseStreamRetentionPeriodRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new IncreaseStreamRetentionPeriodRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the IncreaseStreamRetentionPeriodRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public IncreaseStreamRetentionPeriodRequest instance.
 */
IncreaseStreamRetentionPeriodRequestPrivate::IncreaseStreamRetentionPeriodRequestPrivate(
    const IncreaseStreamRetentionPeriodRequestPrivate &other, IncreaseStreamRetentionPeriodRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
