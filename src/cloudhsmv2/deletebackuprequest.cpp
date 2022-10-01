// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
