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

#include "createbotaliasrequest.h"
#include "createbotaliasrequest_p.h"
#include "createbotaliasresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotAliasRequest
 * \brief The CreateBotAliasRequest class provides an interface for LexModelsV2 CreateBotAlias requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBotAliasRequest::CreateBotAliasRequest(const CreateBotAliasRequest &other)
    : LexModelsV2Request(new CreateBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBotAliasRequest object.
 */
CreateBotAliasRequest::CreateBotAliasRequest()
    : LexModelsV2Request(new CreateBotAliasRequestPrivate(LexModelsV2Request::CreateBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateBotAliasRequestPrivate
 * \brief The CreateBotAliasRequestPrivate class provides private implementation for CreateBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotAliasRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateBotAliasRequestPrivate::CreateBotAliasRequestPrivate(
    const LexModelsV2Request::Action action, CreateBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBotAliasRequest
 * class' copy constructor.
 */
CreateBotAliasRequestPrivate::CreateBotAliasRequestPrivate(
    const CreateBotAliasRequestPrivate &other, CreateBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
