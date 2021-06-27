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

#include "deletejourneyresponse.h"
#include "deletejourneyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteJourneyResponse
 * \brief The DeleteJourneyResponse class provides an interace for Pinpoint DeleteJourney responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteJourney
 */

/*!
 * Constructs a DeleteJourneyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJourneyResponse::DeleteJourneyResponse(
        const DeleteJourneyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteJourneyResponsePrivate(this), parent)
{
    setRequest(new DeleteJourneyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJourneyRequest * DeleteJourneyResponse::request() const
{
    return static_cast<const DeleteJourneyRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteJourney \a response.
 */
void DeleteJourneyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJourneyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteJourneyResponsePrivate
 * \brief The DeleteJourneyResponsePrivate class provides private implementation for DeleteJourneyResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteJourneyResponsePrivate object with public implementation \a q.
 */
DeleteJourneyResponsePrivate::DeleteJourneyResponsePrivate(
    DeleteJourneyResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteJourney response element from \a xml.
 */
void DeleteJourneyResponsePrivate::parseDeleteJourneyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJourneyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
