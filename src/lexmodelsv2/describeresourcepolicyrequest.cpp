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

#include "describeresourcepolicyrequest.h"
#include "describeresourcepolicyrequest_p.h"
#include "describeresourcepolicyresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeResourcePolicyRequest
 * \brief The DescribeResourcePolicyRequest class provides an interface for LexModelsV2 DescribeResourcePolicy requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResourcePolicyRequest::DescribeResourcePolicyRequest(const DescribeResourcePolicyRequest &other)
    : LexModelsV2Request(new DescribeResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResourcePolicyRequest object.
 */
DescribeResourcePolicyRequest::DescribeResourcePolicyRequest()
    : LexModelsV2Request(new DescribeResourcePolicyRequestPrivate(LexModelsV2Request::DescribeResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeResourcePolicyRequestPrivate
 * \brief The DescribeResourcePolicyRequestPrivate class provides private implementation for DescribeResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeResourcePolicyRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeResourcePolicyRequestPrivate::DescribeResourcePolicyRequestPrivate(
    const LexModelsV2Request::Action action, DescribeResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourcePolicyRequest
 * class' copy constructor.
 */
DescribeResourcePolicyRequestPrivate::DescribeResourcePolicyRequestPrivate(
    const DescribeResourcePolicyRequestPrivate &other, DescribeResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
