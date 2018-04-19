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

#include "getlabeldetectionrequest.h"
#include "getlabeldetectionrequest_p.h"
#include "getlabeldetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetLabelDetectionRequest
 * \brief The GetLabelDetectionRequest class provides an interface for Rekognition GetLabelDetection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getLabelDetection
 */

/*!
 * Constructs a copy of \a other.
 */
GetLabelDetectionRequest::GetLabelDetectionRequest(const GetLabelDetectionRequest &other)
    : RekognitionRequest(new GetLabelDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLabelDetectionRequest object.
 */
GetLabelDetectionRequest::GetLabelDetectionRequest()
    : RekognitionRequest(new GetLabelDetectionRequestPrivate(RekognitionRequest::GetLabelDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetLabelDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLabelDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLabelDetectionRequest::response(QNetworkReply * const reply) const
{
    return new GetLabelDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetLabelDetectionRequestPrivate
 * \brief The GetLabelDetectionRequestPrivate class provides private implementation for GetLabelDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 *
 * Constructs a GetLabelDetectionRequestPrivate object for Rekognition \a action with,
 * public implementation \a q.
 */
GetLabelDetectionRequestPrivate::GetLabelDetectionRequestPrivate(
    const RekognitionRequest::Action action, GetLabelDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLabelDetectionRequest
 * class' copy constructor.
 */
GetLabelDetectionRequestPrivate::GetLabelDetectionRequestPrivate(
    const GetLabelDetectionRequestPrivate &other, GetLabelDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
