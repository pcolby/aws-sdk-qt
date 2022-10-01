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

#include "analyzeidrequest.h"
#include "analyzeidrequest_p.h"
#include "analyzeidresponse.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::AnalyzeIDRequest
 * \brief The AnalyzeIDRequest class provides an interface for Textract AnalyzeID requests.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::analyzeID
 */

/*!
 * Constructs a copy of \a other.
 */
AnalyzeIDRequest::AnalyzeIDRequest(const AnalyzeIDRequest &other)
    : TextractRequest(new AnalyzeIDRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AnalyzeIDRequest object.
 */
AnalyzeIDRequest::AnalyzeIDRequest()
    : TextractRequest(new AnalyzeIDRequestPrivate(TextractRequest::AnalyzeIDAction, this))
{

}

/*!
 * \reimp
 */
bool AnalyzeIDRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AnalyzeIDResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AnalyzeIDRequest::response(QNetworkReply * const reply) const
{
    return new AnalyzeIDResponse(*this, reply);
}

/*!
 * \class QtAws::Textract::AnalyzeIDRequestPrivate
 * \brief The AnalyzeIDRequestPrivate class provides private implementation for AnalyzeIDRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a AnalyzeIDRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
AnalyzeIDRequestPrivate::AnalyzeIDRequestPrivate(
    const TextractRequest::Action action, AnalyzeIDRequest * const q)
    : TextractRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AnalyzeIDRequest
 * class' copy constructor.
 */
AnalyzeIDRequestPrivate::AnalyzeIDRequestPrivate(
    const AnalyzeIDRequestPrivate &other, AnalyzeIDRequest * const q)
    : TextractRequestPrivate(other, q)
{

}

} // namespace Textract
} // namespace QtAws
