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

#include "getcelebrityrecognitionrequest.h"
#include "getcelebrityrecognitionrequest_p.h"
#include "getcelebrityrecognitionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetCelebrityRecognitionRequest
 * \brief The GetCelebrityRecognitionRequest class provides an interface for Rekognition GetCelebrityRecognition requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getCelebrityRecognition
 */

/*!
 * Constructs a copy of \a other.
 */
GetCelebrityRecognitionRequest::GetCelebrityRecognitionRequest(const GetCelebrityRecognitionRequest &other)
    : RekognitionRequest(new GetCelebrityRecognitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCelebrityRecognitionRequest object.
 */
GetCelebrityRecognitionRequest::GetCelebrityRecognitionRequest()
    : RekognitionRequest(new GetCelebrityRecognitionRequestPrivate(RekognitionRequest::GetCelebrityRecognitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetCelebrityRecognitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCelebrityRecognitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCelebrityRecognitionRequest::response(QNetworkReply * const reply) const
{
    return new GetCelebrityRecognitionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetCelebrityRecognitionRequestPrivate
 * \brief The GetCelebrityRecognitionRequestPrivate class provides private implementation for GetCelebrityRecognitionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetCelebrityRecognitionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
GetCelebrityRecognitionRequestPrivate::GetCelebrityRecognitionRequestPrivate(
    const RekognitionRequest::Action action, GetCelebrityRecognitionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCelebrityRecognitionRequest
 * class' copy constructor.
 */
GetCelebrityRecognitionRequestPrivate::GetCelebrityRecognitionRequestPrivate(
    const GetCelebrityRecognitionRequestPrivate &other, GetCelebrityRecognitionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
