// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinputsecuritygrouprequest.h"
#include "createinputsecuritygrouprequest_p.h"
#include "createinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputSecurityGroupRequest
 * \brief The CreateInputSecurityGroupRequest class provides an interface for MediaLive CreateInputSecurityGroup requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createInputSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInputSecurityGroupRequest::CreateInputSecurityGroupRequest(const CreateInputSecurityGroupRequest &other)
    : MediaLiveRequest(new CreateInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInputSecurityGroupRequest object.
 */
CreateInputSecurityGroupRequest::CreateInputSecurityGroupRequest()
    : MediaLiveRequest(new CreateInputSecurityGroupRequestPrivate(MediaLiveRequest::CreateInputSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInputSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInputSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateInputSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreateInputSecurityGroupRequestPrivate
 * \brief The CreateInputSecurityGroupRequestPrivate class provides private implementation for CreateInputSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateInputSecurityGroupRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreateInputSecurityGroupRequestPrivate::CreateInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, CreateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInputSecurityGroupRequest
 * class' copy constructor.
 */
CreateInputSecurityGroupRequestPrivate::CreateInputSecurityGroupRequestPrivate(
    const CreateInputSecurityGroupRequestPrivate &other, CreateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
