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
