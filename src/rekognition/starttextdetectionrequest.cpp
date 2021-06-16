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

#include "starttextdetectionrequest.h"
#include "starttextdetectionrequest_p.h"
#include "starttextdetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartTextDetectionRequest
 * \brief The StartTextDetectionRequest class provides an interface for Rekognition StartTextDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startTextDetection
 */

/*!
 * Constructs a copy of \a other.
 */
StartTextDetectionRequest::StartTextDetectionRequest(const StartTextDetectionRequest &other)
    : RekognitionRequest(new StartTextDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTextDetectionRequest object.
 */
StartTextDetectionRequest::StartTextDetectionRequest()
    : RekognitionRequest(new StartTextDetectionRequestPrivate(RekognitionRequest::StartTextDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool StartTextDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTextDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTextDetectionRequest::response(QNetworkReply * const reply) const
{
    return new StartTextDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartTextDetectionRequestPrivate
 * \brief The StartTextDetectionRequestPrivate class provides private implementation for StartTextDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartTextDetectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartTextDetectionRequestPrivate::StartTextDetectionRequestPrivate(
    const RekognitionRequest::Action action, StartTextDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTextDetectionRequest
 * class' copy constructor.
 */
StartTextDetectionRequestPrivate::StartTextDetectionRequestPrivate(
    const StartTextDetectionRequestPrivate &other, StartTextDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
