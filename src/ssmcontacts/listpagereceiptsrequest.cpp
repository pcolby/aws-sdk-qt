/*
    Copyright 2013-2021 Paul Colby

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

#include "listpagereceiptsrequest.h"
#include "listpagereceiptsrequest_p.h"
#include "listpagereceiptsresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListPageReceiptsRequest
 * \brief The ListPageReceiptsRequest class provides an interface for SSMContacts ListPageReceipts requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listPageReceipts
 */

/*!
 * Constructs a copy of \a other.
 */
ListPageReceiptsRequest::ListPageReceiptsRequest(const ListPageReceiptsRequest &other)
    : SSMContactsRequest(new ListPageReceiptsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPageReceiptsRequest object.
 */
ListPageReceiptsRequest::ListPageReceiptsRequest()
    : SSMContactsRequest(new ListPageReceiptsRequestPrivate(SSMContactsRequest::ListPageReceiptsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPageReceiptsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPageReceiptsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPageReceiptsRequest::response(QNetworkReply * const reply) const
{
    return new ListPageReceiptsResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::ListPageReceiptsRequestPrivate
 * \brief The ListPageReceiptsRequestPrivate class provides private implementation for ListPageReceiptsRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListPageReceiptsRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
ListPageReceiptsRequestPrivate::ListPageReceiptsRequestPrivate(
    const SSMContactsRequest::Action action, ListPageReceiptsRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPageReceiptsRequest
 * class' copy constructor.
 */
ListPageReceiptsRequestPrivate::ListPageReceiptsRequestPrivate(
    const ListPageReceiptsRequestPrivate &other, ListPageReceiptsRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
