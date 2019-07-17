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

#include "detecttextrequest.h"
#include "detecttextrequest_p.h"
#include "detecttextresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectTextRequest
 * \brief The DetectTextRequest class provides an interface for Rekognition DetectText requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectText
 */

/*!
 * Constructs a copy of \a other.
 */
DetectTextRequest::DetectTextRequest(const DetectTextRequest &other)
    : RekognitionRequest(new DetectTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectTextRequest object.
 */
DetectTextRequest::DetectTextRequest()
    : RekognitionRequest(new DetectTextRequestPrivate(RekognitionRequest::DetectTextAction, this))
{

}

/*!
 * \reimp
 */
bool DetectTextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectTextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectTextRequest::response(QNetworkReply * const reply) const
{
    return new DetectTextResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DetectTextRequestPrivate
 * \brief The DetectTextRequestPrivate class provides private implementation for DetectTextRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectTextRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DetectTextRequestPrivate::DetectTextRequestPrivate(
    const RekognitionRequest::Action action, DetectTextRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectTextRequest
 * class' copy constructor.
 */
DetectTextRequestPrivate::DetectTextRequestPrivate(
    const DetectTextRequestPrivate &other, DetectTextRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
