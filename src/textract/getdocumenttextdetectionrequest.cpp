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

#include "getdocumenttextdetectionrequest.h"
#include "getdocumenttextdetectionrequest_p.h"
#include "getdocumenttextdetectionresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::GetDocumentTextDetectionRequest
 * \brief The GetDocumentTextDetectionRequest class provides an interface for Textract GetDocumentTextDetection requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::getDocumentTextDetection
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentTextDetectionRequest::GetDocumentTextDetectionRequest(const GetDocumentTextDetectionRequest &other)
    : TextractRequest(new GetDocumentTextDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentTextDetectionRequest object.
 */
GetDocumentTextDetectionRequest::GetDocumentTextDetectionRequest()
    : TextractRequest(new GetDocumentTextDetectionRequestPrivate(TextractRequest::GetDocumentTextDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentTextDetectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentTextDetectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentTextDetectionRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentTextDetectionResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::GetDocumentTextDetectionRequestPrivate
 * \brief The GetDocumentTextDetectionRequestPrivate class provides private implementation for GetDocumentTextDetectionRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a GetDocumentTextDetectionRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
GetDocumentTextDetectionRequestPrivate::GetDocumentTextDetectionRequestPrivate(
    const TextractRequest::Action action, GetDocumentTextDetectionRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentTextDetectionRequest
 * class' copy constructor.
 */
GetDocumentTextDetectionRequestPrivate::GetDocumentTextDetectionRequestPrivate(
    const GetDocumentTextDetectionRequestPrivate &other, GetDocumentTextDetectionRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
