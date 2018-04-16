/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "searchrequest.h"
#include "searchrequest_p.h"
#include "searchresponse.h"
#include "cloudsearchdomainrequest_p.h"

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::SearchRequest
 *
 * \brief The SearchRequest class provides an interface for CloudSearchDomain Search requests.
 *
 * \ingroup CloudSearchDomain
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
 * @brief  Constructs a new SearchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchRequest::SearchRequest(const SearchRequest &other)
    : CloudSearchDomainRequest(new SearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SearchRequest object.
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
 * @brief  Construct an SearchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudSearchDomainClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchRequest::response(QNetworkReply * const reply) const
{
    return new SearchResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SearchRequestPrivate
 *
 * @brief  Private implementation for SearchRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SearchRequestPrivate object.
 *
 * @param  action  CloudSearchDomain action being performed.
 * @param  q       Pointer to this object's public SearchRequest instance.
 */
SearchRequestPrivate::SearchRequestPrivate(
    const CloudSearchDomainRequest::Action action, SearchRequest * const q)
    : CloudSearchDomainRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SearchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchRequest instance.
 */
SearchRequestPrivate::SearchRequestPrivate(
    const SearchRequestPrivate &other, SearchRequest * const q)
    : CloudSearchDomainRequestPrivate(other, q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
