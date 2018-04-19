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

#include "startpersontrackingrequest.h"
#include "startpersontrackingrequest_p.h"
#include "startpersontrackingresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartPersonTrackingRequest
 * \brief The StartPersonTrackingRequest class provides an interface for Rekognition StartPersonTracking requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startPersonTracking
 */

/*!
 * Constructs a copy of \a other.
 */
StartPersonTrackingRequest::StartPersonTrackingRequest(const StartPersonTrackingRequest &other)
    : RekognitionRequest(new StartPersonTrackingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartPersonTrackingRequest object.
 */
StartPersonTrackingRequest::StartPersonTrackingRequest()
    : RekognitionRequest(new StartPersonTrackingRequestPrivate(RekognitionRequest::StartPersonTrackingAction, this))
{

}

/*!
 * \reimp
 */
bool StartPersonTrackingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartPersonTrackingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartPersonTrackingRequest::response(QNetworkReply * const reply) const
{
    return new StartPersonTrackingResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartPersonTrackingRequestPrivate
 * \brief The StartPersonTrackingRequestPrivate class provides private implementation for StartPersonTrackingRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartPersonTrackingRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartPersonTrackingRequestPrivate::StartPersonTrackingRequestPrivate(
    const RekognitionRequest::Action action, StartPersonTrackingRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartPersonTrackingRequest
 * class' copy constructor.
 */
StartPersonTrackingRequestPrivate::StartPersonTrackingRequestPrivate(
    const StartPersonTrackingRequestPrivate &other, StartPersonTrackingRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
