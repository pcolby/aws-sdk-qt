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

#include "createjourneyresponse.h"
#include "createjourneyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateJourneyResponse
 * \brief The CreateJourneyResponse class provides an interace for Pinpoint CreateJourney responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createJourney
 */

/*!
 * Constructs a CreateJourneyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateJourneyResponse::CreateJourneyResponse(
        const CreateJourneyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateJourneyResponsePrivate(this), parent)
{
    setRequest(new CreateJourneyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateJourneyRequest * CreateJourneyResponse::request() const
{
    return static_cast<const CreateJourneyRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateJourney \a response.
 */
void CreateJourneyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateJourneyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateJourneyResponsePrivate
 * \brief The CreateJourneyResponsePrivate class provides private implementation for CreateJourneyResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateJourneyResponsePrivate object with public implementation \a q.
 */
CreateJourneyResponsePrivate::CreateJourneyResponsePrivate(
    CreateJourneyResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateJourney response element from \a xml.
 */
void CreateJourneyResponsePrivate::parseCreateJourneyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJourneyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
