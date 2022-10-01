// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectorrequest.h"
#include "describeconnectorrequest_p.h"
#include "describeconnectorresponse.h"
#include "appflowrequest_p.h"

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::DescribeConnectorRequest
 * \brief The DescribeConnectorRequest class provides an interface for Appflow DescribeConnector requests.
 *
 * \inmodule QtAwsAppflow
 *
 *  Welcome to the Amazon AppFlow API reference. This guide is for developers who need detailed information about the Amazon
 *  AppFlow API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Amazon AppFlow is a fully managed integration service that enables you to securely transfer data between software as a
 *  service (SaaS) applications like Salesforce, Marketo, Slack, and ServiceNow, and Amazon Web Services like Amazon S3 and
 *  Amazon Redshift.
 * 
 *  </p
 * 
 *  Use the following links to get started on the Amazon AppFlow
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Operations.html">Actions</a>: An alphabetical list of
 *  all Amazon AppFlow API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Types.html">Data types</a>: An alphabetical list of
 *  all Amazon AppFlow data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonParameters.html">Common parameters</a>: Parameters
 *  that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonErrors.html">Common errors</a>: Client and server
 *  errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to Amazon AppFlow, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/appflow/latest/userguide/what-is-appflow.html">Amazon AppFlow User
 * 
 *  Guide</a>>
 * 
 *  Amazon AppFlow API users can use vendor-specific mechanisms for OAuth, and include applicable OAuth attributes (such as
 *  <code>auth-code</code> and <code>redirecturi</code>) with the connector-specific <code>ConnectorProfileProperties</code>
 *  when creating a new connector profile using Amazon AppFlow API operations. For example, Salesforce users can refer to
 *  the <a href="https://help.salesforce.com/articleView?id=remoteaccess_authenticate.htm"> <i>Authorize Apps with OAuth</i>
 *  </a>
 *
 * \sa AppflowClient::describeConnector
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConnectorRequest::DescribeConnectorRequest(const DescribeConnectorRequest &other)
    : AppflowRequest(new DescribeConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConnectorRequest object.
 */
DescribeConnectorRequest::DescribeConnectorRequest()
    : AppflowRequest(new DescribeConnectorRequestPrivate(AppflowRequest::DescribeConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConnectorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::Appflow::DescribeConnectorRequestPrivate
 * \brief The DescribeConnectorRequestPrivate class provides private implementation for DescribeConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a DescribeConnectorRequestPrivate object for Appflow \a action,
 * with public implementation \a q.
 */
DescribeConnectorRequestPrivate::DescribeConnectorRequestPrivate(
    const AppflowRequest::Action action, DescribeConnectorRequest * const q)
    : AppflowRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectorRequest
 * class' copy constructor.
 */
DescribeConnectorRequestPrivate::DescribeConnectorRequestPrivate(
    const DescribeConnectorRequestPrivate &other, DescribeConnectorRequest * const q)
    : AppflowRequestPrivate(other, q)
{

}

} // namespace Appflow
} // namespace QtAws
