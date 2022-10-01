// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowresponse.h"
#include "getworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetWorkflowResponse
 * \brief The GetWorkflowResponse class provides an interace for CustomerProfiles GetWorkflow responses.
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
 * \sa CustomerProfilesClient::getWorkflow
 */

/*!
 * Constructs a GetWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowResponse::GetWorkflowResponse(
        const GetWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetWorkflowResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowRequest * GetWorkflowResponse::request() const
{
    Q_D(const GetWorkflowResponse);
    return static_cast<const GetWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetWorkflow \a response.
 */
void GetWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetWorkflowResponsePrivate
 * \brief The GetWorkflowResponsePrivate class provides private implementation for GetWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetWorkflowResponsePrivate object with public implementation \a q.
 */
GetWorkflowResponsePrivate::GetWorkflowResponsePrivate(
    GetWorkflowResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetWorkflow response element from \a xml.
 */
void GetWorkflowResponsePrivate::parseGetWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
