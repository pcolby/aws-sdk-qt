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

#include "startdocumenttextdetectionrequest.h"
#include "startdocumenttextdetectionrequest_p.h"
#include "startdocumenttextdetectionresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::StartDocumentTextDetectionRequest
 * \brief The StartDocumentTextDetectionRequest class provides an interface for Textract StartDocumentTextDetection requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::startDocumentTextDetection
 */

/*!
 * Constructs a copy of \a other.
 */
StartDocumentTextDetectionRequest::StartDocumentTextDetectionRequest(const StartDocumentTextDetectionRequest &other)
    : TextractRequest(new StartDocumentTextDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDocumentTextDetectionRequest object.
 */
StartDocumentTextDetectionRequest::StartDocumentTextDetectionRequest()
    : TextractRequest(new StartDocumentTextDetectionRequestPrivate(TextractRequest::StartDocumentTextDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool StartDocumentTextDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDocumentTextDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDocumentTextDetectionRequest::response(QNetworkReply * const reply) const
{
    return new StartDocumentTextDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::StartDocumentTextDetectionRequestPrivate
 * \brief The StartDocumentTextDetectionRequestPrivate class provides private implementation for StartDocumentTextDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a StartDocumentTextDetectionRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
StartDocumentTextDetectionRequestPrivate::StartDocumentTextDetectionRequestPrivate(
    const TextractRequest::Action action, StartDocumentTextDetectionRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDocumentTextDetectionRequest
 * class' copy constructor.
 */
StartDocumentTextDetectionRequestPrivate::StartDocumentTextDetectionRequestPrivate(
    const StartDocumentTextDetectionRequestPrivate &other, StartDocumentTextDetectionRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
