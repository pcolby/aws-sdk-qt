// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
