// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevolumerequest.h"
#include "deletevolumerequest_p.h"
#include "deletevolumeresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteVolumeRequest
 * \brief The DeleteVolumeRequest class provides an interface for FSx DeleteVolume requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteVolume
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVolumeRequest::DeleteVolumeRequest(const DeleteVolumeRequest &other)
    : FSxRequest(new DeleteVolumeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVolumeRequest object.
 */
DeleteVolumeRequest::DeleteVolumeRequest()
    : FSxRequest(new DeleteVolumeRequestPrivate(FSxRequest::DeleteVolumeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVolumeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVolumeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVolumeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVolumeResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DeleteVolumeRequestPrivate
 * \brief The DeleteVolumeRequestPrivate class provides private implementation for DeleteVolumeRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteVolumeRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DeleteVolumeRequestPrivate::DeleteVolumeRequestPrivate(
    const FSxRequest::Action action, DeleteVolumeRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVolumeRequest
 * class' copy constructor.
 */
DeleteVolumeRequestPrivate::DeleteVolumeRequestPrivate(
    const DeleteVolumeRequestPrivate &other, DeleteVolumeRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
