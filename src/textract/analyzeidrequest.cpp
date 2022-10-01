// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
