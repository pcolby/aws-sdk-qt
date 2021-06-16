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

#include "getcelebrityinforequest.h"
#include "getcelebrityinforequest_p.h"
#include "getcelebrityinforesponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetCelebrityInfoRequest
 * \brief The GetCelebrityInfoRequest class provides an interface for Rekognition GetCelebrityInfo requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getCelebrityInfo
 */

/*!
 * Constructs a copy of \a other.
 */
GetCelebrityInfoRequest::GetCelebrityInfoRequest(const GetCelebrityInfoRequest &other)
    : RekognitionRequest(new GetCelebrityInfoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCelebrityInfoRequest object.
 */
GetCelebrityInfoRequest::GetCelebrityInfoRequest()
    : RekognitionRequest(new GetCelebrityInfoRequestPrivate(RekognitionRequest::GetCelebrityInfoAction, this))
{

}

/*!
 * \reimp
 */
bool GetCelebrityInfoRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCelebrityInfoResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCelebrityInfoRequest::response(QNetworkReply * const reply) const
{
    return new GetCelebrityInfoResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetCelebrityInfoRequestPrivate
 * \brief The GetCelebrityInfoRequestPrivate class provides private implementation for GetCelebrityInfoRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetCelebrityInfoRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
GetCelebrityInfoRequestPrivate::GetCelebrityInfoRequestPrivate(
    const RekognitionRequest::Action action, GetCelebrityInfoRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCelebrityInfoRequest
 * class' copy constructor.
 */
GetCelebrityInfoRequestPrivate::GetCelebrityInfoRequestPrivate(
    const GetCelebrityInfoRequestPrivate &other, GetCelebrityInfoRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
