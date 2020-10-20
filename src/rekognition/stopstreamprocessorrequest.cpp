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

#include "stopstreamprocessorrequest.h"
#include "stopstreamprocessorrequest_p.h"
#include "stopstreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StopStreamProcessorRequest
 * \brief The StopStreamProcessorRequest class provides an interface for Rekognition StopStreamProcessor requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::stopStreamProcessor
 */

/*!
 * Constructs a copy of \a other.
 */
StopStreamProcessorRequest::StopStreamProcessorRequest(const StopStreamProcessorRequest &other)
    : RekognitionRequest(new StopStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopStreamProcessorRequest object.
 */
StopStreamProcessorRequest::StopStreamProcessorRequest()
    : RekognitionRequest(new StopStreamProcessorRequestPrivate(RekognitionRequest::StopStreamProcessorAction, this))
{

}

/*!
 * \reimp
 */
bool StopStreamProcessorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopStreamProcessorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new StopStreamProcessorResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StopStreamProcessorRequestPrivate
 * \brief The StopStreamProcessorRequestPrivate class provides private implementation for StopStreamProcessorRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StopStreamProcessorRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StopStreamProcessorRequestPrivate::StopStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, StopStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopStreamProcessorRequest
 * class' copy constructor.
 */
StopStreamProcessorRequestPrivate::StopStreamProcessorRequestPrivate(
    const StopStreamProcessorRequestPrivate &other, StopStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
