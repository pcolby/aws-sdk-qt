// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DeleteJourneyResponse);
    return static_cast<const DeleteJourneyRequest *>(d->request);
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
