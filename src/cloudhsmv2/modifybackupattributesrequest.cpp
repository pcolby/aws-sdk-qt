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

#include "modifybackupattributesrequest.h"
#include "modifybackupattributesrequest_p.h"
#include "modifybackupattributesresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::ModifyBackupAttributesRequest
 * \brief The ModifyBackupAttributesRequest class provides an interface for CloudHSMV2 ModifyBackupAttributes requests.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::modifyBackupAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyBackupAttributesRequest::ModifyBackupAttributesRequest(const ModifyBackupAttributesRequest &other)
    : CloudHSMV2Request(new ModifyBackupAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyBackupAttributesRequest object.
 */
ModifyBackupAttributesRequest::ModifyBackupAttributesRequest()
    : CloudHSMV2Request(new ModifyBackupAttributesRequestPrivate(CloudHSMV2Request::ModifyBackupAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyBackupAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyBackupAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyBackupAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyBackupAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSMV2::ModifyBackupAttributesRequestPrivate
 * \brief The ModifyBackupAttributesRequestPrivate class provides private implementation for ModifyBackupAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a ModifyBackupAttributesRequestPrivate object for CloudHSMV2 \a action,
 * with public implementation \a q.
 */
ModifyBackupAttributesRequestPrivate::ModifyBackupAttributesRequestPrivate(
    const CloudHSMV2Request::Action action, ModifyBackupAttributesRequest * const q)
    : CloudHSMV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyBackupAttributesRequest
 * class' copy constructor.
 */
ModifyBackupAttributesRequestPrivate::ModifyBackupAttributesRequestPrivate(
    const ModifyBackupAttributesRequestPrivate &other, ModifyBackupAttributesRequest * const q)
    : CloudHSMV2RequestPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
