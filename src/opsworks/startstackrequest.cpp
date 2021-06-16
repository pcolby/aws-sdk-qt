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

#include "startstackrequest.h"
#include "startstackrequest_p.h"
#include "startstackresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/*!
 * \class QtAws::OpsWorks::StartStackRequest
 * \brief The StartStackRequest class provides an interface for OpsWorks StartStack requests.
 *
 * \inmodule QtAwsOpsWorks
 *
 *  <fullname>AWS OpsWorks</fullname>
 * 
 *  Welcome to the <i>AWS OpsWorks Stacks API Reference</i>. This guide provides descriptions, syntax, and usage examples
 *  for AWS OpsWorks Stacks actions and data types, including common parameters and error codes.
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks is an application management service that provides an integrated experience for overseeing the
 *  complete application lifecycle. For information about this product, go to the <a
 *  href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page.
 * 
 *  </p
 * 
 *  <b>SDKs and CLI</b>
 * 
 *  </p
 * 
 *  The most common way to use the AWS OpsWorks Stacks API is by using the AWS Command Line Interface (CLI) or by using one
 *  of the AWS SDKs to implement applications in your preferred language. For more information,
 * 
 *  see> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS CLI</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS
 *  SDK for Java</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS SDK for .NET</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS SDK for PHP 2</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/sdkforruby/api/">AWS SDK for Ruby</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for Node.js</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for Python(Boto)</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks supports the following endpoints, all HTTPS. You must connect to one of the following endpoints.
 *  Stacks can only be accessed or managed within the endpoint in which they are
 * 
 *  created> <ul> <li>
 * 
 *  opsworks.us-east-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-east-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ca-central-1.amazonaws.com (API only; not available in the AWS
 * 
 *  console> </li> <li>
 * 
 *  opsworks.eu-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-3.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-central-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-south-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.sa-east-1.amazonaws.co> </li> </ul>
 * 
 *  <b>Chef Versions</b>
 * 
 *  </p
 * 
 *  When you call <a>CreateStack</a>, <a>CloneStack</a>, or <a>UpdateStack</a> we recommend you use the
 *  <code>ConfigurationManager</code> parameter to specify the Chef version. The recommended and default value for Linux
 *  stacks is currently 12. Windows stacks use Chef 12.2. For more information, see <a
 *  href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef
 * 
 *  Versions</a>> <note>
 * 
 *  You can specify Chef 12, 11.10, or 11.4 for your Linux stack. We recommend migrating your existing Linux stacks to Chef
 *  12 as soon as
 *
 * \sa OpsWorksClient::startStack
 */

/*!
 * Constructs a copy of \a other.
 */
StartStackRequest::StartStackRequest(const StartStackRequest &other)
    : OpsWorksRequest(new StartStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStackRequest object.
 */
StartStackRequest::StartStackRequest()
    : OpsWorksRequest(new StartStackRequestPrivate(OpsWorksRequest::StartStackAction, this))
{

}

/*!
 * \reimp
 */
bool StartStackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStackRequest::response(QNetworkReply * const reply) const
{
    return new StartStackResponse(*this, reply);
}

/*!
 * \class QtAws::OpsWorks::StartStackRequestPrivate
 * \brief The StartStackRequestPrivate class provides private implementation for StartStackRequest.
 * \internal
 *
 * \inmodule QtAwsOpsWorks
 */

/*!
 * Constructs a StartStackRequestPrivate object for OpsWorks \a action,
 * with public implementation \a q.
 */
StartStackRequestPrivate::StartStackRequestPrivate(
    const OpsWorksRequest::Action action, StartStackRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStackRequest
 * class' copy constructor.
 */
StartStackRequestPrivate::StartStackRequestPrivate(
    const StartStackRequestPrivate &other, StartStackRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
