// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(StartChannelResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
