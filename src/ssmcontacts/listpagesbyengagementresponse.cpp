// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpagesbyengagementresponse.h"
#include "listpagesbyengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListPagesByEngagementResponse
 * \brief The ListPagesByEngagementResponse class provides an interace for SsmContacts ListPagesByEngagement responses.
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
 * \sa SsmContactsClient::listPagesByEngagement
 */

/*!
 * Constructs a ListPagesByEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
ListPagesByEngagementResponse::ListPagesByEngagementResponse(
        const ListPagesByEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new ListPagesByEngagementResponsePrivate(this), parent)
{
    setRequest(new ListPagesByEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPagesByEngagementRequest * ListPagesByEngagementResponse::request() const
{
    Q_D(const ListPagesByEngagementResponse);
    return static_cast<const ListPagesByEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts ListPagesByEngagement \a response.
 */
void ListPagesByEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPagesByEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::ListPagesByEngagementResponsePrivate
 * \brief The ListPagesByEngagementResponsePrivate class provides private implementation for ListPagesByEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListPagesByEngagementResponsePrivate object with public implementation \a q.
 */
ListPagesByEngagementResponsePrivate::ListPagesByEngagementResponsePrivate(
    ListPagesByEngagementResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts ListPagesByEngagement response element from \a xml.
 */
void ListPagesByEngagementResponsePrivate::parseListPagesByEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPagesByEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
