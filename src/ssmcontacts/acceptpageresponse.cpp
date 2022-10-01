// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptpageresponse.h"
#include "acceptpageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::AcceptPageResponse
 * \brief The AcceptPageResponse class provides an interace for SsmContacts AcceptPage responses.
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
 * \sa SsmContactsClient::acceptPage
 */

/*!
 * Constructs a AcceptPageResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptPageResponse::AcceptPageResponse(
        const AcceptPageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new AcceptPageResponsePrivate(this), parent)
{
    setRequest(new AcceptPageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptPageRequest * AcceptPageResponse::request() const
{
    Q_D(const AcceptPageResponse);
    return static_cast<const AcceptPageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts AcceptPage \a response.
 */
void AcceptPageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptPageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::AcceptPageResponsePrivate
 * \brief The AcceptPageResponsePrivate class provides private implementation for AcceptPageResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a AcceptPageResponsePrivate object with public implementation \a q.
 */
AcceptPageResponsePrivate::AcceptPageResponsePrivate(
    AcceptPageResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts AcceptPage response element from \a xml.
 */
void AcceptPageResponsePrivate::parseAcceptPageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptPageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
