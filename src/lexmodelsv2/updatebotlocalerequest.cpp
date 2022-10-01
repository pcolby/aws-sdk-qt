// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebotlocalerequest.h"
#include "updatebotlocalerequest_p.h"
#include "updatebotlocaleresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotLocaleRequest
 * \brief The UpdateBotLocaleRequest class provides an interface for LexModelsV2 UpdateBotLocale requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBotLocale
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBotLocaleRequest::UpdateBotLocaleRequest(const UpdateBotLocaleRequest &other)
    : LexModelsV2Request(new UpdateBotLocaleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBotLocaleRequest object.
 */
UpdateBotLocaleRequest::UpdateBotLocaleRequest()
    : LexModelsV2Request(new UpdateBotLocaleRequestPrivate(LexModelsV2Request::UpdateBotLocaleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBotLocaleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBotLocaleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBotLocaleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBotLocaleResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotLocaleRequestPrivate
 * \brief The UpdateBotLocaleRequestPrivate class provides private implementation for UpdateBotLocaleRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotLocaleRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateBotLocaleRequestPrivate::UpdateBotLocaleRequestPrivate(
    const LexModelsV2Request::Action action, UpdateBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBotLocaleRequest
 * class' copy constructor.
 */
UpdateBotLocaleRequestPrivate::UpdateBotLocaleRequestPrivate(
    const UpdateBotLocaleRequestPrivate &other, UpdateBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
