// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontactresponse.h"
#include "updatecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::UpdateContactResponse
 * \brief The UpdateContactResponse class provides an interace for SsmContacts UpdateContact responses.
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
 * \sa SsmContactsClient::updateContact
 */

/*!
 * Constructs a UpdateContactResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContactResponse::UpdateContactResponse(
        const UpdateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new UpdateContactResponsePrivate(this), parent)
{
    setRequest(new UpdateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContactRequest * UpdateContactResponse::request() const
{
    Q_D(const UpdateContactResponse);
    return static_cast<const UpdateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts UpdateContact \a response.
 */
void UpdateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::UpdateContactResponsePrivate
 * \brief The UpdateContactResponsePrivate class provides private implementation for UpdateContactResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a UpdateContactResponsePrivate object with public implementation \a q.
 */
UpdateContactResponsePrivate::UpdateContactResponsePrivate(
    UpdateContactResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts UpdateContact response element from \a xml.
 */
void UpdateContactResponsePrivate::parseUpdateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
