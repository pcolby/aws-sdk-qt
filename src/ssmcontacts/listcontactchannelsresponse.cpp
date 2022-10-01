// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactchannelsresponse.h"
#include "listcontactchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListContactChannelsResponse
 * \brief The ListContactChannelsResponse class provides an interace for SsmContacts ListContactChannels responses.
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
 * \sa SsmContactsClient::listContactChannels
 */

/*!
 * Constructs a ListContactChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContactChannelsResponse::ListContactChannelsResponse(
        const ListContactChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new ListContactChannelsResponsePrivate(this), parent)
{
    setRequest(new ListContactChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContactChannelsRequest * ListContactChannelsResponse::request() const
{
    Q_D(const ListContactChannelsResponse);
    return static_cast<const ListContactChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts ListContactChannels \a response.
 */
void ListContactChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContactChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::ListContactChannelsResponsePrivate
 * \brief The ListContactChannelsResponsePrivate class provides private implementation for ListContactChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListContactChannelsResponsePrivate object with public implementation \a q.
 */
ListContactChannelsResponsePrivate::ListContactChannelsResponsePrivate(
    ListContactChannelsResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts ListContactChannels response element from \a xml.
 */
void ListContactChannelsResponsePrivate::parseListContactChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContactChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
