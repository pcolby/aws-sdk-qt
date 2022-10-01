// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getupgradehistoryrequest.h"
#include "getupgradehistoryrequest_p.h"
#include "getupgradehistoryresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetUpgradeHistoryRequest
 * \brief The GetUpgradeHistoryRequest class provides an interface for Elasticsearch GetUpgradeHistory requests.
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
 * \sa ElasticsearchClient::getUpgradeHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetUpgradeHistoryRequest::GetUpgradeHistoryRequest(const GetUpgradeHistoryRequest &other)
    : ElasticsearchRequest(new GetUpgradeHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUpgradeHistoryRequest object.
 */
GetUpgradeHistoryRequest::GetUpgradeHistoryRequest()
    : ElasticsearchRequest(new GetUpgradeHistoryRequestPrivate(ElasticsearchRequest::GetUpgradeHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetUpgradeHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUpgradeHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUpgradeHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetUpgradeHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::GetUpgradeHistoryRequestPrivate
 * \brief The GetUpgradeHistoryRequestPrivate class provides private implementation for GetUpgradeHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetUpgradeHistoryRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
GetUpgradeHistoryRequestPrivate::GetUpgradeHistoryRequestPrivate(
    const ElasticsearchRequest::Action action, GetUpgradeHistoryRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUpgradeHistoryRequest
 * class' copy constructor.
 */
GetUpgradeHistoryRequestPrivate::GetUpgradeHistoryRequestPrivate(
    const GetUpgradeHistoryRequestPrivate &other, GetUpgradeHistoryRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
