// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
