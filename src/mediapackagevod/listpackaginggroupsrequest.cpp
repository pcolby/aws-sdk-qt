// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpackaginggroupsrequest.h"
#include "listpackaginggroupsrequest_p.h"
#include "listpackaginggroupsresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ListPackagingGroupsRequest
 * \brief The ListPackagingGroupsRequest class provides an interface for MediaPackageVod ListPackagingGroups requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::listPackagingGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListPackagingGroupsRequest::ListPackagingGroupsRequest(const ListPackagingGroupsRequest &other)
    : MediaPackageVodRequest(new ListPackagingGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPackagingGroupsRequest object.
 */
ListPackagingGroupsRequest::ListPackagingGroupsRequest()
    : MediaPackageVodRequest(new ListPackagingGroupsRequestPrivate(MediaPackageVodRequest::ListPackagingGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPackagingGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPackagingGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPackagingGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListPackagingGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::ListPackagingGroupsRequestPrivate
 * \brief The ListPackagingGroupsRequestPrivate class provides private implementation for ListPackagingGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ListPackagingGroupsRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
ListPackagingGroupsRequestPrivate::ListPackagingGroupsRequestPrivate(
    const MediaPackageVodRequest::Action action, ListPackagingGroupsRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPackagingGroupsRequest
 * class' copy constructor.
 */
ListPackagingGroupsRequestPrivate::ListPackagingGroupsRequestPrivate(
    const ListPackagingGroupsRequestPrivate &other, ListPackagingGroupsRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
