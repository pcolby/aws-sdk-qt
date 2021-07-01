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

#include "describemultiplexprogramresponse.h"
#include "describemultiplexprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeMultiplexProgramResponse
 * \brief The DescribeMultiplexProgramResponse class provides an interace for MediaLive DescribeMultiplexProgram responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeMultiplexProgram
 */

/*!
 * Constructs a DescribeMultiplexProgramResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMultiplexProgramResponse::DescribeMultiplexProgramResponse(
        const DescribeMultiplexProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeMultiplexProgramResponsePrivate(this), parent)
{
    setRequest(new DescribeMultiplexProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMultiplexProgramRequest * DescribeMultiplexProgramResponse::request() const
{
    Q_D(const DescribeMultiplexProgramResponse);
    return static_cast<const DescribeMultiplexProgramRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeMultiplexProgram \a response.
 */
void DescribeMultiplexProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMultiplexProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeMultiplexProgramResponsePrivate
 * \brief The DescribeMultiplexProgramResponsePrivate class provides private implementation for DescribeMultiplexProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeMultiplexProgramResponsePrivate object with public implementation \a q.
 */
DescribeMultiplexProgramResponsePrivate::DescribeMultiplexProgramResponsePrivate(
    DescribeMultiplexProgramResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeMultiplexProgram response element from \a xml.
 */
void DescribeMultiplexProgramResponsePrivate::parseDescribeMultiplexProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMultiplexProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
