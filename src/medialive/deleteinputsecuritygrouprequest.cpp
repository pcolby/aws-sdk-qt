// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinputsecuritygrouprequest.h"
#include "deleteinputsecuritygrouprequest_p.h"
#include "deleteinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupRequest
 * \brief The DeleteInputSecurityGroupRequest class provides an interface for MediaLive DeleteInputSecurityGroup requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteInputSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInputSecurityGroupRequest::DeleteInputSecurityGroupRequest(const DeleteInputSecurityGroupRequest &other)
    : MediaLiveRequest(new DeleteInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInputSecurityGroupRequest object.
 */
DeleteInputSecurityGroupRequest::DeleteInputSecurityGroupRequest()
    : MediaLiveRequest(new DeleteInputSecurityGroupRequestPrivate(MediaLiveRequest::DeleteInputSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInputSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInputSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInputSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupRequestPrivate
 * \brief The DeleteInputSecurityGroupRequestPrivate class provides private implementation for DeleteInputSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteInputSecurityGroupRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteInputSecurityGroupRequestPrivate::DeleteInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, DeleteInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInputSecurityGroupRequest
 * class' copy constructor.
 */
DeleteInputSecurityGroupRequestPrivate::DeleteInputSecurityGroupRequestPrivate(
    const DeleteInputSecurityGroupRequestPrivate &other, DeleteInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
