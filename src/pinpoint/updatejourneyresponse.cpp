// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejourneyresponse.h"
#include "updatejourneyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateJourneyResponse
 * \brief The UpdateJourneyResponse class provides an interace for Pinpoint UpdateJourney responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateJourney
 */

/*!
 * Constructs a UpdateJourneyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJourneyResponse::UpdateJourneyResponse(
        const UpdateJourneyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateJourneyResponsePrivate(this), parent)
{
    setRequest(new UpdateJourneyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJourneyRequest * UpdateJourneyResponse::request() const
{
    Q_D(const UpdateJourneyResponse);
    return static_cast<const UpdateJourneyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateJourney \a response.
 */
void UpdateJourneyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJourneyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateJourneyResponsePrivate
 * \brief The UpdateJourneyResponsePrivate class provides private implementation for UpdateJourneyResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateJourneyResponsePrivate object with public implementation \a q.
 */
UpdateJourneyResponsePrivate::UpdateJourneyResponsePrivate(
    UpdateJourneyResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateJourney response element from \a xml.
 */
void UpdateJourneyResponsePrivate::parseUpdateJourneyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJourneyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
