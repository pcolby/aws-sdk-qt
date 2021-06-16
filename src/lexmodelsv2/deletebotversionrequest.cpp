/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
