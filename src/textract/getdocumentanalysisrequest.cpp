// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentanalysisrequest.h"
#include "getdocumentanalysisrequest_p.h"
#include "getdocumentanalysisresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::GetDocumentAnalysisRequest
 * \brief The GetDocumentAnalysisRequest class provides an interface for Textract GetDocumentAnalysis requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::getDocumentAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentAnalysisRequest::GetDocumentAnalysisRequest(const GetDocumentAnalysisRequest &other)
    : TextractRequest(new GetDocumentAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentAnalysisRequest object.
 */
GetDocumentAnalysisRequest::GetDocumentAnalysisRequest()
    : TextractRequest(new GetDocumentAnalysisRequestPrivate(TextractRequest::GetDocumentAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::GetDocumentAnalysisRequestPrivate
 * \brief The GetDocumentAnalysisRequestPrivate class provides private implementation for GetDocumentAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a GetDocumentAnalysisRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
GetDocumentAnalysisRequestPrivate::GetDocumentAnalysisRequestPrivate(
    const TextractRequest::Action action, GetDocumentAnalysisRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentAnalysisRequest
 * class' copy constructor.
 */
GetDocumentAnalysisRequestPrivate::GetDocumentAnalysisRequestPrivate(
    const GetDocumentAnalysisRequestPrivate &other, GetDocumentAnalysisRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
