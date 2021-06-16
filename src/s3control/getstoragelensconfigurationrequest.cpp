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

#include "getstoragelensconfigurationrequest.h"
#include "getstoragelensconfigurationrequest_p.h"
#include "getstoragelensconfigurationresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationRequest
 * \brief The GetStorageLensConfigurationRequest class provides an interface for S3Control GetStorageLensConfiguration requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getStorageLensConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetStorageLensConfigurationRequest::GetStorageLensConfigurationRequest(const GetStorageLensConfigurationRequest &other)
    : S3ControlRequest(new GetStorageLensConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStorageLensConfigurationRequest object.
 */
GetStorageLensConfigurationRequest::GetStorageLensConfigurationRequest()
    : S3ControlRequest(new GetStorageLensConfigurationRequestPrivate(S3ControlRequest::GetStorageLensConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetStorageLensConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStorageLensConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStorageLensConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetStorageLensConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationRequestPrivate
 * \brief The GetStorageLensConfigurationRequestPrivate class provides private implementation for GetStorageLensConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetStorageLensConfigurationRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetStorageLensConfigurationRequestPrivate::GetStorageLensConfigurationRequestPrivate(
    const S3ControlRequest::Action action, GetStorageLensConfigurationRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStorageLensConfigurationRequest
 * class' copy constructor.
 */
GetStorageLensConfigurationRequestPrivate::GetStorageLensConfigurationRequestPrivate(
    const GetStorageLensConfigurationRequestPrivate &other, GetStorageLensConfigurationRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
