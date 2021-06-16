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

#include "describelanguagemodelrequest.h"
#include "describelanguagemodelrequest_p.h"
#include "describelanguagemodelresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DescribeLanguageModelRequest
 * \brief The DescribeLanguageModelRequest class provides an interface for TranscribeService DescribeLanguageModel requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::describeLanguageModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLanguageModelRequest::DescribeLanguageModelRequest(const DescribeLanguageModelRequest &other)
    : TranscribeServiceRequest(new DescribeLanguageModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLanguageModelRequest object.
 */
DescribeLanguageModelRequest::DescribeLanguageModelRequest()
    : TranscribeServiceRequest(new DescribeLanguageModelRequestPrivate(TranscribeServiceRequest::DescribeLanguageModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLanguageModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLanguageModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLanguageModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLanguageModelResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::DescribeLanguageModelRequestPrivate
 * \brief The DescribeLanguageModelRequestPrivate class provides private implementation for DescribeLanguageModelRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DescribeLanguageModelRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
DescribeLanguageModelRequestPrivate::DescribeLanguageModelRequestPrivate(
    const TranscribeServiceRequest::Action action, DescribeLanguageModelRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLanguageModelRequest
 * class' copy constructor.
 */
DescribeLanguageModelRequestPrivate::DescribeLanguageModelRequestPrivate(
    const DescribeLanguageModelRequestPrivate &other, DescribeLanguageModelRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
