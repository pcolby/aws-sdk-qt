// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchrequest.h"
#include "searchrequest_p.h"
#include "searchresponse.h"
#include "cloudsearchdomainrequest_p.h"

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::SearchRequest
 * \brief The SearchRequest class provides an interface for CloudSearchDomain Search requests.
 *
 * \inmodule QtAwsCloudSearchDomain
 *
 *  You use the AmazonCloudSearch2013 API to upload documents to a search domain and search those documents.
 * 
 *  </p
 * 
 *  The endpoints for submitting <code>UploadDocuments</code>, <code>Search</code>, and <code>Suggest</code> requests are
 *  domain-specific. To get the endpoints for your domain, use the Amazon CloudSearch configuration service
 *  <code>DescribeDomains</code> action. The domain endpoints are also displayed on the domain dashboard in the Amazon
 *  CloudSearch console. You submit suggest requests to the search endpoint.
 * 
 *  </p
 * 
 *  For more information, see the <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide">Amazon CloudSearch
 *  Developer
 *
 * \sa CloudSearchDomainClient::search
 */

/*!
 * Constructs a copy of \a other.
 */
SearchRequest::SearchRequest(const SearchRequest &other)
    : CloudSearchDomainRequest(new SearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchRequest object.
 */
SearchRequest::SearchRequest()
    : CloudSearchDomainRequest(new SearchRequestPrivate(CloudSearchDomainRequest::SearchAction, this))
{

}

/*!
 * \reimp
 */
bool SearchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchRequest::response(QNetworkReply * const reply) const
{
    return new SearchResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearchDomain::SearchRequestPrivate
 * \brief The SearchRequestPrivate class provides private implementation for SearchRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a SearchRequestPrivate object for CloudSearchDomain \a action,
 * with public implementation \a q.
 */
SearchRequestPrivate::SearchRequestPrivate(
    const CloudSearchDomainRequest::Action action, SearchRequest * const q)
    : CloudSearchDomainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchRequest
 * class' copy constructor.
 */
SearchRequestPrivate::SearchRequestPrivate(
    const SearchRequestPrivate &other, SearchRequest * const q)
    : CloudSearchDomainRequestPrivate(other, q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
