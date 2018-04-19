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

#include "uploaddocumentsrequest.h"
#include "uploaddocumentsrequest_p.h"
#include "uploaddocumentsresponse.h"
#include "cloudsearchdomainrequest_p.h"

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::UploadDocumentsRequest
 * \brief The UploadDocumentsRequest class provides an interface for CloudSearchDomain UploadDocuments requests.
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
 * \sa CloudSearchDomainClient::uploadDocuments
 */

/*!
 * Constructs a copy of \a other.
 */
UploadDocumentsRequest::UploadDocumentsRequest(const UploadDocumentsRequest &other)
    : CloudSearchDomainRequest(new UploadDocumentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadDocumentsRequest object.
 */
UploadDocumentsRequest::UploadDocumentsRequest()
    : CloudSearchDomainRequest(new UploadDocumentsRequestPrivate(CloudSearchDomainRequest::UploadDocumentsAction, this))
{

}

/*!
 * \reimp
 */
bool UploadDocumentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadDocumentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadDocumentsRequest::response(QNetworkReply * const reply) const
{
    return new UploadDocumentsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearchDomain::UploadDocumentsRequestPrivate
 * \brief The UploadDocumentsRequestPrivate class provides private implementation for UploadDocumentsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a UploadDocumentsRequestPrivate object for CloudSearchDomain \a action,
 * with public implementation \a q.
 */
UploadDocumentsRequestPrivate::UploadDocumentsRequestPrivate(
    const CloudSearchDomainRequest::Action action, UploadDocumentsRequest * const q)
    : CloudSearchDomainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadDocumentsRequest
 * class' copy constructor.
 */
UploadDocumentsRequestPrivate::UploadDocumentsRequestPrivate(
    const UploadDocumentsRequestPrivate &other, UploadDocumentsRequest * const q)
    : CloudSearchDomainRequestPrivate(other, q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
