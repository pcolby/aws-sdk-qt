/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createdomainrequest.h"
#include "createdomainrequest_p.h"
#include "createdomainresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  CreateDomainRequest
 *
 * @brief  Implements CloudSearch CreateDomain requests.
 *
 * @see    CloudSearchClient::createDomain
 */

/**
 * @brief  Constructs a new CreateDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDomainResponse::CreateDomainResponse(

/**
 * @brief  Constructs a new CreateDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDomainRequest::CreateDomainRequest(const CreateDomainRequest &other)
    : CloudSearchRequest(new CreateDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDomainRequest object.
 */
CreateDomainRequest::CreateDomainRequest()
    : CloudSearchRequest(new CreateDomainRequestPrivate(CloudSearchRequest::CreateDomainAction, this))
{

}

bool CreateDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * CreateDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDomainRequestPrivate
 *
 * @brief  Private implementation for CreateDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public CreateDomainRequest instance.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const CloudSearchRequest::Action action, CreateDomainRequest * const q)
    : CreateDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDomainRequest instance.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const CreateDomainRequestPrivate &other, CreateDomainRequest * const q)
    : CreateDomainPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
