// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
