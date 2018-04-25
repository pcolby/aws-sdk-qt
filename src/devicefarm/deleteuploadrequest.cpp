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

#include "deleteuploadrequest.h"
#include "deleteuploadrequest_p.h"
#include "deleteuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteUploadRequest
 * \brief The DeleteUploadRequest class provides an interface for DeviceFarm DeleteUpload requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteUpload
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUploadRequest::DeleteUploadRequest(const DeleteUploadRequest &other)
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUploadRequest object.
 */
DeleteUploadRequest::DeleteUploadRequest()
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(DeviceFarmRequest::DeleteUploadAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUploadRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUploadResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteUploadRequestPrivate
 * \brief The DeleteUploadRequestPrivate class provides private implementation for DeleteUploadRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteUploadRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUploadRequest
 * class' copy constructor.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeleteUploadRequestPrivate &other, DeleteUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
