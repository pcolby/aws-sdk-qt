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
