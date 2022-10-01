// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopmultiplexresponse.h"
#include "stopmultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StopMultiplexResponse
 * \brief The StopMultiplexResponse class provides an interace for MediaLive StopMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::stopMultiplex
 */

/*!
 * Constructs a StopMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
StopMultiplexResponse::StopMultiplexResponse(
        const StopMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StopMultiplexResponsePrivate(this), parent)
{
    setRequest(new StopMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopMultiplexRequest * StopMultiplexResponse::request() const
{
    Q_D(const StopMultiplexResponse);
    return static_cast<const StopMultiplexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive StopMultiplex \a response.
 */
void StopMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::StopMultiplexResponsePrivate
 * \brief The StopMultiplexResponsePrivate class provides private implementation for StopMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StopMultiplexResponsePrivate object with public implementation \a q.
 */
StopMultiplexResponsePrivate::StopMultiplexResponsePrivate(
    StopMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive StopMultiplex response element from \a xml.
 */
void StopMultiplexResponsePrivate::parseStopMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
