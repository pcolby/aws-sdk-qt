// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassetsrequest.h"
#include "listassetsrequest_p.h"
#include "listassetsresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListAssetsRequest
 * \brief The ListAssetsRequest class provides an interface for Outposts ListAssets requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listAssets
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssetsRequest::ListAssetsRequest(const ListAssetsRequest &other)
    : OutpostsRequest(new ListAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssetsRequest object.
 */
ListAssetsRequest::ListAssetsRequest()
    : OutpostsRequest(new ListAssetsRequestPrivate(OutpostsRequest::ListAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssetsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::ListAssetsRequestPrivate
 * \brief The ListAssetsRequestPrivate class provides private implementation for ListAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListAssetsRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
ListAssetsRequestPrivate::ListAssetsRequestPrivate(
    const OutpostsRequest::Action action, ListAssetsRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssetsRequest
 * class' copy constructor.
 */
ListAssetsRequestPrivate::ListAssetsRequestPrivate(
    const ListAssetsRequestPrivate &other, ListAssetsRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
