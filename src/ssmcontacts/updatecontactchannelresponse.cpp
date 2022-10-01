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
