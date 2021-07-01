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

#include "stopengagementresponse.h"
#include "stopengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::StopEngagementResponse
 * \brief The StopEngagementResponse class provides an interace for SSMContacts StopEngagement responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::stopEngagement
 */

/*!
 * Constructs a StopEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
StopEngagementResponse::StopEngagementResponse(
        const StopEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new StopEngagementResponsePrivate(this), parent)
{
    setRequest(new StopEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEngagementRequest * StopEngagementResponse::request() const
{
    Q_D(const StopEngagementResponse);
    return static_cast<const StopEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts StopEngagement \a response.
 */
void StopEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::StopEngagementResponsePrivate
 * \brief The StopEngagementResponsePrivate class provides private implementation for StopEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a StopEngagementResponsePrivate object with public implementation \a q.
 */
StopEngagementResponsePrivate::StopEngagementResponsePrivate(
    StopEngagementResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts StopEngagement response element from \a xml.
 */
void StopEngagementResponsePrivate::parseStopEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
