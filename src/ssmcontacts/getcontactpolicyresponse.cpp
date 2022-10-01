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
