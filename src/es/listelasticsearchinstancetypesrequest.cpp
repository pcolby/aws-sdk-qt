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

#include "listelasticsearchinstancetypesrequest.h"
#include "listelasticsearchinstancetypesrequest_p.h"
#include "listelasticsearchinstancetypesresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchInstanceTypesRequest
 *
 * \brief The ListElasticsearchInstanceTypesRequest class encapsulates ElasticsearchService ListElasticsearchInstanceTypes requests.
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
 * \sa ElasticsearchServiceClient::listElasticsearchInstanceTypes
 */

/*!
 * @brief  Constructs a new ListElasticsearchInstanceTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListElasticsearchInstanceTypesRequest::ListElasticsearchInstanceTypesRequest(const ListElasticsearchInstanceTypesRequest &other)
    : ElasticsearchServiceRequest(new ListElasticsearchInstanceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListElasticsearchInstanceTypesRequest object.
 */
ListElasticsearchInstanceTypesRequest::ListElasticsearchInstanceTypesRequest()
    : ElasticsearchServiceRequest(new ListElasticsearchInstanceTypesRequestPrivate(ElasticsearchServiceRequest::ListElasticsearchInstanceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListElasticsearchInstanceTypesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListElasticsearchInstanceTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListElasticsearchInstanceTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ListElasticsearchInstanceTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListElasticsearchInstanceTypesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListElasticsearchInstanceTypesRequestPrivate
 *
 * @brief  Private implementation for ListElasticsearchInstanceTypesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListElasticsearchInstanceTypesRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public ListElasticsearchInstanceTypesRequest instance.
 */
ListElasticsearchInstanceTypesRequestPrivate::ListElasticsearchInstanceTypesRequestPrivate(
    const ElasticsearchServiceRequest::Action action, ListElasticsearchInstanceTypesRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListElasticsearchInstanceTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListElasticsearchInstanceTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListElasticsearchInstanceTypesRequest instance.
 */
ListElasticsearchInstanceTypesRequestPrivate::ListElasticsearchInstanceTypesRequestPrivate(
    const ListElasticsearchInstanceTypesRequestPrivate &other, ListElasticsearchInstanceTypesRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
