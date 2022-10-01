// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedrtlogbucketrequest.h"
#include "associatedrtlogbucketrequest_p.h"
#include "associatedrtlogbucketresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateDRTLogBucketRequest
 * \brief The AssociateDRTLogBucketRequest class provides an interface for Shield AssociateDRTLogBucket requests.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::associateDRTLogBucket
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDRTLogBucketRequest::AssociateDRTLogBucketRequest(const AssociateDRTLogBucketRequest &other)
    : ShieldRequest(new AssociateDRTLogBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDRTLogBucketRequest object.
 */
AssociateDRTLogBucketRequest::AssociateDRTLogBucketRequest()
    : ShieldRequest(new AssociateDRTLogBucketRequestPrivate(ShieldRequest::AssociateDRTLogBucketAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDRTLogBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDRTLogBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDRTLogBucketRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDRTLogBucketResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::AssociateDRTLogBucketRequestPrivate
 * \brief The AssociateDRTLogBucketRequestPrivate class provides private implementation for AssociateDRTLogBucketRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateDRTLogBucketRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
AssociateDRTLogBucketRequestPrivate::AssociateDRTLogBucketRequestPrivate(
    const ShieldRequest::Action action, AssociateDRTLogBucketRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDRTLogBucketRequest
 * class' copy constructor.
 */
AssociateDRTLogBucketRequestPrivate::AssociateDRTLogBucketRequestPrivate(
    const AssociateDRTLogBucketRequestPrivate &other, AssociateDRTLogBucketRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
