// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "suggestrequest.h"
#include "suggestrequest_p.h"
#include "suggestresponse.h"
#include "cloudsearchdomainrequest_p.h"

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::SuggestRequest
 * \brief The SuggestRequest class provides an interface for CloudSearchDomain Suggest requests.
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
 * \sa CloudSearchDomainClient::suggest
 */

/*!
 * Constructs a copy of \a other.
 */
SuggestRequest::SuggestRequest(const SuggestRequest &other)
    : CloudSearchDomainRequest(new SuggestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SuggestRequest object.
 */
SuggestRequest::SuggestRequest()
    : CloudSearchDomainRequest(new SuggestRequestPrivate(CloudSearchDomainRequest::SuggestAction, this))
{

}

/*!
 * \reimp
 */
bool SuggestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SuggestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SuggestRequest::response(QNetworkReply * const reply) const
{
    return new SuggestResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearchDomain::SuggestRequestPrivate
 * \brief The SuggestRequestPrivate class provides private implementation for SuggestRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a SuggestRequestPrivate object for CloudSearchDomain \a action,
 * with public implementation \a q.
 */
SuggestRequestPrivate::SuggestRequestPrivate(
    const CloudSearchDomainRequest::Action action, SuggestRequest * const q)
    : CloudSearchDomainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SuggestRequest
 * class' copy constructor.
 */
SuggestRequestPrivate::SuggestRequestPrivate(
    const SuggestRequestPrivate &other, SuggestRequest * const q)
    : CloudSearchDomainRequestPrivate(other, q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
