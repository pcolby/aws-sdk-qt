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

#include "puteventselectorsrequest.h"
#include "puteventselectorsrequest_p.h"
#include "puteventselectorsresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  PutEventSelectorsRequest
 *
 * @brief  Implements CloudTrail PutEventSelectors requests.
 *
 * @see    CloudTrailClient::putEventSelectors
 */

/**
 * @brief  Constructs a new PutEventSelectorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutEventSelectorsRequest::PutEventSelectorsRequest(const PutEventSelectorsRequest &other)
    : CloudTrailRequest(new PutEventSelectorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutEventSelectorsRequest object.
 */
PutEventSelectorsRequest::PutEventSelectorsRequest()
    : CloudTrailRequest(new PutEventSelectorsRequestPrivate(CloudTrailRequest::PutEventSelectorsAction, this))
{

}

bool PutEventSelectorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutEventSelectorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutEventSelectorsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * PutEventSelectorsRequest::response(QNetworkReply * const reply) const
{
    return new PutEventSelectorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutEventSelectorsRequestPrivate
 *
 * @brief  Private implementation for PutEventSelectorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEventSelectorsRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public PutEventSelectorsRequest instance.
 */
PutEventSelectorsRequestPrivate::PutEventSelectorsRequestPrivate(
    const CloudTrailRequest::Action action, PutEventSelectorsRequest * const q)
    : PutEventSelectorsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutEventSelectorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutEventSelectorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutEventSelectorsRequest instance.
 */
PutEventSelectorsRequestPrivate::PutEventSelectorsRequestPrivate(
    const PutEventSelectorsRequestPrivate &other, PutEventSelectorsRequest * const q)
    : PutEventSelectorsPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
