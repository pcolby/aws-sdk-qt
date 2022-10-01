// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactresponse.h"
#include "getcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::GetContactResponse
 * \brief The GetContactResponse class provides an interace for SsmContacts GetContact responses.
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
 * \sa SsmContactsClient::getContact
 */

/*!
 * Constructs a GetContactResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactResponse::GetContactResponse(
        const GetContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new GetContactResponsePrivate(this), parent)
{
    setRequest(new GetContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactRequest * GetContactResponse::request() const
{
    Q_D(const GetContactResponse);
    return static_cast<const GetContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts GetContact \a response.
 */
void GetContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::GetContactResponsePrivate
 * \brief The GetContactResponsePrivate class provides private implementation for GetContactResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a GetContactResponsePrivate object with public implementation \a q.
 */
GetContactResponsePrivate::GetContactResponsePrivate(
    GetContactResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts GetContact response element from \a xml.
 */
void GetContactResponsePrivate::parseGetContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
