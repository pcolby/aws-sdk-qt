// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatepackagerequest.h"
#include "associatepackagerequest_p.h"
#include "associatepackageresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::AssociatePackageRequest
 * \brief The AssociatePackageRequest class provides an interface for Elasticsearch AssociatePackage requests.
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
 * \sa ElasticsearchClient::associatePackage
 */

/*!
 * Constructs a copy of \a other.
 */
AssociatePackageRequest::AssociatePackageRequest(const AssociatePackageRequest &other)
    : ElasticsearchRequest(new AssociatePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociatePackageRequest object.
 */
AssociatePackageRequest::AssociatePackageRequest()
    : ElasticsearchRequest(new AssociatePackageRequestPrivate(ElasticsearchRequest::AssociatePackageAction, this))
{

}

/*!
 * \reimp
 */
bool AssociatePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociatePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociatePackageRequest::response(QNetworkReply * const reply) const
{
    return new AssociatePackageResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::AssociatePackageRequestPrivate
 * \brief The AssociatePackageRequestPrivate class provides private implementation for AssociatePackageRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a AssociatePackageRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
AssociatePackageRequestPrivate::AssociatePackageRequestPrivate(
    const ElasticsearchRequest::Action action, AssociatePackageRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociatePackageRequest
 * class' copy constructor.
 */
AssociatePackageRequestPrivate::AssociatePackageRequestPrivate(
    const AssociatePackageRequestPrivate &other, AssociatePackageRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
