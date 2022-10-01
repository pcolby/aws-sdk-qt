// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelresponse.h"
#include "updatechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateChannelResponse
 * \brief The UpdateChannelResponse class provides an interace for MediaLive UpdateChannel responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateChannel
 */

/*!
 * Constructs a UpdateChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelResponse::UpdateChannelResponse(
        const UpdateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelRequest * UpdateChannelResponse::request() const
{
    Q_D(const UpdateChannelResponse);
    return static_cast<const UpdateChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateChannel \a response.
 */
void UpdateChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateChannelResponsePrivate
 * \brief The UpdateChannelResponsePrivate class provides private implementation for UpdateChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateChannelResponsePrivate object with public implementation \a q.
 */
UpdateChannelResponsePrivate::UpdateChannelResponsePrivate(
    UpdateChannelResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateChannel response element from \a xml.
 */
void UpdateChannelResponsePrivate::parseUpdateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
