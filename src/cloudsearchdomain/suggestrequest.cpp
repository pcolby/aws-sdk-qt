/*
    Copyright 2013-2020 Paul Colby

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
