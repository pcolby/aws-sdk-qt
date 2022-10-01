// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startelasticsearchservicesoftwareupdaterequest.h"
#include "startelasticsearchservicesoftwareupdaterequest_p.h"
#include "startelasticsearchservicesoftwareupdateresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::StartElasticsearchServiceSoftwareUpdateRequest
 * \brief The StartElasticsearchServiceSoftwareUpdateRequest class provides an interface for Elasticsearch StartElasticsearchServiceSoftwareUpdate requests.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::startElasticsearchServiceSoftwareUpdate
 */

/*!
 * Constructs a copy of \a other.
 */
StartElasticsearchServiceSoftwareUpdateRequest::StartElasticsearchServiceSoftwareUpdateRequest(const StartElasticsearchServiceSoftwareUpdateRequest &other)
    : ElasticsearchRequest(new StartElasticsearchServiceSoftwareUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartElasticsearchServiceSoftwareUpdateRequest object.
 */
StartElasticsearchServiceSoftwareUpdateRequest::StartElasticsearchServiceSoftwareUpdateRequest()
    : ElasticsearchRequest(new StartElasticsearchServiceSoftwareUpdateRequestPrivate(ElasticsearchRequest::StartElasticsearchServiceSoftwareUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool StartElasticsearchServiceSoftwareUpdateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartElasticsearchServiceSoftwareUpdateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartElasticsearchServiceSoftwareUpdateRequest::response(QNetworkReply * const reply) const
{
    return new StartElasticsearchServiceSoftwareUpdateResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::StartElasticsearchServiceSoftwareUpdateRequestPrivate
 * \brief The StartElasticsearchServiceSoftwareUpdateRequestPrivate class provides private implementation for StartElasticsearchServiceSoftwareUpdateRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a StartElasticsearchServiceSoftwareUpdateRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
StartElasticsearchServiceSoftwareUpdateRequestPrivate::StartElasticsearchServiceSoftwareUpdateRequestPrivate(
    const ElasticsearchRequest::Action action, StartElasticsearchServiceSoftwareUpdateRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartElasticsearchServiceSoftwareUpdateRequest
 * class' copy constructor.
 */
StartElasticsearchServiceSoftwareUpdateRequestPrivate::StartElasticsearchServiceSoftwareUpdateRequestPrivate(
    const StartElasticsearchServiceSoftwareUpdateRequestPrivate &other, StartElasticsearchServiceSoftwareUpdateRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
