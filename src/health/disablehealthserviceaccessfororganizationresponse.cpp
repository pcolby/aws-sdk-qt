// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablehealthserviceaccessfororganizationresponse.h"
#include "disablehealthserviceaccessfororganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DisableHealthServiceAccessForOrganizationResponse
 * \brief The DisableHealthServiceAccessForOrganizationResponse class provides an interace for Health DisableHealthServiceAccessForOrganization responses.
 *
 * \inmodule QtAwsHealth
 *
 *  <fullname>Health</fullname>
 * 
 *  The Health API provides programmatic access to the Health information that appears in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">Personal Health Dashboard</a>. You can use the API operations to get
 *  information about events that might affect your Amazon Web Services services and
 * 
 *  resources> <note> <ul> <li>
 * 
 *  You must have a Business, Enterprise On-Ramp, or Enterprise Support plan from <a
 *  href="http://aws.amazon.com/premiumsupport/">Amazon Web Services Support</a> to use the Health API. If you call the
 *  Health API from an Amazon Web Services account that doesn't have a Business, Enterprise On-Ramp, or Enterprise Support
 *  plan, you receive a <code>SubscriptionRequiredException</code>
 * 
 *  error> </li> <li>
 * 
 *  You can use the Health endpoint health.us-east-1.amazonaws.com (HTTPS) to call the Health API operations. Health
 *  supports a multi-Region application architecture and has two regional endpoints in an active-passive configuration. You
 *  can use the high availability endpoint example to determine which Amazon Web Services Region is active, so that you can
 *  get the latest information from the API. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/health-api.html">Accessing the Health API</a> in the <i>Health User
 * 
 *  Guide</i>> </li> </ul> </note>
 * 
 *  For authentication of requests, Health uses the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  If your Amazon Web Services account is part of Organizations, you can use the Health organizational view feature. This
 *  feature provides a centralized view of Health events across all accounts in your organization. You can aggregate Health
 *  events in real time to identify accounts in your organization that are affected by an operational event or get notified
 *  of security vulnerabilities. Use the organizational view API operations to enable this feature and return event
 *  information. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 *  User
 * 
 *  Guide</i>> <note>
 * 
 *  When you use the Health API operations to return Health events, see the following
 * 
 *  recommendations> <ul> <li>
 * 
 *  Use the <a
 *  href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html#AWSHealth-Type-Event-eventScopeCode">eventScopeCode</a>
 *  parameter to specify whether to return Health events that are public or
 * 
 *  account-specific> </li> <li>
 * 
 *  Use pagination to view all events from the response. For example, if you call the
 *  <code>DescribeEventsForOrganization</code> operation to get all events in your organization, you might receive several
 *  page results. Specify the <code>nextToken</code> in the next request to return more
 *
 * \sa HealthClient::disableHealthServiceAccessForOrganization
 */

/*!
 * Constructs a DisableHealthServiceAccessForOrganizationResponse object for \a reply to \a request, with parent \a parent.
 */
DisableHealthServiceAccessForOrganizationResponse::DisableHealthServiceAccessForOrganizationResponse(
        const DisableHealthServiceAccessForOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DisableHealthServiceAccessForOrganizationResponsePrivate(this), parent)
{
    setRequest(new DisableHealthServiceAccessForOrganizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableHealthServiceAccessForOrganizationRequest * DisableHealthServiceAccessForOrganizationResponse::request() const
{
    Q_D(const DisableHealthServiceAccessForOrganizationResponse);
    return static_cast<const DisableHealthServiceAccessForOrganizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Health DisableHealthServiceAccessForOrganization \a response.
 */
void DisableHealthServiceAccessForOrganizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableHealthServiceAccessForOrganizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Health::DisableHealthServiceAccessForOrganizationResponsePrivate
 * \brief The DisableHealthServiceAccessForOrganizationResponsePrivate class provides private implementation for DisableHealthServiceAccessForOrganizationResponse.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a DisableHealthServiceAccessForOrganizationResponsePrivate object with public implementation \a q.
 */
DisableHealthServiceAccessForOrganizationResponsePrivate::DisableHealthServiceAccessForOrganizationResponsePrivate(
    DisableHealthServiceAccessForOrganizationResponse * const q) : HealthResponsePrivate(q)
{

}

/*!
 * Parses a Health DisableHealthServiceAccessForOrganization response element from \a xml.
 */
void DisableHealthServiceAccessForOrganizationResponsePrivate::parseDisableHealthServiceAccessForOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableHealthServiceAccessForOrganizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Health
} // namespace QtAws
