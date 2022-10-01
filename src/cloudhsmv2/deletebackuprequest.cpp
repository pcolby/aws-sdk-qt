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

#include "deletebackuprequest.h"
#include "deletebackuprequest_p.h"
#include "deletebackupresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DeleteBackupRequest
 * \brief The DeleteBackupRequest class provides an interface for CloudHsmV2 DeleteBackup requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::deleteBackup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupRequest::DeleteBackupRequest(const DeleteBackupRequest &other)
    : CloudHsmV2Request(new DeleteBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupRequest object.
 */
DeleteBackupRequest::DeleteBackupRequest()
    : CloudHsmV2Request(new DeleteBackupRequestPrivate(CloudHsmV2Request::DeleteBackupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsmV2::DeleteBackupRequestPrivate
 * \brief The DeleteBackupRequestPrivate class provides private implementation for DeleteBackupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DeleteBackupRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
DeleteBackupRequestPrivate::DeleteBackupRequestPrivate(
    const CloudHsmV2Request::Action action, DeleteBackupRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupRequest
 * class' copy constructor.
 */
DeleteBackupRequestPrivate::DeleteBackupRequestPrivate(
    const DeleteBackupRequestPrivate &other, DeleteBackupRequest * const q)
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
