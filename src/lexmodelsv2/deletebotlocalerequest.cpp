// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotlocalerequest.h"
#include "deletebotlocalerequest_p.h"
#include "deletebotlocaleresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotLocaleRequest
 * \brief The DeleteBotLocaleRequest class provides an interface for LexModelsV2 DeleteBotLocale requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotLocale
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotLocaleRequest::DeleteBotLocaleRequest(const DeleteBotLocaleRequest &other)
    : LexModelsV2Request(new DeleteBotLocaleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotLocaleRequest object.
 */
DeleteBotLocaleRequest::DeleteBotLocaleRequest()
    : LexModelsV2Request(new DeleteBotLocaleRequestPrivate(LexModelsV2Request::DeleteBotLocaleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotLocaleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotLocaleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotLocaleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotLocaleResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotLocaleRequestPrivate
 * \brief The DeleteBotLocaleRequestPrivate class provides private implementation for DeleteBotLocaleRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotLocaleRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteBotLocaleRequestPrivate::DeleteBotLocaleRequestPrivate(
    const LexModelsV2Request::Action action, DeleteBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotLocaleRequest
 * class' copy constructor.
 */
DeleteBotLocaleRequestPrivate::DeleteBotLocaleRequestPrivate(
    const DeleteBotLocaleRequestPrivate &other, DeleteBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
