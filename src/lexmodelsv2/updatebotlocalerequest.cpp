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
