/*
    Copyright 2013-2020 Paul Colby

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

#include "describeremediationconfigurationsrequest.h"
#include "describeremediationconfigurationsrequest_p.h"
#include "describeremediationconfigurationsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::DescribeRemediationConfigurationsRequest
 * \brief The DescribeRemediationConfigurationsRequest class provides an interface for ConfigService DescribeRemediationConfigurations requests.
 *
 * \inmodule QtAwsConfigService
 *
 *  <fullname>AWS Config</fullname>
 * 
 *  AWS Config provides a way to keep track of the configurations of all the AWS resources associated with your AWS account.
 *  You can use AWS Config to get the current and historical configurations of each AWS resource and also to get information
 *  about the relationship between the resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance, an
 *  Elastic Block Store (EBS) volume, an elastic network Interface (ENI), or a security group. For a complete list of
 *  resources currently supported by AWS Config, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  AWS
 * 
 *  Resources</a>>
 * 
 *  You can access and manage AWS Config through the AWS Management Console, the AWS Command Line Interface (AWS CLI), the
 *  AWS Config API, or the AWS SDKs for AWS Config. This reference guide contains documentation for the AWS Config API and
 *  the AWS CLI commands that you can use to manage AWS Config. The AWS Config API uses the Signature Version 4 protocol for
 *  signing requests. For more information about how to sign a request with this protocol, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about AWS Config features and their associated actions or commands, as well as how to work with
 *  AWS Management Console, see <a href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is
 *  AWS Config</a> in the <i>AWS Config Developer
 *
 * \sa ConfigServiceClient::describeRemediationConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRemediationConfigurationsRequest::DescribeRemediationConfigurationsRequest(const DescribeRemediationConfigurationsRequest &other)
    : ConfigServiceRequest(new DescribeRemediationConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRemediationConfigurationsRequest object.
 */
DescribeRemediationConfigurationsRequest::DescribeRemediationConfigurationsRequest()
    : ConfigServiceRequest(new DescribeRemediationConfigurationsRequestPrivate(ConfigServiceRequest::DescribeRemediationConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRemediationConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRemediationConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRemediationConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRemediationConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::ConfigService::DescribeRemediationConfigurationsRequestPrivate
 * \brief The DescribeRemediationConfigurationsRequestPrivate class provides private implementation for DescribeRemediationConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a DescribeRemediationConfigurationsRequestPrivate object for ConfigService \a action,
 * with public implementation \a q.
 */
DescribeRemediationConfigurationsRequestPrivate::DescribeRemediationConfigurationsRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeRemediationConfigurationsRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRemediationConfigurationsRequest
 * class' copy constructor.
 */
DescribeRemediationConfigurationsRequestPrivate::DescribeRemediationConfigurationsRequestPrivate(
    const DescribeRemediationConfigurationsRequestPrivate &other, DescribeRemediationConfigurationsRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
