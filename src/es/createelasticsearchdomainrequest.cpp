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

#include "createelasticsearchdomainrequest.h"
#include "createelasticsearchdomainrequest_p.h"
#include "createelasticsearchdomainresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  CreateElasticsearchDomainRequest
 *
 * @brief  Implements ElasticsearchService CreateElasticsearchDomain requests.
 *
 * @see    ElasticsearchServiceClient::createElasticsearchDomain
 */

/**
 * @brief  Constructs a new CreateElasticsearchDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateElasticsearchDomainResponse::CreateElasticsearchDomainResponse(

/**
 * @brief  Constructs a new CreateElasticsearchDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateElasticsearchDomainRequest::CreateElasticsearchDomainRequest(const CreateElasticsearchDomainRequest &other)
    : ElasticsearchServiceRequest(new CreateElasticsearchDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateElasticsearchDomainRequest object.
 */
CreateElasticsearchDomainRequest::CreateElasticsearchDomainRequest()
    : ElasticsearchServiceRequest(new CreateElasticsearchDomainRequestPrivate(ElasticsearchServiceRequest::CreateElasticsearchDomainAction, this))
{

}

bool CreateElasticsearchDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateElasticsearchDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateElasticsearchDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
AwsAbstractResponse * CreateElasticsearchDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateElasticsearchDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateElasticsearchDomainRequestPrivate
 *
 * @brief  Private implementation for CreateElasticsearchDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateElasticsearchDomainRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public CreateElasticsearchDomainRequest instance.
 */
CreateElasticsearchDomainRequestPrivate::CreateElasticsearchDomainRequestPrivate(
    const ElasticsearchServiceRequest::Action action, CreateElasticsearchDomainRequest * const q)
    : CreateElasticsearchDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateElasticsearchDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateElasticsearchDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateElasticsearchDomainRequest instance.
 */
CreateElasticsearchDomainRequestPrivate::CreateElasticsearchDomainRequestPrivate(
    const CreateElasticsearchDomainRequestPrivate &other, CreateElasticsearchDomainRequest * const q)
    : CreateElasticsearchDomainPrivate(other, q)
{

}
