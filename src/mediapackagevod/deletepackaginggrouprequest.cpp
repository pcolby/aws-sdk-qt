// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackaginggrouprequest.h"
#include "deletepackaginggrouprequest_p.h"
#include "deletepackaginggroupresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingGroupRequest
 * \brief The DeletePackagingGroupRequest class provides an interface for MediaPackageVod DeletePackagingGroup requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::deletePackagingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePackagingGroupRequest::DeletePackagingGroupRequest(const DeletePackagingGroupRequest &other)
    : MediaPackageVodRequest(new DeletePackagingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePackagingGroupRequest object.
 */
DeletePackagingGroupRequest::DeletePackagingGroupRequest()
    : MediaPackageVodRequest(new DeletePackagingGroupRequestPrivate(MediaPackageVodRequest::DeletePackagingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePackagingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePackagingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePackagingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeletePackagingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingGroupRequestPrivate
 * \brief The DeletePackagingGroupRequestPrivate class provides private implementation for DeletePackagingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DeletePackagingGroupRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
DeletePackagingGroupRequestPrivate::DeletePackagingGroupRequestPrivate(
    const MediaPackageVodRequest::Action action, DeletePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePackagingGroupRequest
 * class' copy constructor.
 */
DeletePackagingGroupRequestPrivate::DeletePackagingGroupRequestPrivate(
    const DeletePackagingGroupRequestPrivate &other, DeletePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
