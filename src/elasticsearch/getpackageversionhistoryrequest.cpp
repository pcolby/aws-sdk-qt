// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpackageversionhistoryrequest.h"
#include "getpackageversionhistoryrequest_p.h"
#include "getpackageversionhistoryresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetPackageVersionHistoryRequest
 * \brief The GetPackageVersionHistoryRequest class provides an interface for Elasticsearch GetPackageVersionHistory requests.
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
 * \sa ElasticsearchClient::getPackageVersionHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetPackageVersionHistoryRequest::GetPackageVersionHistoryRequest(const GetPackageVersionHistoryRequest &other)
    : ElasticsearchRequest(new GetPackageVersionHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPackageVersionHistoryRequest object.
 */
GetPackageVersionHistoryRequest::GetPackageVersionHistoryRequest()
    : ElasticsearchRequest(new GetPackageVersionHistoryRequestPrivate(ElasticsearchRequest::GetPackageVersionHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetPackageVersionHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPackageVersionHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPackageVersionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetPackageVersionHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::GetPackageVersionHistoryRequestPrivate
 * \brief The GetPackageVersionHistoryRequestPrivate class provides private implementation for GetPackageVersionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetPackageVersionHistoryRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
GetPackageVersionHistoryRequestPrivate::GetPackageVersionHistoryRequestPrivate(
    const ElasticsearchRequest::Action action, GetPackageVersionHistoryRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPackageVersionHistoryRequest
 * class' copy constructor.
 */
GetPackageVersionHistoryRequestPrivate::GetPackageVersionHistoryRequestPrivate(
    const GetPackageVersionHistoryRequestPrivate &other, GetPackageVersionHistoryRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
