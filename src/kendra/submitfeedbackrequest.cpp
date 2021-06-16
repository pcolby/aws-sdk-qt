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

#include "submitfeedbackrequest.h"
#include "submitfeedbackrequest_p.h"
#include "submitfeedbackresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::SubmitFeedbackRequest
 * \brief The SubmitFeedbackRequest class provides an interface for kendra SubmitFeedback requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::submitFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
SubmitFeedbackRequest::SubmitFeedbackRequest(const SubmitFeedbackRequest &other)
    : kendraRequest(new SubmitFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SubmitFeedbackRequest object.
 */
SubmitFeedbackRequest::SubmitFeedbackRequest()
    : kendraRequest(new SubmitFeedbackRequestPrivate(kendraRequest::SubmitFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool SubmitFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SubmitFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SubmitFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new SubmitFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::SubmitFeedbackRequestPrivate
 * \brief The SubmitFeedbackRequestPrivate class provides private implementation for SubmitFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a SubmitFeedbackRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
SubmitFeedbackRequestPrivate::SubmitFeedbackRequestPrivate(
    const kendraRequest::Action action, SubmitFeedbackRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SubmitFeedbackRequest
 * class' copy constructor.
 */
SubmitFeedbackRequestPrivate::SubmitFeedbackRequestPrivate(
    const SubmitFeedbackRequestPrivate &other, SubmitFeedbackRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
