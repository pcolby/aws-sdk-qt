// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevoicechannelresponse.h"
#include "updatevoicechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateVoiceChannelResponse
 * \brief The UpdateVoiceChannelResponse class provides an interace for Pinpoint UpdateVoiceChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateVoiceChannel
 */

/*!
 * Constructs a UpdateVoiceChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVoiceChannelResponse::UpdateVoiceChannelResponse(
        const UpdateVoiceChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateVoiceChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateVoiceChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVoiceChannelRequest * UpdateVoiceChannelResponse::request() const
{
    Q_D(const UpdateVoiceChannelResponse);
    return static_cast<const UpdateVoiceChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateVoiceChannel \a response.
 */
void UpdateVoiceChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVoiceChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateVoiceChannelResponsePrivate
 * \brief The UpdateVoiceChannelResponsePrivate class provides private implementation for UpdateVoiceChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateVoiceChannelResponsePrivate object with public implementation \a q.
 */
UpdateVoiceChannelResponsePrivate::UpdateVoiceChannelResponsePrivate(
    UpdateVoiceChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateVoiceChannel response element from \a xml.
 */
void UpdateVoiceChannelResponsePrivate::parseUpdateVoiceChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVoiceChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
