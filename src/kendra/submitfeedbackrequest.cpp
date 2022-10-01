// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "submitfeedbackrequest.h"
#include "submitfeedbackrequest_p.h"
#include "submitfeedbackresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::SubmitFeedbackRequest
 * \brief The SubmitFeedbackRequest class provides an interface for Kendra SubmitFeedback requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::submitFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
SubmitFeedbackRequest::SubmitFeedbackRequest(const SubmitFeedbackRequest &other)
    : KendraRequest(new SubmitFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SubmitFeedbackRequest object.
 */
SubmitFeedbackRequest::SubmitFeedbackRequest()
    : KendraRequest(new SubmitFeedbackRequestPrivate(KendraRequest::SubmitFeedbackAction, this))
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
 * \class QtAws::Kendra::SubmitFeedbackRequestPrivate
 * \brief The SubmitFeedbackRequestPrivate class provides private implementation for SubmitFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a SubmitFeedbackRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
SubmitFeedbackRequestPrivate::SubmitFeedbackRequestPrivate(
    const KendraRequest::Action action, SubmitFeedbackRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
