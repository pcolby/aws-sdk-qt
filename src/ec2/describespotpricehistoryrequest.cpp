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

#include "describespotpricehistoryrequest.h"
#include "describespotpricehistoryrequest_p.h"
#include "describespotpricehistoryresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeSpotPriceHistoryRequest
 *
 * \brief The DescribeSpotPriceHistoryRequest class provides an interface for EC2 DescribeSpotPriceHistory requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeSpotPriceHistory
 */

/*!
 * @brief  Constructs a new DescribeSpotPriceHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest(const DescribeSpotPriceHistoryRequest &other)
    : EC2Request(new DescribeSpotPriceHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeSpotPriceHistoryRequest object.
 */
DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest()
    : EC2Request(new DescribeSpotPriceHistoryRequestPrivate(EC2Request::DescribeSpotPriceHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSpotPriceHistoryRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeSpotPriceHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSpotPriceHistoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSpotPriceHistoryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotPriceHistoryResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeSpotPriceHistoryRequestPrivate
 *
 * @brief  Private implementation for DescribeSpotPriceHistoryRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeSpotPriceHistoryRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSpotPriceHistoryRequest instance.
 */
DescribeSpotPriceHistoryRequestPrivate::DescribeSpotPriceHistoryRequestPrivate(
    const EC2Request::Action action, DescribeSpotPriceHistoryRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeSpotPriceHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotPriceHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSpotPriceHistoryRequest instance.
 */
DescribeSpotPriceHistoryRequestPrivate::DescribeSpotPriceHistoryRequestPrivate(
    const DescribeSpotPriceHistoryRequestPrivate &other, DescribeSpotPriceHistoryRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
