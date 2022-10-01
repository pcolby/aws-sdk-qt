// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattacksrequest.h"
#include "listattacksrequest_p.h"
#include "listattacksresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ListAttacksRequest
 * \brief The ListAttacksRequest class provides an interface for Shield ListAttacks requests.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::listAttacks
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttacksRequest::ListAttacksRequest(const ListAttacksRequest &other)
    : ShieldRequest(new ListAttacksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttacksRequest object.
 */
ListAttacksRequest::ListAttacksRequest()
    : ShieldRequest(new ListAttacksRequestPrivate(ShieldRequest::ListAttacksAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttacksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttacksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttacksRequest::response(QNetworkReply * const reply) const
{
    return new ListAttacksResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::ListAttacksRequestPrivate
 * \brief The ListAttacksRequestPrivate class provides private implementation for ListAttacksRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ListAttacksRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
ListAttacksRequestPrivate::ListAttacksRequestPrivate(
    const ShieldRequest::Action action, ListAttacksRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttacksRequest
 * class' copy constructor.
 */
ListAttacksRequestPrivate::ListAttacksRequestPrivate(
    const ListAttacksRequestPrivate &other, ListAttacksRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
