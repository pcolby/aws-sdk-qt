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

#include "getresourceconfighistoryrequest.h"
#include "getresourceconfighistoryrequest_p.h"
#include "getresourceconfighistoryresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::GetResourceConfigHistoryRequest
 * \brief The GetResourceConfigHistoryRequest class provides an interface for ConfigService GetResourceConfigHistory requests.
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
 *  href="http://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  AWS
 * 
 *  Resources</a>>
 * 
 *  You can access and manage AWS Config through the AWS Management Console, the AWS Command Line Interface (AWS CLI), the
 *  AWS Config API, or the AWS SDKs for AWS Config. This reference guide contains documentation for the AWS Config API and
 *  the AWS CLI commands that you can use to manage AWS Config. The AWS Config API uses the Signature Version 4 protocol for
 *  signing requests. For more information about how to sign a request with this protocol, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about AWS Config features and their associated actions or commands, as well as how to work with
 *  AWS Management Console, see <a href="http://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is
 *  AWS Config</a> in the <i>AWS Config Developer
 * 
 *  Guide</i>> <ul> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li/>
 *  <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li> </li> <li/> <li/> <li/> <li/>
 *
 * \sa ConfigServiceClient::getResourceConfigHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceConfigHistoryRequest::GetResourceConfigHistoryRequest(const GetResourceConfigHistoryRequest &other)
    : ConfigServiceRequest(new GetResourceConfigHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceConfigHistoryRequest object.
 */
GetResourceConfigHistoryRequest::GetResourceConfigHistoryRequest()
    : ConfigServiceRequest(new GetResourceConfigHistoryRequestPrivate(ConfigServiceRequest::GetResourceConfigHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceConfigHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceConfigHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceConfigHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceConfigHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::ConfigService::GetResourceConfigHistoryRequestPrivate
 * \brief The GetResourceConfigHistoryRequestPrivate class provides private implementation for GetResourceConfigHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 *
 * Constructs a GetResourceConfigHistoryRequestPrivate object for ConfigService \a action with,
 * public implementation \a q.
 */
GetResourceConfigHistoryRequestPrivate::GetResourceConfigHistoryRequestPrivate(
    const ConfigServiceRequest::Action action, GetResourceConfigHistoryRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceConfigHistoryRequest
 * class' copy constructor.
 */
GetResourceConfigHistoryRequestPrivate::GetResourceConfigHistoryRequestPrivate(
    const GetResourceConfigHistoryRequestPrivate &other, GetResourceConfigHistoryRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
