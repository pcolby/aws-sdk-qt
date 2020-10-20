/*
    Copyright 2013-2020 Paul Colby

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

#include "getobjectlockconfigurationrequest.h"
#include "getobjectlockconfigurationrequest_p.h"
#include "getobjectlockconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectLockConfigurationRequest
 * \brief The GetObjectLockConfigurationRequest class provides an interface for S3 GetObjectLockConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectLockConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectLockConfigurationRequest::GetObjectLockConfigurationRequest(const GetObjectLockConfigurationRequest &other)
    : S3Request(new GetObjectLockConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectLockConfigurationRequest object.
 */
GetObjectLockConfigurationRequest::GetObjectLockConfigurationRequest()
    : S3Request(new GetObjectLockConfigurationRequestPrivate(S3Request::GetObjectLockConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectLockConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectLockConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectLockConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectLockConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectLockConfigurationRequestPrivate
 * \brief The GetObjectLockConfigurationRequestPrivate class provides private implementation for GetObjectLockConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectLockConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectLockConfigurationRequestPrivate::GetObjectLockConfigurationRequestPrivate(
    const S3Request::Action action, GetObjectLockConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectLockConfigurationRequest
 * class' copy constructor.
 */
GetObjectLockConfigurationRequestPrivate::GetObjectLockConfigurationRequestPrivate(
    const GetObjectLockConfigurationRequestPrivate &other, GetObjectLockConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
