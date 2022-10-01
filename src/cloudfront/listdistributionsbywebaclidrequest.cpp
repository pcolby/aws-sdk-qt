// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbywebaclidrequest.h"
#include "listdistributionsbywebaclidrequest_p.h"
#include "listdistributionsbywebaclidresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdRequest
 * \brief The ListDistributionsByWebACLIdRequest class provides an interface for CloudFront ListDistributionsByWebACLId requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByWebACLId
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByWebACLIdRequest::ListDistributionsByWebACLIdRequest(const ListDistributionsByWebACLIdRequest &other)
    : CloudFrontRequest(new ListDistributionsByWebACLIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByWebACLIdRequest object.
 */
ListDistributionsByWebACLIdRequest::ListDistributionsByWebACLIdRequest()
    : CloudFrontRequest(new ListDistributionsByWebACLIdRequestPrivate(CloudFrontRequest::ListDistributionsByWebACLIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByWebACLIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByWebACLIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByWebACLIdRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByWebACLIdResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdRequestPrivate
 * \brief The ListDistributionsByWebACLIdRequestPrivate class provides private implementation for ListDistributionsByWebACLIdRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByWebACLIdRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsByWebACLIdRequestPrivate::ListDistributionsByWebACLIdRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByWebACLIdRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByWebACLIdRequest
 * class' copy constructor.
 */
ListDistributionsByWebACLIdRequestPrivate::ListDistributionsByWebACLIdRequestPrivate(
    const ListDistributionsByWebACLIdRequestPrivate &other, ListDistributionsByWebACLIdRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
