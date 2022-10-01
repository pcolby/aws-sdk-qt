// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
