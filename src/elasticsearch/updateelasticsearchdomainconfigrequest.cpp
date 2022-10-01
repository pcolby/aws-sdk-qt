// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateelasticsearchdomainconfigrequest.h"
#include "updateelasticsearchdomainconfigrequest_p.h"
#include "updateelasticsearchdomainconfigresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::UpdateElasticsearchDomainConfigRequest
 * \brief The UpdateElasticsearchDomainConfigRequest class provides an interface for Elasticsearch UpdateElasticsearchDomainConfig requests.
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
 * \sa ElasticsearchClient::updateElasticsearchDomainConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateElasticsearchDomainConfigRequest::UpdateElasticsearchDomainConfigRequest(const UpdateElasticsearchDomainConfigRequest &other)
    : ElasticsearchRequest(new UpdateElasticsearchDomainConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateElasticsearchDomainConfigRequest object.
 */
UpdateElasticsearchDomainConfigRequest::UpdateElasticsearchDomainConfigRequest()
    : ElasticsearchRequest(new UpdateElasticsearchDomainConfigRequestPrivate(ElasticsearchRequest::UpdateElasticsearchDomainConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateElasticsearchDomainConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateElasticsearchDomainConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateElasticsearchDomainConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateElasticsearchDomainConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::UpdateElasticsearchDomainConfigRequestPrivate
 * \brief The UpdateElasticsearchDomainConfigRequestPrivate class provides private implementation for UpdateElasticsearchDomainConfigRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a UpdateElasticsearchDomainConfigRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
UpdateElasticsearchDomainConfigRequestPrivate::UpdateElasticsearchDomainConfigRequestPrivate(
    const ElasticsearchRequest::Action action, UpdateElasticsearchDomainConfigRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateElasticsearchDomainConfigRequest
 * class' copy constructor.
 */
UpdateElasticsearchDomainConfigRequestPrivate::UpdateElasticsearchDomainConfigRequestPrivate(
    const UpdateElasticsearchDomainConfigRequestPrivate &other, UpdateElasticsearchDomainConfigRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
