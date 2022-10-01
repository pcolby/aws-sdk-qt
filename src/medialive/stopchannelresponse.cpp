// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
