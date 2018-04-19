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

#include "startfacesearchrequest.h"
#include "startfacesearchrequest_p.h"
#include "startfacesearchresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartFaceSearchRequest
 * \brief The StartFaceSearchRequest class provides an interface for Rekognition StartFaceSearch requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startFaceSearch
 */

/*!
 * Constructs a copy of \a other.
 */
StartFaceSearchRequest::StartFaceSearchRequest(const StartFaceSearchRequest &other)
    : RekognitionRequest(new StartFaceSearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFaceSearchRequest object.
 */
StartFaceSearchRequest::StartFaceSearchRequest()
    : RekognitionRequest(new StartFaceSearchRequestPrivate(RekognitionRequest::StartFaceSearchAction, this))
{

}

/*!
 * \reimp
 */
bool StartFaceSearchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFaceSearchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFaceSearchRequest::response(QNetworkReply * const reply) const
{
    return new StartFaceSearchResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartFaceSearchRequestPrivate
 * \brief The StartFaceSearchRequestPrivate class provides private implementation for StartFaceSearchRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 *
 * Constructs a StartFaceSearchRequestPrivate object for Rekognition \a action with,
 * public implementation \a q.
 */
StartFaceSearchRequestPrivate::StartFaceSearchRequestPrivate(
    const RekognitionRequest::Action action, StartFaceSearchRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFaceSearchRequest
 * class' copy constructor.
 */
StartFaceSearchRequestPrivate::StartFaceSearchRequestPrivate(
    const StartFaceSearchRequestPrivate &other, StartFaceSearchRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
