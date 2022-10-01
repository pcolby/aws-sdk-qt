// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpagesbycontactresponse.h"
#include "listpagesbycontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListPagesByContactResponse
 * \brief The ListPagesByContactResponse class provides an interace for SsmContacts ListPagesByContact responses.
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
 * \sa SsmContactsClient::listPagesByContact
 */

/*!
 * Constructs a ListPagesByContactResponse object for \a reply to \a request, with parent \a parent.
 */
ListPagesByContactResponse::ListPagesByContactResponse(
        const ListPagesByContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new ListPagesByContactResponsePrivate(this), parent)
{
    setRequest(new ListPagesByContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPagesByContactRequest * ListPagesByContactResponse::request() const
{
    Q_D(const ListPagesByContactResponse);
    return static_cast<const ListPagesByContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts ListPagesByContact \a response.
 */
void ListPagesByContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPagesByContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::ListPagesByContactResponsePrivate
 * \brief The ListPagesByContactResponsePrivate class provides private implementation for ListPagesByContactResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListPagesByContactResponsePrivate object with public implementation \a q.
 */
ListPagesByContactResponsePrivate::ListPagesByContactResponsePrivate(
    ListPagesByContactResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts ListPagesByContact response element from \a xml.
 */
void ListPagesByContactResponsePrivate::parseListPagesByContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPagesByContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
