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
