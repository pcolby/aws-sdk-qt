// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdocumentanalysisrequest.h"
#include "startdocumentanalysisrequest_p.h"
#include "startdocumentanalysisresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::StartDocumentAnalysisRequest
 * \brief The StartDocumentAnalysisRequest class provides an interface for Textract StartDocumentAnalysis requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::startDocumentAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
StartDocumentAnalysisRequest::StartDocumentAnalysisRequest(const StartDocumentAnalysisRequest &other)
    : TextractRequest(new StartDocumentAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDocumentAnalysisRequest object.
 */
StartDocumentAnalysisRequest::StartDocumentAnalysisRequest()
    : TextractRequest(new StartDocumentAnalysisRequestPrivate(TextractRequest::StartDocumentAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool StartDocumentAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDocumentAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDocumentAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new StartDocumentAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::StartDocumentAnalysisRequestPrivate
 * \brief The StartDocumentAnalysisRequestPrivate class provides private implementation for StartDocumentAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a StartDocumentAnalysisRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
StartDocumentAnalysisRequestPrivate::StartDocumentAnalysisRequestPrivate(
    const TextractRequest::Action action, StartDocumentAnalysisRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDocumentAnalysisRequest
 * class' copy constructor.
 */
StartDocumentAnalysisRequestPrivate::StartDocumentAnalysisRequestPrivate(
    const StartDocumentAnalysisRequestPrivate &other, StartDocumentAnalysisRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
