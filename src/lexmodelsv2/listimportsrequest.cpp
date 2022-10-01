// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
