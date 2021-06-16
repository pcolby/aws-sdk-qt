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

#include "getstreamingimagerequest.h"
#include "getstreamingimagerequest_p.h"
#include "getstreamingimageresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStreamingImageRequest
 * \brief The GetStreamingImageRequest class provides an interface for NimbleStudio GetStreamingImage requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStreamingImage
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingImageRequest::GetStreamingImageRequest(const GetStreamingImageRequest &other)
    : NimbleStudioRequest(new GetStreamingImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingImageRequest object.
 */
GetStreamingImageRequest::GetStreamingImageRequest()
    : NimbleStudioRequest(new GetStreamingImageRequestPrivate(NimbleStudioRequest::GetStreamingImageAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingImageRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingImageResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetStreamingImageRequestPrivate
 * \brief The GetStreamingImageRequestPrivate class provides private implementation for GetStreamingImageRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStreamingImageRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetStreamingImageRequestPrivate::GetStreamingImageRequestPrivate(
    const NimbleStudioRequest::Action action, GetStreamingImageRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingImageRequest
 * class' copy constructor.
 */
GetStreamingImageRequestPrivate::GetStreamingImageRequestPrivate(
    const GetStreamingImageRequestPrivate &other, GetStreamingImageRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
