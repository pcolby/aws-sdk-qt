// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbyresponseheaderspolicyidrequest.h"
#include "listdistributionsbyresponseheaderspolicyidrequest_p.h"
#include "listdistributionsbyresponseheaderspolicyidresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByResponseHeadersPolicyIdRequest
 * \brief The ListDistributionsByResponseHeadersPolicyIdRequest class provides an interface for CloudFront ListDistributionsByResponseHeadersPolicyId requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByResponseHeadersPolicyId
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByResponseHeadersPolicyIdRequest::ListDistributionsByResponseHeadersPolicyIdRequest(const ListDistributionsByResponseHeadersPolicyIdRequest &other)
    : CloudFrontRequest(new ListDistributionsByResponseHeadersPolicyIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByResponseHeadersPolicyIdRequest object.
 */
ListDistributionsByResponseHeadersPolicyIdRequest::ListDistributionsByResponseHeadersPolicyIdRequest()
    : CloudFrontRequest(new ListDistributionsByResponseHeadersPolicyIdRequestPrivate(CloudFrontRequest::ListDistributionsByResponseHeadersPolicyIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByResponseHeadersPolicyIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByResponseHeadersPolicyIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByResponseHeadersPolicyIdRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByResponseHeadersPolicyIdResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByResponseHeadersPolicyIdRequestPrivate
 * \brief The ListDistributionsByResponseHeadersPolicyIdRequestPrivate class provides private implementation for ListDistributionsByResponseHeadersPolicyIdRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByResponseHeadersPolicyIdRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsByResponseHeadersPolicyIdRequestPrivate::ListDistributionsByResponseHeadersPolicyIdRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByResponseHeadersPolicyIdRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByResponseHeadersPolicyIdRequest
 * class' copy constructor.
 */
ListDistributionsByResponseHeadersPolicyIdRequestPrivate::ListDistributionsByResponseHeadersPolicyIdRequestPrivate(
    const ListDistributionsByResponseHeadersPolicyIdRequestPrivate &other, ListDistributionsByResponseHeadersPolicyIdRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
