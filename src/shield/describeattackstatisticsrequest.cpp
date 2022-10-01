// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeattackstatisticsrequest.h"
#include "describeattackstatisticsrequest_p.h"
#include "describeattackstatisticsresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeAttackStatisticsRequest
 * \brief The DescribeAttackStatisticsRequest class provides an interface for Shield DescribeAttackStatistics requests.
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
 * \sa ShieldClient::describeAttackStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAttackStatisticsRequest::DescribeAttackStatisticsRequest(const DescribeAttackStatisticsRequest &other)
    : ShieldRequest(new DescribeAttackStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAttackStatisticsRequest object.
 */
DescribeAttackStatisticsRequest::DescribeAttackStatisticsRequest()
    : ShieldRequest(new DescribeAttackStatisticsRequestPrivate(ShieldRequest::DescribeAttackStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAttackStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAttackStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAttackStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAttackStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DescribeAttackStatisticsRequestPrivate
 * \brief The DescribeAttackStatisticsRequestPrivate class provides private implementation for DescribeAttackStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeAttackStatisticsRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DescribeAttackStatisticsRequestPrivate::DescribeAttackStatisticsRequestPrivate(
    const ShieldRequest::Action action, DescribeAttackStatisticsRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAttackStatisticsRequest
 * class' copy constructor.
 */
DescribeAttackStatisticsRequestPrivate::DescribeAttackStatisticsRequestPrivate(
    const DescribeAttackStatisticsRequestPrivate &other, DescribeAttackStatisticsRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
