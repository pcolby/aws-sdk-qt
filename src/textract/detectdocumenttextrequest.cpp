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

#include "detectdocumenttextrequest.h"
#include "detectdocumenttextrequest_p.h"
#include "detectdocumenttextresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::DetectDocumentTextRequest
 * \brief The DetectDocumentTextRequest class provides an interface for Textract DetectDocumentText requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::detectDocumentText
 */

/*!
 * Constructs a copy of \a other.
 */
DetectDocumentTextRequest::DetectDocumentTextRequest(const DetectDocumentTextRequest &other)
    : TextractRequest(new DetectDocumentTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectDocumentTextRequest object.
 */
DetectDocumentTextRequest::DetectDocumentTextRequest()
    : TextractRequest(new DetectDocumentTextRequestPrivate(TextractRequest::DetectDocumentTextAction, this))
{

}

/*!
 * \reimp
 */
bool DetectDocumentTextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectDocumentTextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectDocumentTextRequest::response(QNetworkReply * const reply) const
{
    return new DetectDocumentTextResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::DetectDocumentTextRequestPrivate
 * \brief The DetectDocumentTextRequestPrivate class provides private implementation for DetectDocumentTextRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a DetectDocumentTextRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
DetectDocumentTextRequestPrivate::DetectDocumentTextRequestPrivate(
    const TextractRequest::Action action, DetectDocumentTextRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectDocumentTextRequest
 * class' copy constructor.
 */
DetectDocumentTextRequestPrivate::DetectDocumentTextRequestPrivate(
    const DetectDocumentTextRequestPrivate &other, DetectDocumentTextRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
