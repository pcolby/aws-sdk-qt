// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotversionsrequest.h"
#include "listbotversionsrequest_p.h"
#include "listbotversionsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsRequest
 * \brief The ListBotVersionsRequest class provides an interface for LexModelsV2 ListBotVersions requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotVersionsRequest::ListBotVersionsRequest(const ListBotVersionsRequest &other)
    : LexModelsV2Request(new ListBotVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotVersionsRequest object.
 */
ListBotVersionsRequest::ListBotVersionsRequest()
    : LexModelsV2Request(new ListBotVersionsRequestPrivate(LexModelsV2Request::ListBotVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBotVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsRequestPrivate
 * \brief The ListBotVersionsRequestPrivate class provides private implementation for ListBotVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotVersionsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotVersionsRequestPrivate::ListBotVersionsRequestPrivate(
    const LexModelsV2Request::Action action, ListBotVersionsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotVersionsRequest
 * class' copy constructor.
 */
ListBotVersionsRequestPrivate::ListBotVersionsRequestPrivate(
    const ListBotVersionsRequestPrivate &other, ListBotVersionsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
