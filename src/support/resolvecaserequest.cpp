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

#include "resolvecaserequest.h"
#include "resolvecaserequest_p.h"
#include "resolvecaseresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/**
 * @class  ResolveCaseRequest
 *
 * @brief  Implements Support ResolveCase requests.
 *
 * @see    SupportClient::resolveCase
 */

/**
 * @brief  Constructs a new ResolveCaseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResolveCaseRequest::ResolveCaseRequest(const ResolveCaseRequest &other)
    : SupportRequest(new ResolveCaseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResolveCaseRequest object.
 */
ResolveCaseRequest::ResolveCaseRequest()
    : SupportRequest(new ResolveCaseRequestPrivate(SupportRequest::ResolveCaseAction, this))
{

}

bool ResolveCaseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResolveCaseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResolveCaseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SupportClient::send
 */
QtAws::Core::AwsAbstractResponse * ResolveCaseRequest::response(QNetworkReply * const reply) const
{
    return new ResolveCaseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResolveCaseRequestPrivate
 *
 * @brief  Private implementation for ResolveCaseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveCaseRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public ResolveCaseRequest instance.
 */
ResolveCaseRequestPrivate::ResolveCaseRequestPrivate(
    const SupportRequest::Action action, ResolveCaseRequest * const q)
    : SupportRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResolveCaseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResolveCaseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResolveCaseRequest instance.
 */
ResolveCaseRequestPrivate::ResolveCaseRequestPrivate(
    const ResolveCaseRequestPrivate &other, ResolveCaseRequest * const q)
    : SupportRequestPrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
