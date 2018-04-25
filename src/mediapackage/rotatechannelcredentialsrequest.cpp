/*
    Copyright 2013-2018 Paul Colby

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
