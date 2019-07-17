/*
    Copyright 2013-2019 Paul Colby

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

#include "putobjectlockconfigurationrequest.h"
#include "putobjectlockconfigurationrequest_p.h"
#include "putobjectlockconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectLockConfigurationRequest
 * \brief The PutObjectLockConfigurationRequest class provides an interface for S3 PutObjectLockConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectLockConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectLockConfigurationRequest::PutObjectLockConfigurationRequest(const PutObjectLockConfigurationRequest &other)
    : S3Request(new PutObjectLockConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectLockConfigurationRequest object.
 */
PutObjectLockConfigurationRequest::PutObjectLockConfigurationRequest()
    : S3Request(new PutObjectLockConfigurationRequestPrivate(S3Request::PutObjectLockConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectLockConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectLockConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectLockConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectLockConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectLockConfigurationRequestPrivate
 * \brief The PutObjectLockConfigurationRequestPrivate class provides private implementation for PutObjectLockConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectLockConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectLockConfigurationRequestPrivate::PutObjectLockConfigurationRequestPrivate(
    const S3Request::Action action, PutObjectLockConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectLockConfigurationRequest
 * class' copy constructor.
 */
PutObjectLockConfigurationRequestPrivate::PutObjectLockConfigurationRequestPrivate(
    const PutObjectLockConfigurationRequestPrivate &other, PutObjectLockConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
