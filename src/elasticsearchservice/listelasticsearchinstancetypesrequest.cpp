/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listelasticsearchinstancetypesrequest.h"
#include "listelasticsearchinstancetypesrequest_p.h"
#include "listelasticsearchinstancetypesresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchInstanceTypesRequest
 * \brief The ListElasticsearchInstanceTypesRequest class provides an interface for ElasticsearchService ListElasticsearchInstanceTypes requests.
 *
 * \inmodule QtAwsElasticsearchService
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
 * Constructs a copy of \a other.
 */
ListElasticsearchInstanceTypesRequest::ListElasticsearchInstanceTypesRequest(const ListElasticsearchInstanceTypesRequest &other)
    : ElasticsearchServiceRequest(new ListElasticsearchInstanceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListElasticsearchInstanceTypesRequest object.
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
 * Returns a ListElasticsearchInstanceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListElasticsearchInstanceTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListElasticsearchInstanceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchInstanceTypesRequestPrivate
 * \brief The ListElasticsearchInstanceTypesRequestPrivate class provides private implementation for ListElasticsearchInstanceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a ListElasticsearchInstanceTypesRequestPrivate object for ElasticsearchService \a action,
 * with public implementation \a q.
 */
ListElasticsearchInstanceTypesRequestPrivate::ListElasticsearchInstanceTypesRequestPrivate(
    const ElasticsearchServiceRequest::Action action, ListElasticsearchInstanceTypesRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListElasticsearchInstanceTypesRequest
 * class' copy constructor.
 */
ListElasticsearchInstanceTypesRequestPrivate::ListElasticsearchInstanceTypesRequestPrivate(
    const ListElasticsearchInstanceTypesRequestPrivate &other, ListElasticsearchInstanceTypesRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
