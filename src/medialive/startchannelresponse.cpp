/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startchannelresponse.h"
#include "startchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartChannelResponse
 * \brief The StartChannelResponse class provides an interace for MediaLive StartChannel responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startChannel
 */

/*!
 * Constructs a StartChannelResponse object for \a reply to \a request, with parent \a parent.
 */
StartChannelResponse::StartChannelResponse(
        const StartChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StartChannelResponsePrivate(this), parent)
{
    setRequest(new StartChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartChannelRequest * StartChannelResponse::request() const
{
    Q_D(const StartChannelResponse);
    return static_cast<const StartChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive StartChannel \a response.
 */
void StartChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::StartChannelResponsePrivate
 * \brief The StartChannelResponsePrivate class provides private implementation for StartChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartChannelResponsePrivate object with public implementation \a q.
 */
StartChannelResponsePrivate::StartChannelResponsePrivate(
    StartChannelResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive StartChannel response element from \a xml.
 */
void StartChannelResponsePrivate::parseStartChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartChannelResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
