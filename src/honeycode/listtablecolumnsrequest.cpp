// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablecolumnsrequest.h"
#include "listtablecolumnsrequest_p.h"
#include "listtablecolumnsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableColumnsRequest
 * \brief The ListTableColumnsRequest class provides an interface for Honeycode ListTableColumns requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableColumns
 */

/*!
 * Constructs a copy of \a other.
 */
ListTableColumnsRequest::ListTableColumnsRequest(const ListTableColumnsRequest &other)
    : HoneycodeRequest(new ListTableColumnsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTableColumnsRequest object.
 */
ListTableColumnsRequest::ListTableColumnsRequest()
    : HoneycodeRequest(new ListTableColumnsRequestPrivate(HoneycodeRequest::ListTableColumnsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTableColumnsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTableColumnsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTableColumnsRequest::response(QNetworkReply * const reply) const
{
    return new ListTableColumnsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::ListTableColumnsRequestPrivate
 * \brief The ListTableColumnsRequestPrivate class provides private implementation for ListTableColumnsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableColumnsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
ListTableColumnsRequestPrivate::ListTableColumnsRequestPrivate(
    const HoneycodeRequest::Action action, ListTableColumnsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTableColumnsRequest
 * class' copy constructor.
 */
ListTableColumnsRequestPrivate::ListTableColumnsRequestPrivate(
    const ListTableColumnsRequestPrivate &other, ListTableColumnsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
