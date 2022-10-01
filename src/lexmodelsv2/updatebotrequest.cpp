// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebotrequest.h"
#include "updatebotrequest_p.h"
#include "updatebotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotRequest
 * \brief The UpdateBotRequest class provides an interface for LexModelsV2 UpdateBot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBot
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBotRequest::UpdateBotRequest(const UpdateBotRequest &other)
    : LexModelsV2Request(new UpdateBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBotRequest object.
 */
UpdateBotRequest::UpdateBotRequest()
    : LexModelsV2Request(new UpdateBotRequestPrivate(LexModelsV2Request::UpdateBotAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBotRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotRequestPrivate
 * \brief The UpdateBotRequestPrivate class provides private implementation for UpdateBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateBotRequestPrivate::UpdateBotRequestPrivate(
    const LexModelsV2Request::Action action, UpdateBotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBotRequest
 * class' copy constructor.
 */
UpdateBotRequestPrivate::UpdateBotRequestPrivate(
    const UpdateBotRequestPrivate &other, UpdateBotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
