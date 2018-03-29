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

#include "createnamedqueryrequest.h"
#include "createnamedqueryrequest_p.h"
#include "createnamedqueryresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/**
 * @class  CreateNamedQueryRequest
 *
 * @brief  Implements Athena CreateNamedQuery requests.
 *
 * @see    AthenaClient::createNamedQuery
 */

/**
 * @brief  Constructs a new CreateNamedQueryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNamedQueryRequest::CreateNamedQueryRequest(const CreateNamedQueryRequest &other)
    : AthenaRequest(new CreateNamedQueryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNamedQueryRequest object.
 */
CreateNamedQueryRequest::CreateNamedQueryRequest()
    : AthenaRequest(new CreateNamedQueryRequestPrivate(AthenaRequest::CreateNamedQueryAction, this))
{

}

bool CreateNamedQueryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNamedQueryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNamedQueryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * CreateNamedQueryRequest::response(QNetworkReply * const reply) const
{
    return new CreateNamedQueryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNamedQueryRequestPrivate
 *
 * @brief  Private implementation for CreateNamedQueryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNamedQueryRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public CreateNamedQueryRequest instance.
 */
CreateNamedQueryRequestPrivate::CreateNamedQueryRequestPrivate(
    const AthenaRequest::Action action, CreateNamedQueryRequest * const q)
    : CreateNamedQueryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNamedQueryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNamedQueryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNamedQueryRequest instance.
 */
CreateNamedQueryRequestPrivate::CreateNamedQueryRequestPrivate(
    const CreateNamedQueryRequestPrivate &other, CreateNamedQueryRequest * const q)
    : CreateNamedQueryPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
