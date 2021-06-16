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

#include "createpackaginggrouprequest.h"
#include "createpackaginggrouprequest_p.h"
#include "createpackaginggroupresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingGroupRequest
 * \brief The CreatePackagingGroupRequest class provides an interface for MediaPackageVod CreatePackagingGroup requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::createPackagingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePackagingGroupRequest::CreatePackagingGroupRequest(const CreatePackagingGroupRequest &other)
    : MediaPackageVodRequest(new CreatePackagingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePackagingGroupRequest object.
 */
CreatePackagingGroupRequest::CreatePackagingGroupRequest()
    : MediaPackageVodRequest(new CreatePackagingGroupRequestPrivate(MediaPackageVodRequest::CreatePackagingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePackagingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePackagingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePackagingGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreatePackagingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingGroupRequestPrivate
 * \brief The CreatePackagingGroupRequestPrivate class provides private implementation for CreatePackagingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a CreatePackagingGroupRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
CreatePackagingGroupRequestPrivate::CreatePackagingGroupRequestPrivate(
    const MediaPackageVodRequest::Action action, CreatePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePackagingGroupRequest
 * class' copy constructor.
 */
CreatePackagingGroupRequestPrivate::CreatePackagingGroupRequestPrivate(
    const CreatePackagingGroupRequestPrivate &other, CreatePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
