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

#include "deactivatecontactchannelresponse.h"
#include "deactivatecontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::DeactivateContactChannelResponse
 * \brief The DeactivateContactChannelResponse class provides an interace for SsmContacts DeactivateContactChannel responses.
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
 * \sa SsmContactsClient::deactivateContactChannel
 */

/*!
 * Constructs a DeactivateContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeactivateContactChannelResponse::DeactivateContactChannelResponse(
        const DeactivateContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new DeactivateContactChannelResponsePrivate(this), parent)
{
    setRequest(new DeactivateContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeactivateContactChannelRequest * DeactivateContactChannelResponse::request() const
{
    Q_D(const DeactivateContactChannelResponse);
    return static_cast<const DeactivateContactChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts DeactivateContactChannel \a response.
 */
void DeactivateContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeactivateContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::DeactivateContactChannelResponsePrivate
 * \brief The DeactivateContactChannelResponsePrivate class provides private implementation for DeactivateContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a DeactivateContactChannelResponsePrivate object with public implementation \a q.
 */
DeactivateContactChannelResponsePrivate::DeactivateContactChannelResponsePrivate(
    DeactivateContactChannelResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts DeactivateContactChannel response element from \a xml.
 */
void DeactivateContactChannelResponsePrivate::parseDeactivateContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
