// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatetrackerconsumerresponse.h"
#include "associatetrackerconsumerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::AssociateTrackerConsumerResponse
 * \brief The AssociateTrackerConsumerResponse class provides an interace for Location AssociateTrackerConsumer responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::associateTrackerConsumer
 */

/*!
 * Constructs a AssociateTrackerConsumerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateTrackerConsumerResponse::AssociateTrackerConsumerResponse(
        const AssociateTrackerConsumerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new AssociateTrackerConsumerResponsePrivate(this), parent)
{
    setRequest(new AssociateTrackerConsumerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateTrackerConsumerRequest * AssociateTrackerConsumerResponse::request() const
{
    Q_D(const AssociateTrackerConsumerResponse);
    return static_cast<const AssociateTrackerConsumerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location AssociateTrackerConsumer \a response.
 */
void AssociateTrackerConsumerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateTrackerConsumerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::AssociateTrackerConsumerResponsePrivate
 * \brief The AssociateTrackerConsumerResponsePrivate class provides private implementation for AssociateTrackerConsumerResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a AssociateTrackerConsumerResponsePrivate object with public implementation \a q.
 */
AssociateTrackerConsumerResponsePrivate::AssociateTrackerConsumerResponsePrivate(
    AssociateTrackerConsumerResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location AssociateTrackerConsumer response element from \a xml.
 */
void AssociateTrackerConsumerResponsePrivate::parseAssociateTrackerConsumerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTrackerConsumerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
