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
