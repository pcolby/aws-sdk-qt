// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
