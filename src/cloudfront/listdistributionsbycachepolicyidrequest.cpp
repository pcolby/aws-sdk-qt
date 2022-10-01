// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbycachepolicyidrequest.h"
#include "listdistributionsbycachepolicyidrequest_p.h"
#include "listdistributionsbycachepolicyidresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByCachePolicyIdRequest
 * \brief The ListDistributionsByCachePolicyIdRequest class provides an interface for CloudFront ListDistributionsByCachePolicyId requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByCachePolicyId
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByCachePolicyIdRequest::ListDistributionsByCachePolicyIdRequest(const ListDistributionsByCachePolicyIdRequest &other)
    : CloudFrontRequest(new ListDistributionsByCachePolicyIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByCachePolicyIdRequest object.
 */
ListDistributionsByCachePolicyIdRequest::ListDistributionsByCachePolicyIdRequest()
    : CloudFrontRequest(new ListDistributionsByCachePolicyIdRequestPrivate(CloudFrontRequest::ListDistributionsByCachePolicyIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByCachePolicyIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByCachePolicyIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByCachePolicyIdRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByCachePolicyIdResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByCachePolicyIdRequestPrivate
 * \brief The ListDistributionsByCachePolicyIdRequestPrivate class provides private implementation for ListDistributionsByCachePolicyIdRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByCachePolicyIdRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsByCachePolicyIdRequestPrivate::ListDistributionsByCachePolicyIdRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByCachePolicyIdRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByCachePolicyIdRequest
 * class' copy constructor.
 */
ListDistributionsByCachePolicyIdRequestPrivate::ListDistributionsByCachePolicyIdRequestPrivate(
    const ListDistributionsByCachePolicyIdRequestPrivate &other, ListDistributionsByCachePolicyIdRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
