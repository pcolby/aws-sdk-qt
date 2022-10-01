// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprotectionsrequest.h"
#include "listprotectionsrequest_p.h"
#include "listprotectionsresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ListProtectionsRequest
 * \brief The ListProtectionsRequest class provides an interface for Shield ListProtections requests.
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
 * \sa ShieldClient::listProtections
 */

/*!
 * Constructs a copy of \a other.
 */
ListProtectionsRequest::ListProtectionsRequest(const ListProtectionsRequest &other)
    : ShieldRequest(new ListProtectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProtectionsRequest object.
 */
ListProtectionsRequest::ListProtectionsRequest()
    : ShieldRequest(new ListProtectionsRequestPrivate(ShieldRequest::ListProtectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProtectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProtectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProtectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListProtectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::ListProtectionsRequestPrivate
 * \brief The ListProtectionsRequestPrivate class provides private implementation for ListProtectionsRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ListProtectionsRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
ListProtectionsRequestPrivate::ListProtectionsRequestPrivate(
    const ShieldRequest::Action action, ListProtectionsRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProtectionsRequest
 * class' copy constructor.
 */
ListProtectionsRequestPrivate::ListProtectionsRequestPrivate(
    const ListProtectionsRequestPrivate &other, ListProtectionsRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
