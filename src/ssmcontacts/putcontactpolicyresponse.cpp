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

#include "putcontactpolicyresponse.h"
#include "putcontactpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::PutContactPolicyResponse
 * \brief The PutContactPolicyResponse class provides an interace for SsmContacts PutContactPolicy responses.
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
 * \sa SsmContactsClient::putContactPolicy
 */

/*!
 * Constructs a PutContactPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutContactPolicyResponse::PutContactPolicyResponse(
        const PutContactPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new PutContactPolicyResponsePrivate(this), parent)
{
    setRequest(new PutContactPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutContactPolicyRequest * PutContactPolicyResponse::request() const
{
    Q_D(const PutContactPolicyResponse);
    return static_cast<const PutContactPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts PutContactPolicy \a response.
 */
void PutContactPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutContactPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::PutContactPolicyResponsePrivate
 * \brief The PutContactPolicyResponsePrivate class provides private implementation for PutContactPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a PutContactPolicyResponsePrivate object with public implementation \a q.
 */
PutContactPolicyResponsePrivate::PutContactPolicyResponsePrivate(
    PutContactPolicyResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts PutContactPolicy response element from \a xml.
 */
void PutContactPolicyResponsePrivate::parsePutContactPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutContactPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
