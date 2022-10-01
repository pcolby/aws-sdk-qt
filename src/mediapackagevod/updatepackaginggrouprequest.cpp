// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepackaginggrouprequest.h"
#include "updatepackaginggrouprequest_p.h"
#include "updatepackaginggroupresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::UpdatePackagingGroupRequest
 * \brief The UpdatePackagingGroupRequest class provides an interface for MediaPackageVod UpdatePackagingGroup requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::updatePackagingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePackagingGroupRequest::UpdatePackagingGroupRequest(const UpdatePackagingGroupRequest &other)
    : MediaPackageVodRequest(new UpdatePackagingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePackagingGroupRequest object.
 */
UpdatePackagingGroupRequest::UpdatePackagingGroupRequest()
    : MediaPackageVodRequest(new UpdatePackagingGroupRequestPrivate(MediaPackageVodRequest::UpdatePackagingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePackagingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePackagingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePackagingGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePackagingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::UpdatePackagingGroupRequestPrivate
 * \brief The UpdatePackagingGroupRequestPrivate class provides private implementation for UpdatePackagingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a UpdatePackagingGroupRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
UpdatePackagingGroupRequestPrivate::UpdatePackagingGroupRequestPrivate(
    const MediaPackageVodRequest::Action action, UpdatePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePackagingGroupRequest
 * class' copy constructor.
 */
UpdatePackagingGroupRequestPrivate::UpdatePackagingGroupRequestPrivate(
    const UpdatePackagingGroupRequestPrivate &other, UpdatePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
