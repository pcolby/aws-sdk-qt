// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcachepoliciesrequest.h"
#include "listcachepoliciesrequest_p.h"
#include "listcachepoliciesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListCachePoliciesRequest
 * \brief The ListCachePoliciesRequest class provides an interface for CloudFront ListCachePolicies requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listCachePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListCachePoliciesRequest::ListCachePoliciesRequest(const ListCachePoliciesRequest &other)
    : CloudFrontRequest(new ListCachePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCachePoliciesRequest object.
 */
ListCachePoliciesRequest::ListCachePoliciesRequest()
    : CloudFrontRequest(new ListCachePoliciesRequestPrivate(CloudFrontRequest::ListCachePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCachePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCachePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCachePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListCachePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListCachePoliciesRequestPrivate
 * \brief The ListCachePoliciesRequestPrivate class provides private implementation for ListCachePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListCachePoliciesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListCachePoliciesRequestPrivate::ListCachePoliciesRequestPrivate(
    const CloudFrontRequest::Action action, ListCachePoliciesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCachePoliciesRequest
 * class' copy constructor.
 */
ListCachePoliciesRequestPrivate::ListCachePoliciesRequestPrivate(
    const ListCachePoliciesRequestPrivate &other, ListCachePoliciesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
