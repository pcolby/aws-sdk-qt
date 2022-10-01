// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactsresponse.h"
#include "listcontactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListContactsResponse
 * \brief The ListContactsResponse class provides an interace for SsmContacts ListContacts responses.
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
 * \sa SsmContactsClient::listContacts
 */

/*!
 * Constructs a ListContactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContactsResponse::ListContactsResponse(
        const ListContactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new ListContactsResponsePrivate(this), parent)
{
    setRequest(new ListContactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContactsRequest * ListContactsResponse::request() const
{
    Q_D(const ListContactsResponse);
    return static_cast<const ListContactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts ListContacts \a response.
 */
void ListContactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::ListContactsResponsePrivate
 * \brief The ListContactsResponsePrivate class provides private implementation for ListContactsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListContactsResponsePrivate object with public implementation \a q.
 */
ListContactsResponsePrivate::ListContactsResponsePrivate(
    ListContactsResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts ListContacts response element from \a xml.
 */
void ListContactsResponsePrivate::parseListContactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
