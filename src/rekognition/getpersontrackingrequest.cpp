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

#include "getpersontrackingrequest.h"
#include "getpersontrackingrequest_p.h"
#include "getpersontrackingresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetPersonTrackingRequest
 * \brief The GetPersonTrackingRequest class provides an interface for Rekognition GetPersonTracking requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getPersonTracking
 */

/*!
 * Constructs a copy of \a other.
 */
GetPersonTrackingRequest::GetPersonTrackingRequest(const GetPersonTrackingRequest &other)
    : RekognitionRequest(new GetPersonTrackingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPersonTrackingRequest object.
 */
GetPersonTrackingRequest::GetPersonTrackingRequest()
    : RekognitionRequest(new GetPersonTrackingRequestPrivate(RekognitionRequest::GetPersonTrackingAction, this))
{

}

/*!
 * \reimp
 */
bool GetPersonTrackingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPersonTrackingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPersonTrackingRequest::response(QNetworkReply * const reply) const
{
    return new GetPersonTrackingResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetPersonTrackingRequestPrivate
 * \brief The GetPersonTrackingRequestPrivate class provides private implementation for GetPersonTrackingRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetPersonTrackingRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
GetPersonTrackingRequestPrivate::GetPersonTrackingRequestPrivate(
    const RekognitionRequest::Action action, GetPersonTrackingRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPersonTrackingRequest
 * class' copy constructor.
 */
GetPersonTrackingRequestPrivate::GetPersonTrackingRequestPrivate(
    const GetPersonTrackingRequestPrivate &other, GetPersonTrackingRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
