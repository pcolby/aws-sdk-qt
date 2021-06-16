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

#include "createbotlocalerequest.h"
#include "createbotlocalerequest_p.h"
#include "createbotlocaleresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotLocaleRequest
 * \brief The CreateBotLocaleRequest class provides an interface for LexModelsV2 CreateBotLocale requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotLocale
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBotLocaleRequest::CreateBotLocaleRequest(const CreateBotLocaleRequest &other)
    : LexModelsV2Request(new CreateBotLocaleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBotLocaleRequest object.
 */
CreateBotLocaleRequest::CreateBotLocaleRequest()
    : LexModelsV2Request(new CreateBotLocaleRequestPrivate(LexModelsV2Request::CreateBotLocaleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBotLocaleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBotLocaleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBotLocaleRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotLocaleResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateBotLocaleRequestPrivate
 * \brief The CreateBotLocaleRequestPrivate class provides private implementation for CreateBotLocaleRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotLocaleRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateBotLocaleRequestPrivate::CreateBotLocaleRequestPrivate(
    const LexModelsV2Request::Action action, CreateBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBotLocaleRequest
 * class' copy constructor.
 */
CreateBotLocaleRequestPrivate::CreateBotLocaleRequestPrivate(
    const CreateBotLocaleRequestPrivate &other, CreateBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
