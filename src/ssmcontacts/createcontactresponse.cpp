// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontactresponse.h"
#include "createcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::CreateContactResponse
 * \brief The CreateContactResponse class provides an interace for SsmContacts CreateContact responses.
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
 * \sa SsmContactsClient::createContact
 */

/*!
 * Constructs a CreateContactResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContactResponse::CreateContactResponse(
        const CreateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new CreateContactResponsePrivate(this), parent)
{
    setRequest(new CreateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContactRequest * CreateContactResponse::request() const
{
    Q_D(const CreateContactResponse);
    return static_cast<const CreateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts CreateContact \a response.
 */
void CreateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::CreateContactResponsePrivate
 * \brief The CreateContactResponsePrivate class provides private implementation for CreateContactResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a CreateContactResponsePrivate object with public implementation \a q.
 */
CreateContactResponsePrivate::CreateContactResponsePrivate(
    CreateContactResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts CreateContact response element from \a xml.
 */
void CreateContactResponsePrivate::parseCreateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
