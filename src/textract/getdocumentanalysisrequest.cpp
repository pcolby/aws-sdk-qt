/*
    Copyright 2013-2021 Paul Colby

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
