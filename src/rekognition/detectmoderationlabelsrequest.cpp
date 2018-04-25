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

#include "detectmoderationlabelsrequest.h"
#include "detectmoderationlabelsrequest_p.h"
#include "detectmoderationlabelsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectModerationLabelsRequest
 * \brief The DetectModerationLabelsRequest class provides an interface for Rekognition DetectModerationLabels requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectModerationLabels
 */

/*!
 * Constructs a copy of \a other.
 */
DetectModerationLabelsRequest::DetectModerationLabelsRequest(const DetectModerationLabelsRequest &other)
    : RekognitionRequest(new DetectModerationLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectModerationLabelsRequest object.
 */
DetectModerationLabelsRequest::DetectModerationLabelsRequest()
    : RekognitionRequest(new DetectModerationLabelsRequestPrivate(RekognitionRequest::DetectModerationLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool DetectModerationLabelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectModerationLabelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectModerationLabelsRequest::response(QNetworkReply * const reply) const
{
    return new DetectModerationLabelsResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DetectModerationLabelsRequestPrivate
 * \brief The DetectModerationLabelsRequestPrivate class provides private implementation for DetectModerationLabelsRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectModerationLabelsRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DetectModerationLabelsRequestPrivate::DetectModerationLabelsRequestPrivate(
    const RekognitionRequest::Action action, DetectModerationLabelsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectModerationLabelsRequest
 * class' copy constructor.
 */
DetectModerationLabelsRequestPrivate::DetectModerationLabelsRequestPrivate(
    const DetectModerationLabelsRequestPrivate &other, DetectModerationLabelsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
