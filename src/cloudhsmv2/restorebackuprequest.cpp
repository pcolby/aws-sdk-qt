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

#include "restorebackuprequest.h"
#include "restorebackuprequest_p.h"
#include "restorebackupresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::RestoreBackupRequest
 * \brief The RestoreBackupRequest class provides an interface for CloudHsmV2 RestoreBackup requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::restoreBackup
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreBackupRequest::RestoreBackupRequest(const RestoreBackupRequest &other)
    : CloudHsmV2Request(new RestoreBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreBackupRequest object.
 */
RestoreBackupRequest::RestoreBackupRequest()
    : CloudHsmV2Request(new RestoreBackupRequestPrivate(CloudHsmV2Request::RestoreBackupAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreBackupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreBackupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreBackupRequest::response(QNetworkReply * const reply) const
{
    return new RestoreBackupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsmV2::RestoreBackupRequestPrivate
 * \brief The RestoreBackupRequestPrivate class provides private implementation for RestoreBackupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a RestoreBackupRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
RestoreBackupRequestPrivate::RestoreBackupRequestPrivate(
    const CloudHsmV2Request::Action action, RestoreBackupRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreBackupRequest
 * class' copy constructor.
 */
RestoreBackupRequestPrivate::RestoreBackupRequestPrivate(
    const RestoreBackupRequestPrivate &other, RestoreBackupRequest * const q)
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
