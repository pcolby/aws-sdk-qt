// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejourneystateresponse.h"
#include "updatejourneystateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateJourneyStateResponse
 * \brief The UpdateJourneyStateResponse class provides an interace for Pinpoint UpdateJourneyState responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateJourneyState
 */

/*!
 * Constructs a UpdateJourneyStateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJourneyStateResponse::UpdateJourneyStateResponse(
        const UpdateJourneyStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateJourneyStateResponsePrivate(this), parent)
{
    setRequest(new UpdateJourneyStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJourneyStateRequest * UpdateJourneyStateResponse::request() const
{
    Q_D(const UpdateJourneyStateResponse);
    return static_cast<const UpdateJourneyStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateJourneyState \a response.
 */
void UpdateJourneyStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJourneyStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateJourneyStateResponsePrivate
 * \brief The UpdateJourneyStateResponsePrivate class provides private implementation for UpdateJourneyStateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateJourneyStateResponsePrivate object with public implementation \a q.
 */
UpdateJourneyStateResponsePrivate::UpdateJourneyStateResponsePrivate(
    UpdateJourneyStateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateJourneyState response element from \a xml.
 */
void UpdateJourneyStateResponsePrivate::parseUpdateJourneyStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJourneyStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
