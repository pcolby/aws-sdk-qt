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
