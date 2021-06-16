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

#include "startlabeldetectionrequest.h"
#include "startlabeldetectionrequest_p.h"
#include "startlabeldetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartLabelDetectionRequest
 * \brief The StartLabelDetectionRequest class provides an interface for Rekognition StartLabelDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startLabelDetection
 */

/*!
 * Constructs a copy of \a other.
 */
StartLabelDetectionRequest::StartLabelDetectionRequest(const StartLabelDetectionRequest &other)
    : RekognitionRequest(new StartLabelDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartLabelDetectionRequest object.
 */
StartLabelDetectionRequest::StartLabelDetectionRequest()
    : RekognitionRequest(new StartLabelDetectionRequestPrivate(RekognitionRequest::StartLabelDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool StartLabelDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartLabelDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartLabelDetectionRequest::response(QNetworkReply * const reply) const
{
    return new StartLabelDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartLabelDetectionRequestPrivate
 * \brief The StartLabelDetectionRequestPrivate class provides private implementation for StartLabelDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartLabelDetectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartLabelDetectionRequestPrivate::StartLabelDetectionRequestPrivate(
    const RekognitionRequest::Action action, StartLabelDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartLabelDetectionRequest
 * class' copy constructor.
 */
StartLabelDetectionRequestPrivate::StartLabelDetectionRequestPrivate(
    const StartLabelDetectionRequestPrivate &other, StartLabelDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
