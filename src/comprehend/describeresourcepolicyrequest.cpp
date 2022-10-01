// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourcepolicyrequest.h"
#include "describeresourcepolicyrequest_p.h"
#include "describeresourcepolicyresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeResourcePolicyRequest
 * \brief The DescribeResourcePolicyRequest class provides an interface for Comprehend DescribeResourcePolicy requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResourcePolicyRequest::DescribeResourcePolicyRequest(const DescribeResourcePolicyRequest &other)
    : ComprehendRequest(new DescribeResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResourcePolicyRequest object.
 */
DescribeResourcePolicyRequest::DescribeResourcePolicyRequest()
    : ComprehendRequest(new DescribeResourcePolicyRequestPrivate(ComprehendRequest::DescribeResourcePolicyAction, this))
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
 * \class QtAws::Comprehend::DescribeResourcePolicyRequestPrivate
 * \brief The DescribeResourcePolicyRequestPrivate class provides private implementation for DescribeResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeResourcePolicyRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeResourcePolicyRequestPrivate::DescribeResourcePolicyRequestPrivate(
    const ComprehendRequest::Action action, DescribeResourcePolicyRequest * const q)
    : ComprehendRequestPrivate(action, q)
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
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
