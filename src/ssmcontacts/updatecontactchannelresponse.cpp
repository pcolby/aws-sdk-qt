// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontactchannelresponse.h"
#include "updatecontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::UpdateContactChannelResponse
 * \brief The UpdateContactChannelResponse class provides an interace for SsmContacts UpdateContactChannel responses.
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
 * \sa SsmContactsClient::updateContactChannel
 */

/*!
 * Constructs a UpdateContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContactChannelResponse::UpdateContactChannelResponse(
        const UpdateContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new UpdateContactChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContactChannelRequest * UpdateContactChannelResponse::request() const
{
    Q_D(const UpdateContactChannelResponse);
    return static_cast<const UpdateContactChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts UpdateContactChannel \a response.
 */
void UpdateContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::UpdateContactChannelResponsePrivate
 * \brief The UpdateContactChannelResponsePrivate class provides private implementation for UpdateContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a UpdateContactChannelResponsePrivate object with public implementation \a q.
 */
UpdateContactChannelResponsePrivate::UpdateContactChannelResponsePrivate(
    UpdateContactChannelResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts UpdateContactChannel response element from \a xml.
 */
void UpdateContactChannelResponsePrivate::parseUpdateContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
