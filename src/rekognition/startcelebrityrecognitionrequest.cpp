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

#include "startcelebrityrecognitionrequest.h"
#include "startcelebrityrecognitionrequest_p.h"
#include "startcelebrityrecognitionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartCelebrityRecognitionRequest
 * \brief The StartCelebrityRecognitionRequest class provides an interface for Rekognition StartCelebrityRecognition requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startCelebrityRecognition
 */

/*!
 * Constructs a copy of \a other.
 */
StartCelebrityRecognitionRequest::StartCelebrityRecognitionRequest(const StartCelebrityRecognitionRequest &other)
    : RekognitionRequest(new StartCelebrityRecognitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCelebrityRecognitionRequest object.
 */
StartCelebrityRecognitionRequest::StartCelebrityRecognitionRequest()
    : RekognitionRequest(new StartCelebrityRecognitionRequestPrivate(RekognitionRequest::StartCelebrityRecognitionAction, this))
{

}

/*!
 * \reimp
 */
bool StartCelebrityRecognitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCelebrityRecognitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCelebrityRecognitionRequest::response(QNetworkReply * const reply) const
{
    return new StartCelebrityRecognitionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartCelebrityRecognitionRequestPrivate
 * \brief The StartCelebrityRecognitionRequestPrivate class provides private implementation for StartCelebrityRecognitionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartCelebrityRecognitionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartCelebrityRecognitionRequestPrivate::StartCelebrityRecognitionRequestPrivate(
    const RekognitionRequest::Action action, StartCelebrityRecognitionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCelebrityRecognitionRequest
 * class' copy constructor.
 */
StartCelebrityRecognitionRequestPrivate::StartCelebrityRecognitionRequestPrivate(
    const StartCelebrityRecognitionRequestPrivate &other, StartCelebrityRecognitionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
