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
    return static_cast<const StopMultiplexRequest *>(MediaLiveResponse::request());
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
