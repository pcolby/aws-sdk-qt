// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapnsvoipsandboxchannelresponse.h"
#include "updateapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelResponse
 * \brief The UpdateApnsVoipSandboxChannelResponse class provides an interace for Pinpoint UpdateApnsVoipSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsVoipSandboxChannel
 */

/*!
 * Constructs a UpdateApnsVoipSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApnsVoipSandboxChannelResponse::UpdateApnsVoipSandboxChannelResponse(
        const UpdateApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApnsVoipSandboxChannelRequest * UpdateApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const UpdateApnsVoipSandboxChannelResponse);
    return static_cast<const UpdateApnsVoipSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApnsVoipSandboxChannel \a response.
 */
void UpdateApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApnsVoipSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelResponsePrivate
 * \brief The UpdateApnsVoipSandboxChannelResponsePrivate class provides private implementation for UpdateApnsVoipSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipSandboxChannelResponsePrivate object with public implementation \a q.
 */
UpdateApnsVoipSandboxChannelResponsePrivate::UpdateApnsVoipSandboxChannelResponsePrivate(
    UpdateApnsVoipSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApnsVoipSandboxChannel response element from \a xml.
 */
void UpdateApnsVoipSandboxChannelResponsePrivate::parseUpdateApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsVoipSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
