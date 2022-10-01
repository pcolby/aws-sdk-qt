// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rotatechannelcredentialsrequest.h"
#include "rotatechannelcredentialsrequest_p.h"
#include "rotatechannelcredentialsresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::RotateChannelCredentialsRequest
 * \brief The RotateChannelCredentialsRequest class provides an interface for MediaPackage RotateChannelCredentials requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::rotateChannelCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
RotateChannelCredentialsRequest::RotateChannelCredentialsRequest(const RotateChannelCredentialsRequest &other)
    : MediaPackageRequest(new RotateChannelCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RotateChannelCredentialsRequest object.
 */
RotateChannelCredentialsRequest::RotateChannelCredentialsRequest()
    : MediaPackageRequest(new RotateChannelCredentialsRequestPrivate(MediaPackageRequest::RotateChannelCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool RotateChannelCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RotateChannelCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RotateChannelCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new RotateChannelCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::RotateChannelCredentialsRequestPrivate
 * \brief The RotateChannelCredentialsRequestPrivate class provides private implementation for RotateChannelCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a RotateChannelCredentialsRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
RotateChannelCredentialsRequestPrivate::RotateChannelCredentialsRequestPrivate(
    const MediaPackageRequest::Action action, RotateChannelCredentialsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RotateChannelCredentialsRequest
 * class' copy constructor.
 */
RotateChannelCredentialsRequestPrivate::RotateChannelCredentialsRequestPrivate(
    const RotateChannelCredentialsRequestPrivate &other, RotateChannelCredentialsRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
