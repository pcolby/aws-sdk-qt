// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
