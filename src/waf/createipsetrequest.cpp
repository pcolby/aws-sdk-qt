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

#include "createipsetrequest.h"
#include "createipsetrequest_p.h"
#include "createipsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  CreateIPSetRequest
 *
 * @brief  Implements WAF CreateIPSet requests.
 *
 * @see    WAFClient::createIPSet
 */

/**
 * @brief  Constructs a new CreateIPSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateIPSetRequest::CreateIPSetRequest(const CreateIPSetRequest &other)
    : WAFRequest(new CreateIPSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateIPSetRequest object.
 */
CreateIPSetRequest::CreateIPSetRequest()
    : WAFRequest(new CreateIPSetRequestPrivate(WAFRequest::CreateIPSetAction, this))
{

}

bool CreateIPSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateIPSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateIPSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIPSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateIPSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateIPSetRequestPrivate
 *
 * @brief  Private implementation for CreateIPSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIPSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public CreateIPSetRequest instance.
 */
CreateIPSetRequestPrivate::CreateIPSetRequestPrivate(
    const WAFRequest::Action action, CreateIPSetRequest * const q)
    : CreateIPSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateIPSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateIPSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateIPSetRequest instance.
 */
CreateIPSetRequestPrivate::CreateIPSetRequestPrivate(
    const CreateIPSetRequestPrivate &other, CreateIPSetRequest * const q)
    : CreateIPSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
