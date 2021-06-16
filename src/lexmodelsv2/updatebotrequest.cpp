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
