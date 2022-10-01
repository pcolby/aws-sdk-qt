// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createelasticsearchdomainrequest.h"
#include "createelasticsearchdomainrequest_p.h"
#include "createelasticsearchdomainresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::CreateElasticsearchDomainRequest
 * \brief The CreateElasticsearchDomainRequest class provides an interface for Elasticsearch CreateElasticsearchDomain requests.
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
 * \sa ElasticsearchClient::createElasticsearchDomain
 */

/*!
 * Constructs a copy of \a other.
 */
CreateElasticsearchDomainRequest::CreateElasticsearchDomainRequest(const CreateElasticsearchDomainRequest &other)
    : ElasticsearchRequest(new CreateElasticsearchDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateElasticsearchDomainRequest object.
 */
CreateElasticsearchDomainRequest::CreateElasticsearchDomainRequest()
    : ElasticsearchRequest(new CreateElasticsearchDomainRequestPrivate(ElasticsearchRequest::CreateElasticsearchDomainAction, this))
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
 * Returns a CreateElasticsearchDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateElasticsearchDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateElasticsearchDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::CreateElasticsearchDomainRequestPrivate
 * \brief The CreateElasticsearchDomainRequestPrivate class provides private implementation for CreateElasticsearchDomainRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a CreateElasticsearchDomainRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
CreateElasticsearchDomainRequestPrivate::CreateElasticsearchDomainRequestPrivate(
    const ElasticsearchRequest::Action action, CreateElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateElasticsearchDomainRequest
 * class' copy constructor.
 */
CreateElasticsearchDomainRequestPrivate::CreateElasticsearchDomainRequestPrivate(
    const CreateElasticsearchDomainRequestPrivate &other, CreateElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
