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

#include "createelasticsearchdomainrequest.h"
#include "createelasticsearchdomainrequest_p.h"
#include "createelasticsearchdomainresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::CreateElasticsearchDomainRequest
 *
 * \brief The CreateElasticsearchDomainRequest class provides an interface for ElasticsearchService CreateElasticsearchDomain requests.
 *
 * \ingroup ElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchServiceClient::createElasticsearchDomain
 */

/*!
 * @brief  Constructs a new CreateElasticsearchDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateElasticsearchDomainRequest::CreateElasticsearchDomainRequest(const CreateElasticsearchDomainRequest &other)
    : ElasticsearchServiceRequest(new CreateElasticsearchDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateElasticsearchDomainRequest object.
 */
CreateElasticsearchDomainRequest::CreateElasticsearchDomainRequest()
    : ElasticsearchServiceRequest(new CreateElasticsearchDomainRequestPrivate(ElasticsearchServiceRequest::CreateElasticsearchDomainAction, this))
{

}

/*!
 * \reimp
 */
bool CreateElasticsearchDomainRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateElasticsearchDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateElasticsearchDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateElasticsearchDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateElasticsearchDomainResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateElasticsearchDomainRequestPrivate
 *
 * @brief  Private implementation for CreateElasticsearchDomainRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateElasticsearchDomainRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public CreateElasticsearchDomainRequest instance.
 */
CreateElasticsearchDomainRequestPrivate::CreateElasticsearchDomainRequestPrivate(
    const ElasticsearchServiceRequest::Action action, CreateElasticsearchDomainRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
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
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
