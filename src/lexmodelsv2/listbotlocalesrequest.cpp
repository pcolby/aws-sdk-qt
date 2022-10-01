// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotlocalesrequest.h"
#include "listbotlocalesrequest_p.h"
#include "listbotlocalesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesRequest
 * \brief The ListBotLocalesRequest class provides an interface for LexModelsV2 ListBotLocales requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotLocales
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotLocalesRequest::ListBotLocalesRequest(const ListBotLocalesRequest &other)
    : LexModelsV2Request(new ListBotLocalesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotLocalesRequest object.
 */
ListBotLocalesRequest::ListBotLocalesRequest()
    : LexModelsV2Request(new ListBotLocalesRequestPrivate(LexModelsV2Request::ListBotLocalesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotLocalesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotLocalesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotLocalesRequest::response(QNetworkReply * const reply) const
{
    return new ListBotLocalesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesRequestPrivate
 * \brief The ListBotLocalesRequestPrivate class provides private implementation for ListBotLocalesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotLocalesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotLocalesRequestPrivate::ListBotLocalesRequestPrivate(
    const LexModelsV2Request::Action action, ListBotLocalesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotLocalesRequest
 * class' copy constructor.
 */
ListBotLocalesRequestPrivate::ListBotLocalesRequestPrivate(
    const ListBotLocalesRequestPrivate &other, ListBotLocalesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
