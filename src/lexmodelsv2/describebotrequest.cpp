// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotrequest.h"
#include "describebotrequest_p.h"
#include "describebotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotRequest
 * \brief The DescribeBotRequest class provides an interface for LexModelsV2 DescribeBot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBot
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBotRequest::DescribeBotRequest(const DescribeBotRequest &other)
    : LexModelsV2Request(new DescribeBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBotRequest object.
 */
DescribeBotRequest::DescribeBotRequest()
    : LexModelsV2Request(new DescribeBotRequestPrivate(LexModelsV2Request::DescribeBotAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBotRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotRequestPrivate
 * \brief The DescribeBotRequestPrivate class provides private implementation for DescribeBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeBotRequestPrivate::DescribeBotRequestPrivate(
    const LexModelsV2Request::Action action, DescribeBotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBotRequest
 * class' copy constructor.
 */
DescribeBotRequestPrivate::DescribeBotRequestPrivate(
    const DescribeBotRequestPrivate &other, DescribeBotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
