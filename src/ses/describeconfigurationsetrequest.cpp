/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeconfigurationsetrequest.h"
#include "describeconfigurationsetrequest_p.h"
#include "describeconfigurationsetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DescribeConfigurationSetRequest
 * \brief The DescribeConfigurationSetRequest class provides an interface for SES DescribeConfigurationSet requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
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
 * \class QtAws::SES::DescribeConfigurationSetRequestPrivate
 * \brief The DescribeConfigurationSetRequestPrivate class provides private implementation for DescribeConfigurationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
