// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotversionrequest.h"
#include "deletebotversionrequest_p.h"
#include "deletebotversionresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotVersionRequest
 * \brief The DeleteBotVersionRequest class provides an interface for LexModelsV2 DeleteBotVersion requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotVersionRequest::DeleteBotVersionRequest(const DeleteBotVersionRequest &other)
    : LexModelsV2Request(new DeleteBotVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotVersionRequest object.
 */
DeleteBotVersionRequest::DeleteBotVersionRequest()
    : LexModelsV2Request(new DeleteBotVersionRequestPrivate(LexModelsV2Request::DeleteBotVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotVersionRequestPrivate
 * \brief The DeleteBotVersionRequestPrivate class provides private implementation for DeleteBotVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotVersionRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteBotVersionRequestPrivate::DeleteBotVersionRequestPrivate(
    const LexModelsV2Request::Action action, DeleteBotVersionRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotVersionRequest
 * class' copy constructor.
 */
DeleteBotVersionRequestPrivate::DeleteBotVersionRequestPrivate(
    const DeleteBotVersionRequestPrivate &other, DeleteBotVersionRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
