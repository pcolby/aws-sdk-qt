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

#include "updateuploadrequest.h"
#include "updateuploadrequest_p.h"
#include "updateuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateUploadRequest
 * \brief The UpdateUploadRequest class provides an interface for DeviceFarm UpdateUpload requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateUpload
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUploadRequest::UpdateUploadRequest(const UpdateUploadRequest &other)
    : DeviceFarmRequest(new UpdateUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUploadRequest object.
 */
UpdateUploadRequest::UpdateUploadRequest()
    : DeviceFarmRequest(new UpdateUploadRequestPrivate(DeviceFarmRequest::UpdateUploadAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUploadRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUploadResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateUploadRequestPrivate
 * \brief The UpdateUploadRequestPrivate class provides private implementation for UpdateUploadRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateUploadRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateUploadRequestPrivate::UpdateUploadRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUploadRequest
 * class' copy constructor.
 */
UpdateUploadRequestPrivate::UpdateUploadRequestPrivate(
    const UpdateUploadRequestPrivate &other, UpdateUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
