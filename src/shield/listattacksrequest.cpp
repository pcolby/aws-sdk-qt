/*
    Copyright 2013-2019 Paul Colby

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
