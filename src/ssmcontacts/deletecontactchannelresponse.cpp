// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontactchannelresponse.h"
#include "deletecontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::DeleteContactChannelResponse
 * \brief The DeleteContactChannelResponse class provides an interace for SsmContacts DeleteContactChannel responses.
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
 * \sa SsmContactsClient::deleteContactChannel
 */

/*!
 * Constructs a DeleteContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContactChannelResponse::DeleteContactChannelResponse(
        const DeleteContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new DeleteContactChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContactChannelRequest * DeleteContactChannelResponse::request() const
{
    Q_D(const DeleteContactChannelResponse);
    return static_cast<const DeleteContactChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts DeleteContactChannel \a response.
 */
void DeleteContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::DeleteContactChannelResponsePrivate
 * \brief The DeleteContactChannelResponsePrivate class provides private implementation for DeleteContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a DeleteContactChannelResponsePrivate object with public implementation \a q.
 */
DeleteContactChannelResponsePrivate::DeleteContactChannelResponsePrivate(
    DeleteContactChannelResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts DeleteContactChannel response element from \a xml.
 */
void DeleteContactChannelResponsePrivate::parseDeleteContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
