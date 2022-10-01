// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexpenseanalysisrequest.h"
#include "getexpenseanalysisrequest_p.h"
#include "getexpenseanalysisresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::GetExpenseAnalysisRequest
 * \brief The GetExpenseAnalysisRequest class provides an interface for Textract GetExpenseAnalysis requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::getExpenseAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
GetExpenseAnalysisRequest::GetExpenseAnalysisRequest(const GetExpenseAnalysisRequest &other)
    : TextractRequest(new GetExpenseAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExpenseAnalysisRequest object.
 */
GetExpenseAnalysisRequest::GetExpenseAnalysisRequest()
    : TextractRequest(new GetExpenseAnalysisRequestPrivate(TextractRequest::GetExpenseAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool GetExpenseAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExpenseAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExpenseAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new GetExpenseAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::GetExpenseAnalysisRequestPrivate
 * \brief The GetExpenseAnalysisRequestPrivate class provides private implementation for GetExpenseAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a GetExpenseAnalysisRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
GetExpenseAnalysisRequestPrivate::GetExpenseAnalysisRequestPrivate(
    const TextractRequest::Action action, GetExpenseAnalysisRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExpenseAnalysisRequest
 * class' copy constructor.
 */
GetExpenseAnalysisRequestPrivate::GetExpenseAnalysisRequestPrivate(
    const GetExpenseAnalysisRequestPrivate &other, GetExpenseAnalysisRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
