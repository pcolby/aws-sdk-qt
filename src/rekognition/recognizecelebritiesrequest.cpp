/*
    Copyright 2013-2019 Paul Colby

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

#include "recognizecelebritiesrequest.h"
#include "recognizecelebritiesrequest_p.h"
#include "recognizecelebritiesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::RecognizeCelebritiesRequest
 * \brief The RecognizeCelebritiesRequest class provides an interface for Rekognition RecognizeCelebrities requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::recognizeCelebrities
 */

/*!
 * Constructs a copy of \a other.
 */
RecognizeCelebritiesRequest::RecognizeCelebritiesRequest(const RecognizeCelebritiesRequest &other)
    : RekognitionRequest(new RecognizeCelebritiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RecognizeCelebritiesRequest object.
 */
RecognizeCelebritiesRequest::RecognizeCelebritiesRequest()
    : RekognitionRequest(new RecognizeCelebritiesRequestPrivate(RekognitionRequest::RecognizeCelebritiesAction, this))
{

}

/*!
 * \reimp
 */
bool RecognizeCelebritiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RecognizeCelebritiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RecognizeCelebritiesRequest::response(QNetworkReply * const reply) const
{
    return new RecognizeCelebritiesResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::RecognizeCelebritiesRequestPrivate
 * \brief The RecognizeCelebritiesRequestPrivate class provides private implementation for RecognizeCelebritiesRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RecognizeCelebritiesRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
RecognizeCelebritiesRequestPrivate::RecognizeCelebritiesRequestPrivate(
    const RekognitionRequest::Action action, RecognizeCelebritiesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RecognizeCelebritiesRequest
 * class' copy constructor.
 */
RecognizeCelebritiesRequestPrivate::RecognizeCelebritiesRequestPrivate(
    const RecognizeCelebritiesRequestPrivate &other, RecognizeCelebritiesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
