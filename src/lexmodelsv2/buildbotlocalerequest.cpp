// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
