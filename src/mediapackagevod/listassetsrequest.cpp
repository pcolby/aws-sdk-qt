// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassetsrequest.h"
#include "listassetsrequest_p.h"
#include "listassetsresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ListAssetsRequest
 * \brief The ListAssetsRequest class provides an interface for MediaPackageVod ListAssets requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::listAssets
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssetsRequest::ListAssetsRequest(const ListAssetsRequest &other)
    : MediaPackageVodRequest(new ListAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssetsRequest object.
 */
ListAssetsRequest::ListAssetsRequest()
    : MediaPackageVodRequest(new ListAssetsRequestPrivate(MediaPackageVodRequest::ListAssetsAction, this))
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
 * \class QtAws::MediaPackageVod::ListAssetsRequestPrivate
 * \brief The ListAssetsRequestPrivate class provides private implementation for ListAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ListAssetsRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
ListAssetsRequestPrivate::ListAssetsRequestPrivate(
    const MediaPackageVodRequest::Action action, ListAssetsRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
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
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
