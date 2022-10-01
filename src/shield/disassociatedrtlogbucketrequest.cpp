// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatedrtlogbucketrequest.h"
#include "disassociatedrtlogbucketrequest_p.h"
#include "disassociatedrtlogbucketresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisassociateDRTLogBucketRequest
 * \brief The DisassociateDRTLogBucketRequest class provides an interface for Shield DisassociateDRTLogBucket requests.
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
 * \sa ShieldClient::disassociateDRTLogBucket
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateDRTLogBucketRequest::DisassociateDRTLogBucketRequest(const DisassociateDRTLogBucketRequest &other)
    : ShieldRequest(new DisassociateDRTLogBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateDRTLogBucketRequest object.
 */
DisassociateDRTLogBucketRequest::DisassociateDRTLogBucketRequest()
    : ShieldRequest(new DisassociateDRTLogBucketRequestPrivate(ShieldRequest::DisassociateDRTLogBucketAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateDRTLogBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateDRTLogBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDRTLogBucketRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDRTLogBucketResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DisassociateDRTLogBucketRequestPrivate
 * \brief The DisassociateDRTLogBucketRequestPrivate class provides private implementation for DisassociateDRTLogBucketRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisassociateDRTLogBucketRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DisassociateDRTLogBucketRequestPrivate::DisassociateDRTLogBucketRequestPrivate(
    const ShieldRequest::Action action, DisassociateDRTLogBucketRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDRTLogBucketRequest
 * class' copy constructor.
 */
DisassociateDRTLogBucketRequestPrivate::DisassociateDRTLogBucketRequestPrivate(
    const DisassociateDRTLogBucketRequestPrivate &other, DisassociateDRTLogBucketRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
