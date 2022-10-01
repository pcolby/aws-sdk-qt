// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbykeygrouprequest.h"
#include "listdistributionsbykeygrouprequest_p.h"
#include "listdistributionsbykeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByKeyGroupRequest
 * \brief The ListDistributionsByKeyGroupRequest class provides an interface for CloudFront ListDistributionsByKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByKeyGroupRequest::ListDistributionsByKeyGroupRequest(const ListDistributionsByKeyGroupRequest &other)
    : CloudFrontRequest(new ListDistributionsByKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByKeyGroupRequest object.
 */
ListDistributionsByKeyGroupRequest::ListDistributionsByKeyGroupRequest()
    : CloudFrontRequest(new ListDistributionsByKeyGroupRequestPrivate(CloudFrontRequest::ListDistributionsByKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByKeyGroupRequestPrivate
 * \brief The ListDistributionsByKeyGroupRequestPrivate class provides private implementation for ListDistributionsByKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsByKeyGroupRequestPrivate::ListDistributionsByKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByKeyGroupRequest
 * class' copy constructor.
 */
ListDistributionsByKeyGroupRequestPrivate::ListDistributionsByKeyGroupRequestPrivate(
    const ListDistributionsByKeyGroupRequestPrivate &other, ListDistributionsByKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
