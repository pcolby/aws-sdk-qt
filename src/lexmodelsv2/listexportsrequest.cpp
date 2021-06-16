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

#include "listexportsrequest.h"
#include "listexportsrequest_p.h"
#include "listexportsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListExportsRequest
 * \brief The ListExportsRequest class provides an interface for LexModelsV2 ListExports requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listExports
 */

/*!
 * Constructs a copy of \a other.
 */
ListExportsRequest::ListExportsRequest(const ListExportsRequest &other)
    : LexModelsV2Request(new ListExportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExportsRequest object.
 */
ListExportsRequest::ListExportsRequest()
    : LexModelsV2Request(new ListExportsRequestPrivate(LexModelsV2Request::ListExportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExportsRequest::response(QNetworkReply * const reply) const
{
    return new ListExportsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListExportsRequestPrivate
 * \brief The ListExportsRequestPrivate class provides private implementation for ListExportsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListExportsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListExportsRequestPrivate::ListExportsRequestPrivate(
    const LexModelsV2Request::Action action, ListExportsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExportsRequest
 * class' copy constructor.
 */
ListExportsRequestPrivate::ListExportsRequestPrivate(
    const ListExportsRequestPrivate &other, ListExportsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
