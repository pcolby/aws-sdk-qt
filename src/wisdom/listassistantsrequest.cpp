// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassistantsrequest.h"
#include "listassistantsrequest_p.h"
#include "listassistantsresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListAssistantsRequest
 * \brief The ListAssistantsRequest class provides an interface for Wisdom ListAssistants requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listAssistants
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssistantsRequest::ListAssistantsRequest(const ListAssistantsRequest &other)
    : WisdomRequest(new ListAssistantsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssistantsRequest object.
 */
ListAssistantsRequest::ListAssistantsRequest()
    : WisdomRequest(new ListAssistantsRequestPrivate(WisdomRequest::ListAssistantsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssistantsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssistantsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssistantsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssistantsResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::ListAssistantsRequestPrivate
 * \brief The ListAssistantsRequestPrivate class provides private implementation for ListAssistantsRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListAssistantsRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
ListAssistantsRequestPrivate::ListAssistantsRequestPrivate(
    const WisdomRequest::Action action, ListAssistantsRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssistantsRequest
 * class' copy constructor.
 */
ListAssistantsRequestPrivate::ListAssistantsRequestPrivate(
    const ListAssistantsRequestPrivate &other, ListAssistantsRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
