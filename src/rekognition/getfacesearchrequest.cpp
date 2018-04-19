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

#include "getfacesearchrequest.h"
#include "getfacesearchrequest_p.h"
#include "getfacesearchresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetFaceSearchRequest
 * \brief The GetFaceSearchRequest class provides an interface for Rekognition GetFaceSearch requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getFaceSearch
 */

/*!
 * Constructs a copy of \a other.
 */
GetFaceSearchRequest::GetFaceSearchRequest(const GetFaceSearchRequest &other)
    : RekognitionRequest(new GetFaceSearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFaceSearchRequest object.
 */
GetFaceSearchRequest::GetFaceSearchRequest()
    : RekognitionRequest(new GetFaceSearchRequestPrivate(RekognitionRequest::GetFaceSearchAction, this))
{

}

/*!
 * \reimp
 */
bool GetFaceSearchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFaceSearchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFaceSearchRequest::response(QNetworkReply * const reply) const
{
    return new GetFaceSearchResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetFaceSearchRequestPrivate
 * \brief The GetFaceSearchRequestPrivate class provides private implementation for GetFaceSearchRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 *
 * Constructs a GetFaceSearchRequestPrivate object for Rekognition \a action with,
 * public implementation \a q.
 */
GetFaceSearchRequestPrivate::GetFaceSearchRequestPrivate(
    const RekognitionRequest::Action action, GetFaceSearchRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFaceSearchRequest
 * class' copy constructor.
 */
GetFaceSearchRequestPrivate::GetFaceSearchRequestPrivate(
    const GetFaceSearchRequestPrivate &other, GetFaceSearchRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
