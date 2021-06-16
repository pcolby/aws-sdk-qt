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

#include "deletestreamingimagerequest.h"
#include "deletestreamingimagerequest_p.h"
#include "deletestreamingimageresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingImageRequest
 * \brief The DeleteStreamingImageRequest class provides an interface for NimbleStudio DeleteStreamingImage requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStreamingImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamingImageRequest::DeleteStreamingImageRequest(const DeleteStreamingImageRequest &other)
    : NimbleStudioRequest(new DeleteStreamingImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamingImageRequest object.
 */
DeleteStreamingImageRequest::DeleteStreamingImageRequest()
    : NimbleStudioRequest(new DeleteStreamingImageRequestPrivate(NimbleStudioRequest::DeleteStreamingImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamingImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamingImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamingImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamingImageResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingImageRequestPrivate
 * \brief The DeleteStreamingImageRequestPrivate class provides private implementation for DeleteStreamingImageRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStreamingImageRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
DeleteStreamingImageRequestPrivate::DeleteStreamingImageRequestPrivate(
    const NimbleStudioRequest::Action action, DeleteStreamingImageRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamingImageRequest
 * class' copy constructor.
 */
DeleteStreamingImageRequestPrivate::DeleteStreamingImageRequestPrivate(
    const DeleteStreamingImageRequestPrivate &other, DeleteStreamingImageRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
