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

#include "describegamesessiondetailsrequest.h"
#include "describegamesessiondetailsrequest_p.h"
#include "describegamesessiondetailsresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeGameSessionDetailsRequest
 *
 * @brief  Implements GameLift DescribeGameSessionDetails requests.
 *
 * @see    GameLiftClient::describeGameSessionDetails
 */

/**
 * @brief  Constructs a new DescribeGameSessionDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGameSessionDetailsRequest::DescribeGameSessionDetailsRequest(const DescribeGameSessionDetailsRequest &other)
    : GameLiftRequest(new DescribeGameSessionDetailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGameSessionDetailsRequest object.
 */
DescribeGameSessionDetailsRequest::DescribeGameSessionDetailsRequest()
    : GameLiftRequest(new DescribeGameSessionDetailsRequestPrivate(GameLiftRequest::DescribeGameSessionDetailsAction, this))
{

}

bool DescribeGameSessionDetailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGameSessionDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGameSessionDetailsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeGameSessionDetailsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGameSessionDetailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGameSessionDetailsRequestPrivate
 *
 * @brief  Private implementation for DescribeGameSessionDetailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionDetailsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeGameSessionDetailsRequest instance.
 */
DescribeGameSessionDetailsRequestPrivate::DescribeGameSessionDetailsRequestPrivate(
    const GameLiftRequest::Action action, DescribeGameSessionDetailsRequest * const q)
    : DescribeGameSessionDetailsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGameSessionDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGameSessionDetailsRequest instance.
 */
DescribeGameSessionDetailsRequestPrivate::DescribeGameSessionDetailsRequestPrivate(
    const DescribeGameSessionDetailsRequestPrivate &other, DescribeGameSessionDetailsRequest * const q)
    : DescribeGameSessionDetailsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
