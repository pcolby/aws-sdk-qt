// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
