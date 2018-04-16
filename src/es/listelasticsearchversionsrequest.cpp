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

#include "listelasticsearchversionsrequest.h"
#include "listelasticsearchversionsrequest_p.h"
#include "listelasticsearchversionsresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchVersionsRequest
 *
 * \brief The ListElasticsearchVersionsRequest class encapsulates ElasticsearchService ListElasticsearchVersions requests.
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
 * \sa ElasticsearchServiceClient::listElasticsearchVersions
 */

/*!
 * @brief  Constructs a new ListElasticsearchVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListElasticsearchVersionsRequest::ListElasticsearchVersionsRequest(const ListElasticsearchVersionsRequest &other)
    : ElasticsearchServiceRequest(new ListElasticsearchVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListElasticsearchVersionsRequest object.
 */
ListElasticsearchVersionsRequest::ListElasticsearchVersionsRequest()
    : ElasticsearchServiceRequest(new ListElasticsearchVersionsRequestPrivate(ElasticsearchServiceRequest::ListElasticsearchVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListElasticsearchVersionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListElasticsearchVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListElasticsearchVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ListElasticsearchVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListElasticsearchVersionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListElasticsearchVersionsRequestPrivate
 *
 * @brief  Private implementation for ListElasticsearchVersionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListElasticsearchVersionsRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public ListElasticsearchVersionsRequest instance.
 */
ListElasticsearchVersionsRequestPrivate::ListElasticsearchVersionsRequestPrivate(
    const ElasticsearchServiceRequest::Action action, ListElasticsearchVersionsRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListElasticsearchVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListElasticsearchVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListElasticsearchVersionsRequest instance.
 */
ListElasticsearchVersionsRequestPrivate::ListElasticsearchVersionsRequestPrivate(
    const ListElasticsearchVersionsRequestPrivate &other, ListElasticsearchVersionsRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
