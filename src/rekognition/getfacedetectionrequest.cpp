/*
    Copyright 2013-2020 Paul Colby

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

#include "getfacedetectionrequest.h"
#include "getfacedetectionrequest_p.h"
#include "getfacedetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetFaceDetectionRequest
 * \brief The GetFaceDetectionRequest class provides an interface for Rekognition GetFaceDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getFaceDetection
 */

/*!
 * Constructs a copy of \a other.
 */
GetFaceDetectionRequest::GetFaceDetectionRequest(const GetFaceDetectionRequest &other)
    : RekognitionRequest(new GetFaceDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFaceDetectionRequest object.
 */
GetFaceDetectionRequest::GetFaceDetectionRequest()
    : RekognitionRequest(new GetFaceDetectionRequestPrivate(RekognitionRequest::GetFaceDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFaceDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFaceDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFaceDetectionRequest::response(QNetworkReply * const reply) const
{
    return new GetFaceDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetFaceDetectionRequestPrivate
 * \brief The GetFaceDetectionRequestPrivate class provides private implementation for GetFaceDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetFaceDetectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
GetFaceDetectionRequestPrivate::GetFaceDetectionRequestPrivate(
    const RekognitionRequest::Action action, GetFaceDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFaceDetectionRequest
 * class' copy constructor.
 */
GetFaceDetectionRequestPrivate::GetFaceDetectionRequestPrivate(
    const GetFaceDetectionRequestPrivate &other, GetFaceDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
