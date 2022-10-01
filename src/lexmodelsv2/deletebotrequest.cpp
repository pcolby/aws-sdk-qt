// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotrequest.h"
#include "deletebotrequest_p.h"
#include "deletebotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotRequest
 * \brief The DeleteBotRequest class provides an interface for LexModelsV2 DeleteBot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotRequest::DeleteBotRequest(const DeleteBotRequest &other)
    : LexModelsV2Request(new DeleteBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotRequest object.
 */
DeleteBotRequest::DeleteBotRequest()
    : LexModelsV2Request(new DeleteBotRequestPrivate(LexModelsV2Request::DeleteBotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotRequestPrivate
 * \brief The DeleteBotRequestPrivate class provides private implementation for DeleteBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteBotRequestPrivate::DeleteBotRequestPrivate(
    const LexModelsV2Request::Action action, DeleteBotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotRequest
 * class' copy constructor.
 */
DeleteBotRequestPrivate::DeleteBotRequestPrivate(
    const DeleteBotRequestPrivate &other, DeleteBotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
