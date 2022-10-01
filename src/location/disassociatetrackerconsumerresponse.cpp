// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetrackerconsumerresponse.h"
#include "disassociatetrackerconsumerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DisassociateTrackerConsumerResponse
 * \brief The DisassociateTrackerConsumerResponse class provides an interace for Location DisassociateTrackerConsumer responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::disassociateTrackerConsumer
 */

/*!
 * Constructs a DisassociateTrackerConsumerResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateTrackerConsumerResponse::DisassociateTrackerConsumerResponse(
        const DisassociateTrackerConsumerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DisassociateTrackerConsumerResponsePrivate(this), parent)
{
    setRequest(new DisassociateTrackerConsumerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateTrackerConsumerRequest * DisassociateTrackerConsumerResponse::request() const
{
    Q_D(const DisassociateTrackerConsumerResponse);
    return static_cast<const DisassociateTrackerConsumerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DisassociateTrackerConsumer \a response.
 */
void DisassociateTrackerConsumerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateTrackerConsumerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DisassociateTrackerConsumerResponsePrivate
 * \brief The DisassociateTrackerConsumerResponsePrivate class provides private implementation for DisassociateTrackerConsumerResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DisassociateTrackerConsumerResponsePrivate object with public implementation \a q.
 */
DisassociateTrackerConsumerResponsePrivate::DisassociateTrackerConsumerResponsePrivate(
    DisassociateTrackerConsumerResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DisassociateTrackerConsumer response element from \a xml.
 */
void DisassociateTrackerConsumerResponsePrivate::parseDisassociateTrackerConsumerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTrackerConsumerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
