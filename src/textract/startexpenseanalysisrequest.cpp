// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startexpenseanalysisrequest.h"
#include "startexpenseanalysisrequest_p.h"
#include "startexpenseanalysisresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::StartExpenseAnalysisRequest
 * \brief The StartExpenseAnalysisRequest class provides an interface for Textract StartExpenseAnalysis requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::startExpenseAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
StartExpenseAnalysisRequest::StartExpenseAnalysisRequest(const StartExpenseAnalysisRequest &other)
    : TextractRequest(new StartExpenseAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartExpenseAnalysisRequest object.
 */
StartExpenseAnalysisRequest::StartExpenseAnalysisRequest()
    : TextractRequest(new StartExpenseAnalysisRequestPrivate(TextractRequest::StartExpenseAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool StartExpenseAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartExpenseAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartExpenseAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new StartExpenseAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::StartExpenseAnalysisRequestPrivate
 * \brief The StartExpenseAnalysisRequestPrivate class provides private implementation for StartExpenseAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a StartExpenseAnalysisRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
StartExpenseAnalysisRequestPrivate::StartExpenseAnalysisRequestPrivate(
    const TextractRequest::Action action, StartExpenseAnalysisRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartExpenseAnalysisRequest
 * class' copy constructor.
 */
StartExpenseAnalysisRequestPrivate::StartExpenseAnalysisRequestPrivate(
    const StartExpenseAnalysisRequestPrivate &other, StartExpenseAnalysisRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
