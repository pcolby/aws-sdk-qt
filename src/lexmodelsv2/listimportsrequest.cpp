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

#include "listimportsrequest.h"
#include "listimportsrequest_p.h"
#include "listimportsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListImportsRequest
 * \brief The ListImportsRequest class provides an interface for LexModelsV2 ListImports requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listImports
 */

/*!
 * Constructs a copy of \a other.
 */
ListImportsRequest::ListImportsRequest(const ListImportsRequest &other)
    : LexModelsV2Request(new ListImportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImportsRequest object.
 */
ListImportsRequest::ListImportsRequest()
    : LexModelsV2Request(new ListImportsRequestPrivate(LexModelsV2Request::ListImportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListImportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImportsRequest::response(QNetworkReply * const reply) const
{
    return new ListImportsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListImportsRequestPrivate
 * \brief The ListImportsRequestPrivate class provides private implementation for ListImportsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListImportsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListImportsRequestPrivate::ListImportsRequestPrivate(
    const LexModelsV2Request::Action action, ListImportsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImportsRequest
 * class' copy constructor.
 */
ListImportsRequestPrivate::ListImportsRequestPrivate(
    const ListImportsRequestPrivate &other, ListImportsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
