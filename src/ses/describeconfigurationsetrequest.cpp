// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationsetrequest.h"
#include "describeconfigurationsetrequest_p.h"
#include "describeconfigurationsetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DescribeConfigurationSetRequest
 * \brief The DescribeConfigurationSetRequest class provides an interface for Ses DescribeConfigurationSet requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::describeConfigurationSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationSetRequest::DescribeConfigurationSetRequest(const DescribeConfigurationSetRequest &other)
    : SesRequest(new DescribeConfigurationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationSetRequest object.
 */
DescribeConfigurationSetRequest::DescribeConfigurationSetRequest()
    : SesRequest(new DescribeConfigurationSetRequestPrivate(SesRequest::DescribeConfigurationSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConfigurationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConfigurationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DescribeConfigurationSetRequestPrivate
 * \brief The DescribeConfigurationSetRequestPrivate class provides private implementation for DescribeConfigurationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DescribeConfigurationSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DescribeConfigurationSetRequestPrivate::DescribeConfigurationSetRequestPrivate(
    const SesRequest::Action action, DescribeConfigurationSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationSetRequest
 * class' copy constructor.
 */
DescribeConfigurationSetRequestPrivate::DescribeConfigurationSetRequestPrivate(
    const DescribeConfigurationSetRequestPrivate &other, DescribeConfigurationSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
