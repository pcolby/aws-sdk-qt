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

#include "describeintentrequest.h"
#include "describeintentrequest_p.h"
#include "describeintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeIntentRequest
 * \brief The DescribeIntentRequest class provides an interface for LexModelsV2 DescribeIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeIntent
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIntentRequest::DescribeIntentRequest(const DescribeIntentRequest &other)
    : LexModelsV2Request(new DescribeIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIntentRequest object.
 */
DescribeIntentRequest::DescribeIntentRequest()
    : LexModelsV2Request(new DescribeIntentRequestPrivate(LexModelsV2Request::DescribeIntentAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIntentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeIntentRequestPrivate
 * \brief The DescribeIntentRequestPrivate class provides private implementation for DescribeIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeIntentRequestPrivate::DescribeIntentRequestPrivate(
    const LexModelsV2Request::Action action, DescribeIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIntentRequest
 * class' copy constructor.
 */
DescribeIntentRequestPrivate::DescribeIntentRequestPrivate(
    const DescribeIntentRequestPrivate &other, DescribeIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
