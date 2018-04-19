/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startfacedetectionrequest.h"
#include "startfacedetectionrequest_p.h"
#include "startfacedetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartFaceDetectionRequest
 * \brief The StartFaceDetectionRequest class provides an interface for Rekognition StartFaceDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startFaceDetection
 */

/*!
 * Constructs a copy of \a other.
 */
StartFaceDetectionRequest::StartFaceDetectionRequest(const StartFaceDetectionRequest &other)
    : RekognitionRequest(new StartFaceDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFaceDetectionRequest object.
 */
StartFaceDetectionRequest::StartFaceDetectionRequest()
    : RekognitionRequest(new StartFaceDetectionRequestPrivate(RekognitionRequest::StartFaceDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool StartFaceDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFaceDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFaceDetectionRequest::response(QNetworkReply * const reply) const
{
    return new StartFaceDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartFaceDetectionRequestPrivate
 * \brief The StartFaceDetectionRequestPrivate class provides private implementation for StartFaceDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 *
 * Constructs a StartFaceDetectionRequestPrivate object for Rekognition \a action with,
 * public implementation \a q.
 */
StartFaceDetectionRequestPrivate::StartFaceDetectionRequestPrivate(
    const RekognitionRequest::Action action, StartFaceDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFaceDetectionRequest
 * class' copy constructor.
 */
StartFaceDetectionRequestPrivate::StartFaceDetectionRequestPrivate(
    const StartFaceDetectionRequestPrivate &other, StartFaceDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
