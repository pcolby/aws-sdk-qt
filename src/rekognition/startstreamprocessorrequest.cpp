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

#include "startstreamprocessorrequest.h"
#include "startstreamprocessorrequest_p.h"
#include "startstreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartStreamProcessorRequest
 * \brief The StartStreamProcessorRequest class provides an interface for Rekognition StartStreamProcessor requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startStreamProcessor
 */

/*!
 * Constructs a copy of \a other.
 */
StartStreamProcessorRequest::StartStreamProcessorRequest(const StartStreamProcessorRequest &other)
    : RekognitionRequest(new StartStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStreamProcessorRequest object.
 */
StartStreamProcessorRequest::StartStreamProcessorRequest()
    : RekognitionRequest(new StartStreamProcessorRequestPrivate(RekognitionRequest::StartStreamProcessorAction, this))
{

}

/*!
 * \reimp
 */
bool StartStreamProcessorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStreamProcessorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new StartStreamProcessorResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartStreamProcessorRequestPrivate
 * \brief The StartStreamProcessorRequestPrivate class provides private implementation for StartStreamProcessorRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartStreamProcessorRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartStreamProcessorRequestPrivate::StartStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, StartStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStreamProcessorRequest
 * class' copy constructor.
 */
StartStreamProcessorRequestPrivate::StartStreamProcessorRequestPrivate(
    const StartStreamProcessorRequestPrivate &other, StartStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
