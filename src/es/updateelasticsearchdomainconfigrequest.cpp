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

#include "updateelasticsearchdomainconfigrequest.h"
#include "updateelasticsearchdomainconfigrequest_p.h"
#include "updateelasticsearchdomainconfigresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/**
 * @class  UpdateElasticsearchDomainConfigRequest
 *
 * @brief  Implements ElasticsearchService UpdateElasticsearchDomainConfig requests.
 *
 * @see    ElasticsearchServiceClient::updateElasticsearchDomainConfig
 */

/**
 * @brief  Constructs a new UpdateElasticsearchDomainConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateElasticsearchDomainConfigRequest::UpdateElasticsearchDomainConfigRequest(const UpdateElasticsearchDomainConfigRequest &other)
    : ElasticsearchServiceRequest(new UpdateElasticsearchDomainConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateElasticsearchDomainConfigRequest object.
 */
UpdateElasticsearchDomainConfigRequest::UpdateElasticsearchDomainConfigRequest()
    : ElasticsearchServiceRequest(new UpdateElasticsearchDomainConfigRequestPrivate(ElasticsearchServiceRequest::UpdateElasticsearchDomainConfigAction, this))
{

}

bool UpdateElasticsearchDomainConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateElasticsearchDomainConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateElasticsearchDomainConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateElasticsearchDomainConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateElasticsearchDomainConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateElasticsearchDomainConfigRequestPrivate
 *
 * @brief  Private implementation for UpdateElasticsearchDomainConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateElasticsearchDomainConfigRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public UpdateElasticsearchDomainConfigRequest instance.
 */
UpdateElasticsearchDomainConfigRequestPrivate::UpdateElasticsearchDomainConfigRequestPrivate(
    const ElasticsearchServiceRequest::Action action, UpdateElasticsearchDomainConfigRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateElasticsearchDomainConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateElasticsearchDomainConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateElasticsearchDomainConfigRequest instance.
 */
UpdateElasticsearchDomainConfigRequestPrivate::UpdateElasticsearchDomainConfigRequestPrivate(
    const UpdateElasticsearchDomainConfigRequestPrivate &other, UpdateElasticsearchDomainConfigRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
