/*
    Copyright 2013-2020 Paul Colby

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

#include "detectfacesrequest.h"
#include "detectfacesrequest_p.h"
#include "detectfacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectFacesRequest
 * \brief The DetectFacesRequest class provides an interface for Rekognition DetectFaces requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectFaces
 */

/*!
 * Constructs a copy of \a other.
 */
DetectFacesRequest::DetectFacesRequest(const DetectFacesRequest &other)
    : RekognitionRequest(new DetectFacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectFacesRequest object.
 */
DetectFacesRequest::DetectFacesRequest()
    : RekognitionRequest(new DetectFacesRequestPrivate(RekognitionRequest::DetectFacesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectFacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectFacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectFacesRequest::response(QNetworkReply * const reply) const
{
    return new DetectFacesResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DetectFacesRequestPrivate
 * \brief The DetectFacesRequestPrivate class provides private implementation for DetectFacesRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectFacesRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DetectFacesRequestPrivate::DetectFacesRequestPrivate(
    const RekognitionRequest::Action action, DetectFacesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectFacesRequest
 * class' copy constructor.
 */
DetectFacesRequestPrivate::DetectFacesRequestPrivate(
    const DetectFacesRequestPrivate &other, DetectFacesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
