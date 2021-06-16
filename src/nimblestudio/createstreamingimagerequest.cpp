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

#include "createstreamingimagerequest.h"
#include "createstreamingimagerequest_p.h"
#include "createstreamingimageresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStreamingImageRequest
 * \brief The CreateStreamingImageRequest class provides an interface for NimbleStudio CreateStreamingImage requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStreamingImage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingImageRequest::CreateStreamingImageRequest(const CreateStreamingImageRequest &other)
    : NimbleStudioRequest(new CreateStreamingImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingImageRequest object.
 */
CreateStreamingImageRequest::CreateStreamingImageRequest()
    : NimbleStudioRequest(new CreateStreamingImageRequestPrivate(NimbleStudioRequest::CreateStreamingImageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingImageRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingImageResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::CreateStreamingImageRequestPrivate
 * \brief The CreateStreamingImageRequestPrivate class provides private implementation for CreateStreamingImageRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStreamingImageRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
CreateStreamingImageRequestPrivate::CreateStreamingImageRequestPrivate(
    const NimbleStudioRequest::Action action, CreateStreamingImageRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingImageRequest
 * class' copy constructor.
 */
CreateStreamingImageRequestPrivate::CreateStreamingImageRequestPrivate(
    const CreateStreamingImageRequestPrivate &other, CreateStreamingImageRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
