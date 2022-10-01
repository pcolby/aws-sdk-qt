// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "upgradeelasticsearchdomainrequest.h"
#include "upgradeelasticsearchdomainrequest_p.h"
#include "upgradeelasticsearchdomainresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::UpgradeElasticsearchDomainRequest
 * \brief The UpgradeElasticsearchDomainRequest class provides an interface for Elasticsearch UpgradeElasticsearchDomain requests.
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
 * \sa ElasticsearchClient::upgradeElasticsearchDomain
 */

/*!
 * Constructs a copy of \a other.
 */
UpgradeElasticsearchDomainRequest::UpgradeElasticsearchDomainRequest(const UpgradeElasticsearchDomainRequest &other)
    : ElasticsearchRequest(new UpgradeElasticsearchDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpgradeElasticsearchDomainRequest object.
 */
UpgradeElasticsearchDomainRequest::UpgradeElasticsearchDomainRequest()
    : ElasticsearchRequest(new UpgradeElasticsearchDomainRequestPrivate(ElasticsearchRequest::UpgradeElasticsearchDomainAction, this))
{

}

/*!
 * \reimp
 */
bool UpgradeElasticsearchDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpgradeElasticsearchDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpgradeElasticsearchDomainRequest::response(QNetworkReply * const reply) const
{
    return new UpgradeElasticsearchDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::UpgradeElasticsearchDomainRequestPrivate
 * \brief The UpgradeElasticsearchDomainRequestPrivate class provides private implementation for UpgradeElasticsearchDomainRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a UpgradeElasticsearchDomainRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
UpgradeElasticsearchDomainRequestPrivate::UpgradeElasticsearchDomainRequestPrivate(
    const ElasticsearchRequest::Action action, UpgradeElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpgradeElasticsearchDomainRequest
 * class' copy constructor.
 */
UpgradeElasticsearchDomainRequestPrivate::UpgradeElasticsearchDomainRequestPrivate(
    const UpgradeElasticsearchDomainRequestPrivate &other, UpgradeElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
