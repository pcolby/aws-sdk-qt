/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
