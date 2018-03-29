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

#include "associatedelegatetoresourcerequest.h"
#include "associatedelegatetoresourcerequest_p.h"
#include "associatedelegatetoresourceresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  AssociateDelegateToResourceRequest
 *
 * @brief  Implements WorkMail AssociateDelegateToResource requests.
 *
 * @see    WorkMailClient::associateDelegateToResource
 */

/**
 * @brief  Constructs a new AssociateDelegateToResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateDelegateToResourceRequest::AssociateDelegateToResourceRequest(const AssociateDelegateToResourceRequest &other)
    : WorkMailRequest(new AssociateDelegateToResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateDelegateToResourceRequest object.
 */
AssociateDelegateToResourceRequest::AssociateDelegateToResourceRequest()
    : WorkMailRequest(new AssociateDelegateToResourceRequestPrivate(WorkMailRequest::AssociateDelegateToResourceAction, this))
{

}

bool AssociateDelegateToResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateDelegateToResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateDelegateToResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDelegateToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDelegateToResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateDelegateToResourceRequestPrivate
 *
 * @brief  Private implementation for AssociateDelegateToResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDelegateToResourceRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public AssociateDelegateToResourceRequest instance.
 */
AssociateDelegateToResourceRequestPrivate::AssociateDelegateToResourceRequestPrivate(
    const WorkMailRequest::Action action, AssociateDelegateToResourceRequest * const q)
    : AssociateDelegateToResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDelegateToResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateDelegateToResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateDelegateToResourceRequest instance.
 */
AssociateDelegateToResourceRequestPrivate::AssociateDelegateToResourceRequestPrivate(
    const AssociateDelegateToResourceRequestPrivate &other, AssociateDelegateToResourceRequest * const q)
    : AssociateDelegateToResourcePrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
