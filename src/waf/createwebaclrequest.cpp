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

#include "createwebaclrequest.h"
#include "createwebaclrequest_p.h"
#include "createwebaclresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  CreateWebACLRequest
 *
 * @brief  Implements WAF CreateWebACL requests.
 *
 * @see    WAFClient::createWebACL
 */

/**
 * @brief  Constructs a new CreateWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateWebACLRequest::CreateWebACLRequest(const CreateWebACLRequest &other)
    : WAFRequest(new CreateWebACLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateWebACLRequest object.
 */
CreateWebACLRequest::CreateWebACLRequest()
    : WAFRequest(new CreateWebACLRequestPrivate(WAFRequest::CreateWebACLAction, this))
{

}

bool CreateWebACLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateWebACLResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWebACLRequest::response(QNetworkReply * const reply) const
{
    return new CreateWebACLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateWebACLRequestPrivate
 *
 * @brief  Private implementation for CreateWebACLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateWebACLRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public CreateWebACLRequest instance.
 */
CreateWebACLRequestPrivate::CreateWebACLRequestPrivate(
    const WAFRequest::Action action, CreateWebACLRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateWebACLRequest instance.
 */
CreateWebACLRequestPrivate::CreateWebACLRequestPrivate(
    const CreateWebACLRequestPrivate &other, CreateWebACLRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
