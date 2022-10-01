// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotaliasesrequest.h"
#include "listbotaliasesrequest_p.h"
#include "listbotaliasesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotAliasesRequest
 * \brief The ListBotAliasesRequest class provides an interface for LexModelsV2 ListBotAliases requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotAliasesRequest::ListBotAliasesRequest(const ListBotAliasesRequest &other)
    : LexModelsV2Request(new ListBotAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotAliasesRequest object.
 */
ListBotAliasesRequest::ListBotAliasesRequest()
    : LexModelsV2Request(new ListBotAliasesRequestPrivate(LexModelsV2Request::ListBotAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListBotAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotAliasesRequestPrivate
 * \brief The ListBotAliasesRequestPrivate class provides private implementation for ListBotAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotAliasesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotAliasesRequestPrivate::ListBotAliasesRequestPrivate(
    const LexModelsV2Request::Action action, ListBotAliasesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotAliasesRequest
 * class' copy constructor.
 */
ListBotAliasesRequestPrivate::ListBotAliasesRequestPrivate(
    const ListBotAliasesRequestPrivate &other, ListBotAliasesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
