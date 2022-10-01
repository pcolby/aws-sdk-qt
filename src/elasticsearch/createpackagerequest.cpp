// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpackagerequest.h"
#include "createpackagerequest_p.h"
#include "createpackageresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::CreatePackageRequest
 * \brief The CreatePackageRequest class provides an interface for Elasticsearch CreatePackage requests.
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
 * \sa ElasticsearchClient::createPackage
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePackageRequest::CreatePackageRequest(const CreatePackageRequest &other)
    : ElasticsearchRequest(new CreatePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePackageRequest object.
 */
CreatePackageRequest::CreatePackageRequest()
    : ElasticsearchRequest(new CreatePackageRequestPrivate(ElasticsearchRequest::CreatePackageAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePackageRequest::response(QNetworkReply * const reply) const
{
    return new CreatePackageResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::CreatePackageRequestPrivate
 * \brief The CreatePackageRequestPrivate class provides private implementation for CreatePackageRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a CreatePackageRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
CreatePackageRequestPrivate::CreatePackageRequestPrivate(
    const ElasticsearchRequest::Action action, CreatePackageRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePackageRequest
 * class' copy constructor.
 */
CreatePackageRequestPrivate::CreatePackageRequestPrivate(
    const CreatePackageRequestPrivate &other, CreatePackageRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
