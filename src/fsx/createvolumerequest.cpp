// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvolumerequest.h"
#include "createvolumerequest_p.h"
#include "createvolumeresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateVolumeRequest
 * \brief The CreateVolumeRequest class provides an interface for FSx CreateVolume requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createVolume
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVolumeRequest::CreateVolumeRequest(const CreateVolumeRequest &other)
    : FSxRequest(new CreateVolumeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVolumeRequest object.
 */
CreateVolumeRequest::CreateVolumeRequest()
    : FSxRequest(new CreateVolumeRequestPrivate(FSxRequest::CreateVolumeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVolumeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVolumeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVolumeRequest::response(QNetworkReply * const reply) const
{
    return new CreateVolumeResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateVolumeRequestPrivate
 * \brief The CreateVolumeRequestPrivate class provides private implementation for CreateVolumeRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateVolumeRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const FSxRequest::Action action, CreateVolumeRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVolumeRequest
 * class' copy constructor.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const CreateVolumeRequestPrivate &other, CreateVolumeRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
