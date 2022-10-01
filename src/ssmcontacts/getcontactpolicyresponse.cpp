// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactpolicyresponse.h"
#include "getcontactpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::GetContactPolicyResponse
 * \brief The GetContactPolicyResponse class provides an interace for SsmContacts GetContactPolicy responses.
 *
 * \inmodule QtAwsSsmContacts
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmContactsClient::getContactPolicy
 */

/*!
 * Constructs a GetContactPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactPolicyResponse::GetContactPolicyResponse(
        const GetContactPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new GetContactPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContactPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactPolicyRequest * GetContactPolicyResponse::request() const
{
    Q_D(const GetContactPolicyResponse);
    return static_cast<const GetContactPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts GetContactPolicy \a response.
 */
void GetContactPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::GetContactPolicyResponsePrivate
 * \brief The GetContactPolicyResponsePrivate class provides private implementation for GetContactPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a GetContactPolicyResponsePrivate object with public implementation \a q.
 */
GetContactPolicyResponsePrivate::GetContactPolicyResponsePrivate(
    GetContactPolicyResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts GetContactPolicy response element from \a xml.
 */
void GetContactPolicyResponsePrivate::parseGetContactPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
