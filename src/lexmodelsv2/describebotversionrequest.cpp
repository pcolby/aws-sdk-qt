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

#include "describebotversionrequest.h"
#include "describebotversionrequest_p.h"
#include "describebotversionresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotVersionRequest
 * \brief The DescribeBotVersionRequest class provides an interface for LexModelsV2 DescribeBotVersion requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBotVersionRequest::DescribeBotVersionRequest(const DescribeBotVersionRequest &other)
    : LexModelsV2Request(new DescribeBotVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBotVersionRequest object.
 */
DescribeBotVersionRequest::DescribeBotVersionRequest()
    : LexModelsV2Request(new DescribeBotVersionRequestPrivate(LexModelsV2Request::DescribeBotVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBotVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBotVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBotVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotVersionRequestPrivate
 * \brief The DescribeBotVersionRequestPrivate class provides private implementation for DescribeBotVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotVersionRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeBotVersionRequestPrivate::DescribeBotVersionRequestPrivate(
    const LexModelsV2Request::Action action, DescribeBotVersionRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBotVersionRequest
 * class' copy constructor.
 */
DescribeBotVersionRequestPrivate::DescribeBotVersionRequestPrivate(
    const DescribeBotVersionRequestPrivate &other, DescribeBotVersionRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
