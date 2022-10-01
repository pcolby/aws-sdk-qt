// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listflowsresponse.h"
#include "listflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::ListFlowsResponse
 * \brief The ListFlowsResponse class provides an interace for Appflow ListFlows responses.
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
 * \sa AppflowClient::listFlows
 */

/*!
 * Constructs a ListFlowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFlowsResponse::ListFlowsResponse(
        const ListFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppflowResponse(new ListFlowsResponsePrivate(this), parent)
{
    setRequest(new ListFlowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFlowsRequest * ListFlowsResponse::request() const
{
    Q_D(const ListFlowsResponse);
    return static_cast<const ListFlowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Appflow ListFlows \a response.
 */
void ListFlowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Appflow::ListFlowsResponsePrivate
 * \brief The ListFlowsResponsePrivate class provides private implementation for ListFlowsResponse.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a ListFlowsResponsePrivate object with public implementation \a q.
 */
ListFlowsResponsePrivate::ListFlowsResponsePrivate(
    ListFlowsResponse * const q) : AppflowResponsePrivate(q)
{

}

/*!
 * Parses a Appflow ListFlows response element from \a xml.
 */
void ListFlowsResponsePrivate::parseListFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFlowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Appflow
} // namespace QtAws
