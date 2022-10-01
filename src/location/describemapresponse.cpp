// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemapresponse.h"
#include "describemapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeMapResponse
 * \brief The DescribeMapResponse class provides an interace for Location DescribeMap responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeMap
 */

/*!
 * Constructs a DescribeMapResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMapResponse::DescribeMapResponse(
        const DescribeMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DescribeMapResponsePrivate(this), parent)
{
    setRequest(new DescribeMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMapRequest * DescribeMapResponse::request() const
{
    Q_D(const DescribeMapResponse);
    return static_cast<const DescribeMapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DescribeMap \a response.
 */
void DescribeMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DescribeMapResponsePrivate
 * \brief The DescribeMapResponsePrivate class provides private implementation for DescribeMapResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeMapResponsePrivate object with public implementation \a q.
 */
DescribeMapResponsePrivate::DescribeMapResponsePrivate(
    DescribeMapResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DescribeMap response element from \a xml.
 */
void DescribeMapResponsePrivate::parseDescribeMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
