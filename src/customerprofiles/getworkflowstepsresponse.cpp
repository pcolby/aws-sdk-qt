// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowstepsresponse.h"
#include "getworkflowstepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetWorkflowStepsResponse
 * \brief The GetWorkflowStepsResponse class provides an interace for CustomerProfiles GetWorkflowSteps responses.
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
 * \sa CustomerProfilesClient::getWorkflowSteps
 */

/*!
 * Constructs a GetWorkflowStepsResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowStepsResponse::GetWorkflowStepsResponse(
        const GetWorkflowStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetWorkflowStepsResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowStepsRequest * GetWorkflowStepsResponse::request() const
{
    Q_D(const GetWorkflowStepsResponse);
    return static_cast<const GetWorkflowStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetWorkflowSteps \a response.
 */
void GetWorkflowStepsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetWorkflowStepsResponsePrivate
 * \brief The GetWorkflowStepsResponsePrivate class provides private implementation for GetWorkflowStepsResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetWorkflowStepsResponsePrivate object with public implementation \a q.
 */
GetWorkflowStepsResponsePrivate::GetWorkflowStepsResponsePrivate(
    GetWorkflowStepsResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetWorkflowSteps response element from \a xml.
 */
void GetWorkflowStepsResponsePrivate::parseGetWorkflowStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowStepsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
