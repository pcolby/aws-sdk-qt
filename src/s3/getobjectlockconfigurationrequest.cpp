// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
