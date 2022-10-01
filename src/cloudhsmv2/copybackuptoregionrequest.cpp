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

#include "copybackuptoregionrequest.h"
#include "copybackuptoregionrequest_p.h"
#include "copybackuptoregionresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::CopyBackupToRegionRequest
 * \brief The CopyBackupToRegionRequest class provides an interface for CloudHsmV2 CopyBackupToRegion requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::copyBackupToRegion
 */

/*!
 * Constructs a copy of \a other.
 */
CopyBackupToRegionRequest::CopyBackupToRegionRequest(const CopyBackupToRegionRequest &other)
    : CloudHsmV2Request(new CopyBackupToRegionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyBackupToRegionRequest object.
 */
CopyBackupToRegionRequest::CopyBackupToRegionRequest()
    : CloudHsmV2Request(new CopyBackupToRegionRequestPrivate(CloudHsmV2Request::CopyBackupToRegionAction, this))
{

}

/*!
 * \reimp
 */
bool CopyBackupToRegionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyBackupToRegionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyBackupToRegionRequest::response(QNetworkReply * const reply) const
{
    return new CopyBackupToRegionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsmV2::CopyBackupToRegionRequestPrivate
 * \brief The CopyBackupToRegionRequestPrivate class provides private implementation for CopyBackupToRegionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CopyBackupToRegionRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
CopyBackupToRegionRequestPrivate::CopyBackupToRegionRequestPrivate(
    const CloudHsmV2Request::Action action, CopyBackupToRegionRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyBackupToRegionRequest
 * class' copy constructor.
 */
CopyBackupToRegionRequestPrivate::CopyBackupToRegionRequestPrivate(
    const CopyBackupToRegionRequestPrivate &other, CopyBackupToRegionRequest * const q)
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
