// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotaliasrequest.h"
#include "describebotaliasrequest_p.h"
#include "describebotaliasresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotAliasRequest
 * \brief The DescribeBotAliasRequest class provides an interface for LexModelsV2 DescribeBotAlias requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBotAliasRequest::DescribeBotAliasRequest(const DescribeBotAliasRequest &other)
    : LexModelsV2Request(new DescribeBotAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBotAliasRequest object.
 */
DescribeBotAliasRequest::DescribeBotAliasRequest()
    : LexModelsV2Request(new DescribeBotAliasRequestPrivate(LexModelsV2Request::DescribeBotAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBotAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBotAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBotAliasResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotAliasRequestPrivate
 * \brief The DescribeBotAliasRequestPrivate class provides private implementation for DescribeBotAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotAliasRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeBotAliasRequestPrivate::DescribeBotAliasRequestPrivate(
    const LexModelsV2Request::Action action, DescribeBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBotAliasRequest
 * class' copy constructor.
 */
DescribeBotAliasRequestPrivate::DescribeBotAliasRequestPrivate(
    const DescribeBotAliasRequestPrivate &other, DescribeBotAliasRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
