// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablesrequest.h"
#include "listtablesrequest_p.h"
#include "listtablesresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTablesRequest
 * \brief The ListTablesRequest class provides an interface for Honeycode ListTables requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTables
 */

/*!
 * Constructs a copy of \a other.
 */
ListTablesRequest::ListTablesRequest(const ListTablesRequest &other)
    : HoneycodeRequest(new ListTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTablesRequest object.
 */
ListTablesRequest::ListTablesRequest()
    : HoneycodeRequest(new ListTablesRequestPrivate(HoneycodeRequest::ListTablesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTablesRequest::response(QNetworkReply * const reply) const
{
    return new ListTablesResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::ListTablesRequestPrivate
 * \brief The ListTablesRequestPrivate class provides private implementation for ListTablesRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTablesRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
ListTablesRequestPrivate::ListTablesRequestPrivate(
    const HoneycodeRequest::Action action, ListTablesRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTablesRequest
 * class' copy constructor.
 */
ListTablesRequestPrivate::ListTablesRequestPrivate(
    const ListTablesRequestPrivate &other, ListTablesRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
