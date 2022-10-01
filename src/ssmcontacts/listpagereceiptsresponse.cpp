// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpagereceiptsresponse.h"
#include "listpagereceiptsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListPageReceiptsResponse
 * \brief The ListPageReceiptsResponse class provides an interace for SsmContacts ListPageReceipts responses.
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
 * \sa SsmContactsClient::listPageReceipts
 */

/*!
 * Constructs a ListPageReceiptsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPageReceiptsResponse::ListPageReceiptsResponse(
        const ListPageReceiptsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new ListPageReceiptsResponsePrivate(this), parent)
{
    setRequest(new ListPageReceiptsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPageReceiptsRequest * ListPageReceiptsResponse::request() const
{
    Q_D(const ListPageReceiptsResponse);
    return static_cast<const ListPageReceiptsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts ListPageReceipts \a response.
 */
void ListPageReceiptsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPageReceiptsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::ListPageReceiptsResponsePrivate
 * \brief The ListPageReceiptsResponsePrivate class provides private implementation for ListPageReceiptsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListPageReceiptsResponsePrivate object with public implementation \a q.
 */
ListPageReceiptsResponsePrivate::ListPageReceiptsResponsePrivate(
    ListPageReceiptsResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts ListPageReceipts response element from \a xml.
 */
void ListPageReceiptsResponsePrivate::parseListPageReceiptsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPageReceiptsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
