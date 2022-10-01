// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
