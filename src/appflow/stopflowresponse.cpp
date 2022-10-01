// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopflowresponse.h"
#include "stopflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::StopFlowResponse
 * \brief The StopFlowResponse class provides an interace for Appflow StopFlow responses.
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
 * \sa AppflowClient::stopFlow
 */

/*!
 * Constructs a StopFlowResponse object for \a reply to \a request, with parent \a parent.
 */
StopFlowResponse::StopFlowResponse(
        const StopFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppflowResponse(new StopFlowResponsePrivate(this), parent)
{
    setRequest(new StopFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopFlowRequest * StopFlowResponse::request() const
{
    Q_D(const StopFlowResponse);
    return static_cast<const StopFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Appflow StopFlow \a response.
 */
void StopFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Appflow::StopFlowResponsePrivate
 * \brief The StopFlowResponsePrivate class provides private implementation for StopFlowResponse.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a StopFlowResponsePrivate object with public implementation \a q.
 */
StopFlowResponsePrivate::StopFlowResponsePrivate(
    StopFlowResponse * const q) : AppflowResponsePrivate(q)
{

}

/*!
 * Parses a Appflow StopFlow response element from \a xml.
 */
void StopFlowResponsePrivate::parseStopFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Appflow
} // namespace QtAws
