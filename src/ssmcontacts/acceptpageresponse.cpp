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
