// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyrecommendationsreceivedrequest.h"
#include "notifyrecommendationsreceivedrequest_p.h"
#include "notifyrecommendationsreceivedresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::NotifyRecommendationsReceivedRequest
 * \brief The NotifyRecommendationsReceivedRequest class provides an interface for Wisdom NotifyRecommendationsReceived requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::notifyRecommendationsReceived
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyRecommendationsReceivedRequest::NotifyRecommendationsReceivedRequest(const NotifyRecommendationsReceivedRequest &other)
    : WisdomRequest(new NotifyRecommendationsReceivedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyRecommendationsReceivedRequest object.
 */
NotifyRecommendationsReceivedRequest::NotifyRecommendationsReceivedRequest()
    : WisdomRequest(new NotifyRecommendationsReceivedRequestPrivate(WisdomRequest::NotifyRecommendationsReceivedAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyRecommendationsReceivedRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyRecommendationsReceivedResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyRecommendationsReceivedRequest::response(QNetworkReply * const reply) const
{
    return new NotifyRecommendationsReceivedResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::NotifyRecommendationsReceivedRequestPrivate
 * \brief The NotifyRecommendationsReceivedRequestPrivate class provides private implementation for NotifyRecommendationsReceivedRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a NotifyRecommendationsReceivedRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
NotifyRecommendationsReceivedRequestPrivate::NotifyRecommendationsReceivedRequestPrivate(
    const WisdomRequest::Action action, NotifyRecommendationsReceivedRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyRecommendationsReceivedRequest
 * class' copy constructor.
 */
NotifyRecommendationsReceivedRequestPrivate::NotifyRecommendationsReceivedRequestPrivate(
    const NotifyRecommendationsReceivedRequestPrivate &other, NotifyRecommendationsReceivedRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
