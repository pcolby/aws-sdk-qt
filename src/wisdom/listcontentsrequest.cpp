// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontentsrequest.h"
#include "listcontentsrequest_p.h"
#include "listcontentsresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListContentsRequest
 * \brief The ListContentsRequest class provides an interface for Wisdom ListContents requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listContents
 */

/*!
 * Constructs a copy of \a other.
 */
ListContentsRequest::ListContentsRequest(const ListContentsRequest &other)
    : WisdomRequest(new ListContentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContentsRequest object.
 */
ListContentsRequest::ListContentsRequest()
    : WisdomRequest(new ListContentsRequestPrivate(WisdomRequest::ListContentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContentsRequest::response(QNetworkReply * const reply) const
{
    return new ListContentsResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::ListContentsRequestPrivate
 * \brief The ListContentsRequestPrivate class provides private implementation for ListContentsRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListContentsRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
ListContentsRequestPrivate::ListContentsRequestPrivate(
    const WisdomRequest::Action action, ListContentsRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContentsRequest
 * class' copy constructor.
 */
ListContentsRequestPrivate::ListContentsRequestPrivate(
    const ListContentsRequestPrivate &other, ListContentsRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
