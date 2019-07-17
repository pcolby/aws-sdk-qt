/*
    Copyright 2013-2019 Paul Colby

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

#include "stopchannelresponse.h"
#include "stopchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StopChannelResponse
 * \brief The StopChannelResponse class provides an interace for MediaLive StopChannel responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::stopChannel
 */

/*!
 * Constructs a StopChannelResponse object for \a reply to \a request, with parent \a parent.
 */
StopChannelResponse::StopChannelResponse(
        const StopChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StopChannelResponsePrivate(this), parent)
{
    setRequest(new StopChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopChannelRequest * StopChannelResponse::request() const
{
    Q_D(const StopChannelResponse);
    return static_cast<const StopChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive StopChannel \a response.
 */
void StopChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::StopChannelResponsePrivate
 * \brief The StopChannelResponsePrivate class provides private implementation for StopChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StopChannelResponsePrivate object with public implementation \a q.
 */
StopChannelResponsePrivate::StopChannelResponsePrivate(
    StopChannelResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive StopChannel response element from \a xml.
 */
void StopChannelResponsePrivate::parseStopChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
