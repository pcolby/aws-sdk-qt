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

#include "analyzedocumentrequest.h"
#include "analyzedocumentrequest_p.h"
#include "analyzedocumentresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::AnalyzeDocumentRequest
 * \brief The AnalyzeDocumentRequest class provides an interface for Textract AnalyzeDocument requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::analyzeDocument
 */

/*!
 * Constructs a copy of \a other.
 */
AnalyzeDocumentRequest::AnalyzeDocumentRequest(const AnalyzeDocumentRequest &other)
    : TextractRequest(new AnalyzeDocumentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AnalyzeDocumentRequest object.
 */
AnalyzeDocumentRequest::AnalyzeDocumentRequest()
    : TextractRequest(new AnalyzeDocumentRequestPrivate(TextractRequest::AnalyzeDocumentAction, this))
{

}

/*!
 * \reimp
 */
bool AnalyzeDocumentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AnalyzeDocumentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AnalyzeDocumentRequest::response(QNetworkReply * const reply) const
{
    return new AnalyzeDocumentResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::AnalyzeDocumentRequestPrivate
 * \brief The AnalyzeDocumentRequestPrivate class provides private implementation for AnalyzeDocumentRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a AnalyzeDocumentRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
AnalyzeDocumentRequestPrivate::AnalyzeDocumentRequestPrivate(
    const TextractRequest::Action action, AnalyzeDocumentRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AnalyzeDocumentRequest
 * class' copy constructor.
 */
AnalyzeDocumentRequestPrivate::AnalyzeDocumentRequestPrivate(
    const AnalyzeDocumentRequestPrivate &other, AnalyzeDocumentRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
