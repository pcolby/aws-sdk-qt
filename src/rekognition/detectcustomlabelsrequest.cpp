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

#include "detectcustomlabelsrequest.h"
#include "detectcustomlabelsrequest_p.h"
#include "detectcustomlabelsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectCustomLabelsRequest
 * \brief The DetectCustomLabelsRequest class provides an interface for Rekognition DetectCustomLabels requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectCustomLabels
 */

/*!
 * Constructs a copy of \a other.
 */
DetectCustomLabelsRequest::DetectCustomLabelsRequest(const DetectCustomLabelsRequest &other)
    : RekognitionRequest(new DetectCustomLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectCustomLabelsRequest object.
 */
DetectCustomLabelsRequest::DetectCustomLabelsRequest()
    : RekognitionRequest(new DetectCustomLabelsRequestPrivate(RekognitionRequest::DetectCustomLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool DetectCustomLabelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectCustomLabelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectCustomLabelsRequest::response(QNetworkReply * const reply) const
{
    return new DetectCustomLabelsResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DetectCustomLabelsRequestPrivate
 * \brief The DetectCustomLabelsRequestPrivate class provides private implementation for DetectCustomLabelsRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectCustomLabelsRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DetectCustomLabelsRequestPrivate::DetectCustomLabelsRequestPrivate(
    const RekognitionRequest::Action action, DetectCustomLabelsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectCustomLabelsRequest
 * class' copy constructor.
 */
DetectCustomLabelsRequestPrivate::DetectCustomLabelsRequestPrivate(
    const DetectCustomLabelsRequestPrivate &other, DetectCustomLabelsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
