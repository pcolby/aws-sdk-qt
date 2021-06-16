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

#include "buildbotlocalerequest.h"
#include "buildbotlocalerequest_p.h"
#include "buildbotlocaleresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::BuildBotLocaleRequest
 * \brief The BuildBotLocaleRequest class provides an interface for LexModelsV2 BuildBotLocale requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::buildBotLocale
 */

/*!
 * Constructs a copy of \a other.
 */
BuildBotLocaleRequest::BuildBotLocaleRequest(const BuildBotLocaleRequest &other)
    : LexModelsV2Request(new BuildBotLocaleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BuildBotLocaleRequest object.
 */
BuildBotLocaleRequest::BuildBotLocaleRequest()
    : LexModelsV2Request(new BuildBotLocaleRequestPrivate(LexModelsV2Request::BuildBotLocaleAction, this))
{

}

/*!
 * \reimp
 */
bool BuildBotLocaleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BuildBotLocaleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BuildBotLocaleRequest::response(QNetworkReply * const reply) const
{
    return new BuildBotLocaleResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::BuildBotLocaleRequestPrivate
 * \brief The BuildBotLocaleRequestPrivate class provides private implementation for BuildBotLocaleRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a BuildBotLocaleRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
BuildBotLocaleRequestPrivate::BuildBotLocaleRequestPrivate(
    const LexModelsV2Request::Action action, BuildBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BuildBotLocaleRequest
 * class' copy constructor.
 */
BuildBotLocaleRequestPrivate::BuildBotLocaleRequestPrivate(
    const BuildBotLocaleRequestPrivate &other, BuildBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
