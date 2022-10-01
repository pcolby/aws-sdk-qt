// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetrackerresponse.h"
#include "describetrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeTrackerResponse
 * \brief The DescribeTrackerResponse class provides an interace for Location DescribeTracker responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeTracker
 */

/*!
 * Constructs a DescribeTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrackerResponse::DescribeTrackerResponse(
        const DescribeTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DescribeTrackerResponsePrivate(this), parent)
{
    setRequest(new DescribeTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrackerRequest * DescribeTrackerResponse::request() const
{
    Q_D(const DescribeTrackerResponse);
    return static_cast<const DescribeTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DescribeTracker \a response.
 */
void DescribeTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DescribeTrackerResponsePrivate
 * \brief The DescribeTrackerResponsePrivate class provides private implementation for DescribeTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeTrackerResponsePrivate object with public implementation \a q.
 */
DescribeTrackerResponsePrivate::DescribeTrackerResponsePrivate(
    DescribeTrackerResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DescribeTracker response element from \a xml.
 */
void DescribeTrackerResponsePrivate::parseDescribeTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
