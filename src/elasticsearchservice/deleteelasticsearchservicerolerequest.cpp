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

#include "deleteelasticsearchservicerolerequest.h"
#include "deleteelasticsearchservicerolerequest_p.h"
#include "deleteelasticsearchserviceroleresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DeleteElasticsearchServiceRoleRequest
 * \brief The DeleteElasticsearchServiceRoleRequest class provides an interface for ElasticsearchService DeleteElasticsearchServiceRole requests.
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
 * \sa ElasticsearchServiceClient::deleteElasticsearchServiceRole
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteElasticsearchServiceRoleRequest::DeleteElasticsearchServiceRoleRequest(const DeleteElasticsearchServiceRoleRequest &other)
    : ElasticsearchServiceRequest(new DeleteElasticsearchServiceRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteElasticsearchServiceRoleRequest object.
 */
DeleteElasticsearchServiceRoleRequest::DeleteElasticsearchServiceRoleRequest()
    : ElasticsearchServiceRequest(new DeleteElasticsearchServiceRoleRequestPrivate(ElasticsearchServiceRequest::DeleteElasticsearchServiceRoleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteElasticsearchServiceRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteElasticsearchServiceRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteElasticsearchServiceRoleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteElasticsearchServiceRoleResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticsearchService::DeleteElasticsearchServiceRoleRequestPrivate
 * \brief The DeleteElasticsearchServiceRoleRequestPrivate class provides private implementation for DeleteElasticsearchServiceRoleRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DeleteElasticsearchServiceRoleRequestPrivate object for ElasticsearchService \a action,
 * with public implementation \a q.
 */
DeleteElasticsearchServiceRoleRequestPrivate::DeleteElasticsearchServiceRoleRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DeleteElasticsearchServiceRoleRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteElasticsearchServiceRoleRequest
 * class' copy constructor.
 */
DeleteElasticsearchServiceRoleRequestPrivate::DeleteElasticsearchServiceRoleRequestPrivate(
    const DeleteElasticsearchServiceRoleRequestPrivate &other, DeleteElasticsearchServiceRoleRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
