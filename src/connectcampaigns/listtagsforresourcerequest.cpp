// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforresourcerequest.h"
#include "listtagsforresourcerequest_p.h"
#include "listtagsforresourceresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ListTagsForResourceRequest
 * \brief The ListTagsForResourceRequest class provides an interface for ConnectCampaigns ListTagsForResource requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::listTagsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest(const ListTagsForResourceRequest &other)
    : ConnectCampaignsRequest(new ListTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForResourceRequest object.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest()
    : ConnectCampaignsRequest(new ListTagsForResourceRequestPrivate(ConnectCampaignsRequest::ListTagsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::ListTagsForResourceRequestPrivate
 * \brief The ListTagsForResourceRequestPrivate class provides private implementation for ListTagsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ListTagsForResourceRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const ConnectCampaignsRequest::Action action, ListTagsForResourceRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourceRequest
 * class' copy constructor.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const ListTagsForResourceRequestPrivate &other, ListTagsForResourceRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
