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

#include "describestreamprocessorrequest.h"
#include "describestreamprocessorrequest_p.h"
#include "describestreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DescribeStreamProcessorRequest
 * \brief The DescribeStreamProcessorRequest class provides an interface for Rekognition DescribeStreamProcessor requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::describeStreamProcessor
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStreamProcessorRequest::DescribeStreamProcessorRequest(const DescribeStreamProcessorRequest &other)
    : RekognitionRequest(new DescribeStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStreamProcessorRequest object.
 */
DescribeStreamProcessorRequest::DescribeStreamProcessorRequest()
    : RekognitionRequest(new DescribeStreamProcessorRequestPrivate(RekognitionRequest::DescribeStreamProcessorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamProcessorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStreamProcessorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamProcessorResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DescribeStreamProcessorRequestPrivate
 * \brief The DescribeStreamProcessorRequestPrivate class provides private implementation for DescribeStreamProcessorRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DescribeStreamProcessorRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DescribeStreamProcessorRequestPrivate::DescribeStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, DescribeStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamProcessorRequest
 * class' copy constructor.
 */
DescribeStreamProcessorRequestPrivate::DescribeStreamProcessorRequestPrivate(
    const DescribeStreamProcessorRequestPrivate &other, DescribeStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
