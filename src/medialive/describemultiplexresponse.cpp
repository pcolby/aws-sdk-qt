// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeMultiplexResponse);
    return static_cast<const DescribeMultiplexRequest *>(d->request);
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
