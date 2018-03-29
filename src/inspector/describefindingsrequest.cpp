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

#include "describefindingsrequest.h"
#include "describefindingsrequest_p.h"
#include "describefindingsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  DescribeFindingsRequest
 *
 * @brief  Implements Inspector DescribeFindings requests.
 *
 * @see    InspectorClient::describeFindings
 */

/**
 * @brief  Constructs a new DescribeFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFindingsRequest::DescribeFindingsRequest(const DescribeFindingsRequest &other)
    : InspectorRequest(new DescribeFindingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFindingsRequest object.
 */
DescribeFindingsRequest::DescribeFindingsRequest()
    : InspectorRequest(new DescribeFindingsRequestPrivate(InspectorRequest::DescribeFindingsAction, this))
{

}

bool DescribeFindingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFindingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFindingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFindingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFindingsRequestPrivate
 *
 * @brief  Private implementation for DescribeFindingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFindingsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DescribeFindingsRequest instance.
 */
DescribeFindingsRequestPrivate::DescribeFindingsRequestPrivate(
    const InspectorRequest::Action action, DescribeFindingsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFindingsRequest instance.
 */
DescribeFindingsRequestPrivate::DescribeFindingsRequestPrivate(
    const DescribeFindingsRequestPrivate &other, DescribeFindingsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
