// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
