// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "analyzeexpenserequest.h"
#include "analyzeexpenserequest_p.h"
#include "analyzeexpenseresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::AnalyzeExpenseRequest
 * \brief The AnalyzeExpenseRequest class provides an interface for Textract AnalyzeExpense requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::analyzeExpense
 */

/*!
 * Constructs a copy of \a other.
 */
AnalyzeExpenseRequest::AnalyzeExpenseRequest(const AnalyzeExpenseRequest &other)
    : TextractRequest(new AnalyzeExpenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AnalyzeExpenseRequest object.
 */
AnalyzeExpenseRequest::AnalyzeExpenseRequest()
    : TextractRequest(new AnalyzeExpenseRequestPrivate(TextractRequest::AnalyzeExpenseAction, this))
{

}

/*!
 * \reimp
 */
bool AnalyzeExpenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AnalyzeExpenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AnalyzeExpenseRequest::response(QNetworkReply * const reply) const
{
    return new AnalyzeExpenseResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::AnalyzeExpenseRequestPrivate
 * \brief The AnalyzeExpenseRequestPrivate class provides private implementation for AnalyzeExpenseRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a AnalyzeExpenseRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
AnalyzeExpenseRequestPrivate::AnalyzeExpenseRequestPrivate(
    const TextractRequest::Action action, AnalyzeExpenseRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AnalyzeExpenseRequest
 * class' copy constructor.
 */
AnalyzeExpenseRequestPrivate::AnalyzeExpenseRequestPrivate(
    const AnalyzeExpenseRequestPrivate &other, AnalyzeExpenseRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
