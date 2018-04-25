/*
    Copyright 2013-2018 Paul Colby

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

#include "detectlabelsrequest.h"
#include "detectlabelsrequest_p.h"
#include "detectlabelsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectLabelsRequest
 * \brief The DetectLabelsRequest class provides an interface for Rekognition DetectLabels requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectLabels
 */

/*!
 * Constructs a copy of \a other.
 */
DetectLabelsRequest::DetectLabelsRequest(const DetectLabelsRequest &other)
    : RekognitionRequest(new DetectLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectLabelsRequest object.
 */
DetectLabelsRequest::DetectLabelsRequest()
    : RekognitionRequest(new DetectLabelsRequestPrivate(RekognitionRequest::DetectLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool DetectLabelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectLabelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectLabelsRequest::response(QNetworkReply * const reply) const
{
    return new DetectLabelsResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DetectLabelsRequestPrivate
 * \brief The DetectLabelsRequestPrivate class provides private implementation for DetectLabelsRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectLabelsRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DetectLabelsRequestPrivate::DetectLabelsRequestPrivate(
    const RekognitionRequest::Action action, DetectLabelsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectLabelsRequest
 * class' copy constructor.
 */
DetectLabelsRequestPrivate::DetectLabelsRequestPrivate(
    const DetectLabelsRequestPrivate &other, DetectLabelsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
