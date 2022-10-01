// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbotversionrequest.h"
#include "createbotversionrequest_p.h"
#include "createbotversionresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotVersionRequest
 * \brief The CreateBotVersionRequest class provides an interface for LexModelsV2 CreateBotVersion requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBotVersionRequest::CreateBotVersionRequest(const CreateBotVersionRequest &other)
    : LexModelsV2Request(new CreateBotVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBotVersionRequest object.
 */
CreateBotVersionRequest::CreateBotVersionRequest()
    : LexModelsV2Request(new CreateBotVersionRequestPrivate(LexModelsV2Request::CreateBotVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBotVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBotVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateBotVersionRequestPrivate
 * \brief The CreateBotVersionRequestPrivate class provides private implementation for CreateBotVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotVersionRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const LexModelsV2Request::Action action, CreateBotVersionRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBotVersionRequest
 * class' copy constructor.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const CreateBotVersionRequestPrivate &other, CreateBotVersionRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
