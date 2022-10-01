// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactchannelresponse.h"
#include "getcontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::GetContactChannelResponse
 * \brief The GetContactChannelResponse class provides an interace for SsmContacts GetContactChannel responses.
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
 * \sa SsmContactsClient::getContactChannel
 */

/*!
 * Constructs a GetContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactChannelResponse::GetContactChannelResponse(
        const GetContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new GetContactChannelResponsePrivate(this), parent)
{
    setRequest(new GetContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactChannelRequest * GetContactChannelResponse::request() const
{
    Q_D(const GetContactChannelResponse);
    return static_cast<const GetContactChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts GetContactChannel \a response.
 */
void GetContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::GetContactChannelResponsePrivate
 * \brief The GetContactChannelResponsePrivate class provides private implementation for GetContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a GetContactChannelResponsePrivate object with public implementation \a q.
 */
GetContactChannelResponsePrivate::GetContactChannelResponsePrivate(
    GetContactChannelResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts GetContactChannel response element from \a xml.
 */
void GetContactChannelResponsePrivate::parseGetContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
