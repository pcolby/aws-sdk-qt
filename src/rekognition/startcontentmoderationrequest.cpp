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

#include "startcontentmoderationrequest.h"
#include "startcontentmoderationrequest_p.h"
#include "startcontentmoderationresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartContentModerationRequest
 * \brief The StartContentModerationRequest class provides an interface for Rekognition StartContentModeration requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startContentModeration
 */

/*!
 * Constructs a copy of \a other.
 */
StartContentModerationRequest::StartContentModerationRequest(const StartContentModerationRequest &other)
    : RekognitionRequest(new StartContentModerationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartContentModerationRequest object.
 */
StartContentModerationRequest::StartContentModerationRequest()
    : RekognitionRequest(new StartContentModerationRequestPrivate(RekognitionRequest::StartContentModerationAction, this))
{

}

/*!
 * \reimp
 */
bool StartContentModerationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartContentModerationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartContentModerationRequest::response(QNetworkReply * const reply) const
{
    return new StartContentModerationResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartContentModerationRequestPrivate
 * \brief The StartContentModerationRequestPrivate class provides private implementation for StartContentModerationRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartContentModerationRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartContentModerationRequestPrivate::StartContentModerationRequestPrivate(
    const RekognitionRequest::Action action, StartContentModerationRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartContentModerationRequest
 * class' copy constructor.
 */
StartContentModerationRequestPrivate::StartContentModerationRequestPrivate(
    const StartContentModerationRequestPrivate &other, StartContentModerationRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
