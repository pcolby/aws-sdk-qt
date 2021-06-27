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

#include "describemultiplexresponse.h"
#include "describemultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeMultiplexResponse
 * \brief The DescribeMultiplexResponse class provides an interace for MediaLive DescribeMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeMultiplex
 */

/*!
 * Constructs a DescribeMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMultiplexResponse::DescribeMultiplexResponse(
        const DescribeMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeMultiplexResponsePrivate(this), parent)
{
    setRequest(new DescribeMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMultiplexRequest * DescribeMultiplexResponse::request() const
{
    return static_cast<const DescribeMultiplexRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeMultiplex \a response.
 */
void DescribeMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeMultiplexResponsePrivate
 * \brief The DescribeMultiplexResponsePrivate class provides private implementation for DescribeMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeMultiplexResponsePrivate object with public implementation \a q.
 */
DescribeMultiplexResponsePrivate::DescribeMultiplexResponsePrivate(
    DescribeMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeMultiplex response element from \a xml.
 */
void DescribeMultiplexResponsePrivate::parseDescribeMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
