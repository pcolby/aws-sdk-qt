// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateJourneyResponse);
    return static_cast<const CreateJourneyRequest *>(d->request);
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
