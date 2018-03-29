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

#include "deletedetectorrequest.h"
#include "deletedetectorrequest_p.h"
#include "deletedetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  DeleteDetectorRequest
 *
 * @brief  Implements GuardDuty DeleteDetector requests.
 *
 * @see    GuardDutyClient::deleteDetector
 */

/**
 * @brief  Constructs a new DeleteDetectorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDetectorRequest::DeleteDetectorRequest(const DeleteDetectorRequest &other)
    : GuardDutyRequest(new DeleteDetectorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDetectorRequest object.
 */
DeleteDetectorRequest::DeleteDetectorRequest()
    : GuardDutyRequest(new DeleteDetectorRequestPrivate(GuardDutyRequest::DeleteDetectorAction, this))
{

}

bool DeleteDetectorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDetectorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDetectorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * DeleteDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDetectorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDetectorRequestPrivate
 *
 * @brief  Private implementation for DeleteDetectorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDetectorRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DeleteDetectorRequest instance.
 */
DeleteDetectorRequestPrivate::DeleteDetectorRequestPrivate(
    const GuardDutyRequest::Action action, DeleteDetectorRequest * const q)
    : DeleteDetectorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDetectorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDetectorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDetectorRequest instance.
 */
DeleteDetectorRequestPrivate::DeleteDetectorRequestPrivate(
    const DeleteDetectorRequestPrivate &other, DeleteDetectorRequest * const q)
    : DeleteDetectorPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
