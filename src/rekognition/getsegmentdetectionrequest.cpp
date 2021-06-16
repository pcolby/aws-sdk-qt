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

#include "getsegmentdetectionrequest.h"
#include "getsegmentdetectionrequest_p.h"
#include "getsegmentdetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetSegmentDetectionRequest
 * \brief The GetSegmentDetectionRequest class provides an interface for Rekognition GetSegmentDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getSegmentDetection
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentDetectionRequest::GetSegmentDetectionRequest(const GetSegmentDetectionRequest &other)
    : RekognitionRequest(new GetSegmentDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentDetectionRequest object.
 */
GetSegmentDetectionRequest::GetSegmentDetectionRequest()
    : RekognitionRequest(new GetSegmentDetectionRequestPrivate(RekognitionRequest::GetSegmentDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentDetectionRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetSegmentDetectionRequestPrivate
 * \brief The GetSegmentDetectionRequestPrivate class provides private implementation for GetSegmentDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetSegmentDetectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
GetSegmentDetectionRequestPrivate::GetSegmentDetectionRequestPrivate(
    const RekognitionRequest::Action action, GetSegmentDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentDetectionRequest
 * class' copy constructor.
 */
GetSegmentDetectionRequestPrivate::GetSegmentDetectionRequestPrivate(
    const GetSegmentDetectionRequestPrivate &other, GetSegmentDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
