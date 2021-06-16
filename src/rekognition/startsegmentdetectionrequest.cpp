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

#include "startsegmentdetectionrequest.h"
#include "startsegmentdetectionrequest_p.h"
#include "startsegmentdetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartSegmentDetectionRequest
 * \brief The StartSegmentDetectionRequest class provides an interface for Rekognition StartSegmentDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startSegmentDetection
 */

/*!
 * Constructs a copy of \a other.
 */
StartSegmentDetectionRequest::StartSegmentDetectionRequest(const StartSegmentDetectionRequest &other)
    : RekognitionRequest(new StartSegmentDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSegmentDetectionRequest object.
 */
StartSegmentDetectionRequest::StartSegmentDetectionRequest()
    : RekognitionRequest(new StartSegmentDetectionRequestPrivate(RekognitionRequest::StartSegmentDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool StartSegmentDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSegmentDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSegmentDetectionRequest::response(QNetworkReply * const reply) const
{
    return new StartSegmentDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartSegmentDetectionRequestPrivate
 * \brief The StartSegmentDetectionRequestPrivate class provides private implementation for StartSegmentDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartSegmentDetectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartSegmentDetectionRequestPrivate::StartSegmentDetectionRequestPrivate(
    const RekognitionRequest::Action action, StartSegmentDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSegmentDetectionRequest
 * class' copy constructor.
 */
StartSegmentDetectionRequestPrivate::StartSegmentDetectionRequestPrivate(
    const StartSegmentDetectionRequestPrivate &other, StartSegmentDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
