// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putfeedbackrequest.h"
#include "putfeedbackrequest_p.h"
#include "putfeedbackresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::PutFeedbackRequest
 * \brief The PutFeedbackRequest class provides an interface for Wisdom PutFeedback requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::putFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
PutFeedbackRequest::PutFeedbackRequest(const PutFeedbackRequest &other)
    : WisdomRequest(new PutFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutFeedbackRequest object.
 */
PutFeedbackRequest::PutFeedbackRequest()
    : WisdomRequest(new PutFeedbackRequestPrivate(WisdomRequest::PutFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool PutFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new PutFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::PutFeedbackRequestPrivate
 * \brief The PutFeedbackRequestPrivate class provides private implementation for PutFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a PutFeedbackRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
PutFeedbackRequestPrivate::PutFeedbackRequestPrivate(
    const WisdomRequest::Action action, PutFeedbackRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutFeedbackRequest
 * class' copy constructor.
 */
PutFeedbackRequestPrivate::PutFeedbackRequestPrivate(
    const PutFeedbackRequestPrivate &other, PutFeedbackRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
