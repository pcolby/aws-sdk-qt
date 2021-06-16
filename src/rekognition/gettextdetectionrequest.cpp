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

#include "gettextdetectionrequest.h"
#include "gettextdetectionrequest_p.h"
#include "gettextdetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetTextDetectionRequest
 * \brief The GetTextDetectionRequest class provides an interface for Rekognition GetTextDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getTextDetection
 */

/*!
 * Constructs a copy of \a other.
 */
GetTextDetectionRequest::GetTextDetectionRequest(const GetTextDetectionRequest &other)
    : RekognitionRequest(new GetTextDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTextDetectionRequest object.
 */
GetTextDetectionRequest::GetTextDetectionRequest()
    : RekognitionRequest(new GetTextDetectionRequestPrivate(RekognitionRequest::GetTextDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetTextDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTextDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTextDetectionRequest::response(QNetworkReply * const reply) const
{
    return new GetTextDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetTextDetectionRequestPrivate
 * \brief The GetTextDetectionRequestPrivate class provides private implementation for GetTextDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetTextDetectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
GetTextDetectionRequestPrivate::GetTextDetectionRequestPrivate(
    const RekognitionRequest::Action action, GetTextDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTextDetectionRequest
 * class' copy constructor.
 */
GetTextDetectionRequestPrivate::GetTextDetectionRequestPrivate(
    const GetTextDetectionRequestPrivate &other, GetTextDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
