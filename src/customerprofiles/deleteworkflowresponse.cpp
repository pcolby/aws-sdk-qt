// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkflowresponse.h"
#include "deleteworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteWorkflowResponse
 * \brief The DeleteWorkflowResponse class provides an interace for CustomerProfiles DeleteWorkflow responses.
 *
 * \inmodule QtAwsCustomerProfiles
 *
 *  <fullname>Amazon Connect Customer Profiles</fullname>
 * 
 *  Welcome to the Amazon Connect Customer Profiles API Reference. This guide provides information about the Amazon Connect
 *  Customer Profiles API, including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Connect Customer Profiles is a unified customer profile for your contact center that has pre-built connectors
 *  powered by AppFlow that make it easy to combine customer information from third party applications, such as Salesforce
 *  (CRM), ServiceNow (ITSM), and your enterprise resource planning (ERP), with contact history from your Amazon Connect
 *  contact
 * 
 *  center>
 * 
 *  If you're new to Amazon Connect , you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon Connect Administrator
 *
 * \sa CustomerProfilesClient::deleteWorkflow
 */

/*!
 * Constructs a DeleteWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkflowResponse::DeleteWorkflowResponse(
        const DeleteWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new DeleteWorkflowResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkflowRequest * DeleteWorkflowResponse::request() const
{
    Q_D(const DeleteWorkflowResponse);
    return static_cast<const DeleteWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles DeleteWorkflow \a response.
 */
void DeleteWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::DeleteWorkflowResponsePrivate
 * \brief The DeleteWorkflowResponsePrivate class provides private implementation for DeleteWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteWorkflowResponsePrivate object with public implementation \a q.
 */
DeleteWorkflowResponsePrivate::DeleteWorkflowResponsePrivate(
    DeleteWorkflowResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles DeleteWorkflow response element from \a xml.
 */
void DeleteWorkflowResponsePrivate::parseDeleteWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
