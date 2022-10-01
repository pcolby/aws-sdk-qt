// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackagerequest.h"
#include "deletepackagerequest_p.h"
#include "deletepackageresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeletePackageRequest
 * \brief The DeletePackageRequest class provides an interface for Elasticsearch DeletePackage requests.
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
 * \sa ElasticsearchClient::deletePackage
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePackageRequest::DeletePackageRequest(const DeletePackageRequest &other)
    : ElasticsearchRequest(new DeletePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePackageRequest object.
 */
DeletePackageRequest::DeletePackageRequest()
    : ElasticsearchRequest(new DeletePackageRequestPrivate(ElasticsearchRequest::DeletePackageAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePackageRequest::response(QNetworkReply * const reply) const
{
    return new DeletePackageResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DeletePackageRequestPrivate
 * \brief The DeletePackageRequestPrivate class provides private implementation for DeletePackageRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeletePackageRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DeletePackageRequestPrivate::DeletePackageRequestPrivate(
    const ElasticsearchRequest::Action action, DeletePackageRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePackageRequest
 * class' copy constructor.
 */
DeletePackageRequestPrivate::DeletePackageRequestPrivate(
    const DeletePackageRequestPrivate &other, DeletePackageRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
