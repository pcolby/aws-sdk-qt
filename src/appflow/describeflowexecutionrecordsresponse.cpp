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

#include "describeflowexecutionrecordsresponse.h"
#include "describeflowexecutionrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::DescribeFlowExecutionRecordsResponse
 * \brief The DescribeFlowExecutionRecordsResponse class provides an interace for Appflow DescribeFlowExecutionRecords responses.
 *
 * \inmodule QtAwsAppflow
 *
 *  Welcome to the Amazon AppFlow API reference. This guide is for developers who need detailed information about the Amazon
 *  AppFlow API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Amazon AppFlow is a fully managed integration service that enables you to securely transfer data between software as a
 *  service (SaaS) applications like Salesforce, Marketo, Slack, and ServiceNow, and AWS services like Amazon S3 and Amazon
 *  Redshift.
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
 * \sa AppflowClient::describeFlowExecutionRecords
 */

/*!
 * Constructs a DescribeFlowExecutionRecordsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFlowExecutionRecordsResponse::DescribeFlowExecutionRecordsResponse(
        const DescribeFlowExecutionRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppflowResponse(new DescribeFlowExecutionRecordsResponsePrivate(this), parent)
{
    setRequest(new DescribeFlowExecutionRecordsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFlowExecutionRecordsRequest * DescribeFlowExecutionRecordsResponse::request() const
{
    Q_D(const DescribeFlowExecutionRecordsResponse);
    return static_cast<const DescribeFlowExecutionRecordsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Appflow DescribeFlowExecutionRecords \a response.
 */
void DescribeFlowExecutionRecordsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFlowExecutionRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Appflow::DescribeFlowExecutionRecordsResponsePrivate
 * \brief The DescribeFlowExecutionRecordsResponsePrivate class provides private implementation for DescribeFlowExecutionRecordsResponse.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a DescribeFlowExecutionRecordsResponsePrivate object with public implementation \a q.
 */
DescribeFlowExecutionRecordsResponsePrivate::DescribeFlowExecutionRecordsResponsePrivate(
    DescribeFlowExecutionRecordsResponse * const q) : AppflowResponsePrivate(q)
{

}

/*!
 * Parses a Appflow DescribeFlowExecutionRecords response element from \a xml.
 */
void DescribeFlowExecutionRecordsResponsePrivate::parseDescribeFlowExecutionRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFlowExecutionRecordsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Appflow
} // namespace QtAws
