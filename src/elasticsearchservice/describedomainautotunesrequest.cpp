/*
    Copyright 2013-2021 Paul Colby

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

#include "describedomainautotunesrequest.h"
#include "describedomainautotunesrequest_p.h"
#include "describedomainautotunesresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeDomainAutoTunesRequest
 * \brief The DescribeDomainAutoTunesRequest class provides an interface for Elasticsearch DescribeDomainAutoTunes requests.
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
 * \sa ElasticsearchClient::describeDomainAutoTunes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainAutoTunesRequest::DescribeDomainAutoTunesRequest(const DescribeDomainAutoTunesRequest &other)
    : ElasticsearchRequest(new DescribeDomainAutoTunesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainAutoTunesRequest object.
 */
DescribeDomainAutoTunesRequest::DescribeDomainAutoTunesRequest()
    : ElasticsearchRequest(new DescribeDomainAutoTunesRequestPrivate(ElasticsearchRequest::DescribeDomainAutoTunesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainAutoTunesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainAutoTunesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainAutoTunesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainAutoTunesResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeDomainAutoTunesRequestPrivate
 * \brief The DescribeDomainAutoTunesRequestPrivate class provides private implementation for DescribeDomainAutoTunesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeDomainAutoTunesRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeDomainAutoTunesRequestPrivate::DescribeDomainAutoTunesRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeDomainAutoTunesRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainAutoTunesRequest
 * class' copy constructor.
 */
DescribeDomainAutoTunesRequestPrivate::DescribeDomainAutoTunesRequestPrivate(
    const DescribeDomainAutoTunesRequestPrivate &other, DescribeDomainAutoTunesRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
