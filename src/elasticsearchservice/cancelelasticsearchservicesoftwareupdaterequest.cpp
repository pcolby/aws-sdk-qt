/*
    Copyright 2013-2019 Paul Colby

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

#include "cancelelasticsearchservicesoftwareupdaterequest.h"
#include "cancelelasticsearchservicesoftwareupdaterequest_p.h"
#include "cancelelasticsearchservicesoftwareupdateresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::CancelElasticsearchServiceSoftwareUpdateRequest
 * \brief The CancelElasticsearchServiceSoftwareUpdateRequest class provides an interface for ElasticsearchService CancelElasticsearchServiceSoftwareUpdate requests.
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
 * \sa ElasticsearchServiceClient::cancelElasticsearchServiceSoftwareUpdate
 */

/*!
 * Constructs a copy of \a other.
 */
CancelElasticsearchServiceSoftwareUpdateRequest::CancelElasticsearchServiceSoftwareUpdateRequest(const CancelElasticsearchServiceSoftwareUpdateRequest &other)
    : ElasticsearchServiceRequest(new CancelElasticsearchServiceSoftwareUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelElasticsearchServiceSoftwareUpdateRequest object.
 */
CancelElasticsearchServiceSoftwareUpdateRequest::CancelElasticsearchServiceSoftwareUpdateRequest()
    : ElasticsearchServiceRequest(new CancelElasticsearchServiceSoftwareUpdateRequestPrivate(ElasticsearchServiceRequest::CancelElasticsearchServiceSoftwareUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool CancelElasticsearchServiceSoftwareUpdateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelElasticsearchServiceSoftwareUpdateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelElasticsearchServiceSoftwareUpdateRequest::response(QNetworkReply * const reply) const
{
    return new CancelElasticsearchServiceSoftwareUpdateResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticsearchService::CancelElasticsearchServiceSoftwareUpdateRequestPrivate
 * \brief The CancelElasticsearchServiceSoftwareUpdateRequestPrivate class provides private implementation for CancelElasticsearchServiceSoftwareUpdateRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a CancelElasticsearchServiceSoftwareUpdateRequestPrivate object for ElasticsearchService \a action,
 * with public implementation \a q.
 */
CancelElasticsearchServiceSoftwareUpdateRequestPrivate::CancelElasticsearchServiceSoftwareUpdateRequestPrivate(
    const ElasticsearchServiceRequest::Action action, CancelElasticsearchServiceSoftwareUpdateRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelElasticsearchServiceSoftwareUpdateRequest
 * class' copy constructor.
 */
CancelElasticsearchServiceSoftwareUpdateRequestPrivate::CancelElasticsearchServiceSoftwareUpdateRequestPrivate(
    const CancelElasticsearchServiceSoftwareUpdateRequestPrivate &other, CancelElasticsearchServiceSoftwareUpdateRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
