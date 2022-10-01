// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotlocalerequest.h"
#include "describebotlocalerequest_p.h"
#include "describebotlocaleresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotLocaleRequest
 * \brief The DescribeBotLocaleRequest class provides an interface for LexModelsV2 DescribeBotLocale requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotLocale
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBotLocaleRequest::DescribeBotLocaleRequest(const DescribeBotLocaleRequest &other)
    : LexModelsV2Request(new DescribeBotLocaleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBotLocaleRequest object.
 */
DescribeBotLocaleRequest::DescribeBotLocaleRequest()
    : LexModelsV2Request(new DescribeBotLocaleRequestPrivate(LexModelsV2Request::DescribeBotLocaleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBotLocaleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBotLocaleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBotLocaleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBotLocaleResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotLocaleRequestPrivate
 * \brief The DescribeBotLocaleRequestPrivate class provides private implementation for DescribeBotLocaleRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotLocaleRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeBotLocaleRequestPrivate::DescribeBotLocaleRequestPrivate(
    const LexModelsV2Request::Action action, DescribeBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBotLocaleRequest
 * class' copy constructor.
 */
DescribeBotLocaleRequestPrivate::DescribeBotLocaleRequestPrivate(
    const DescribeBotLocaleRequestPrivate &other, DescribeBotLocaleRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
