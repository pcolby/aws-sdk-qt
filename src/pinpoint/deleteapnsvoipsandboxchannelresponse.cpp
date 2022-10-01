// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnsvoipsandboxchannelresponse.h"
#include "deleteapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelResponse
 * \brief The DeleteApnsVoipSandboxChannelResponse class provides an interace for Pinpoint DeleteApnsVoipSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsVoipSandboxChannel
 */

/*!
 * Constructs a DeleteApnsVoipSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsVoipSandboxChannelResponse::DeleteApnsVoipSandboxChannelResponse(
        const DeleteApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsVoipSandboxChannelRequest * DeleteApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const DeleteApnsVoipSandboxChannelResponse);
    return static_cast<const DeleteApnsVoipSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsVoipSandboxChannel \a response.
 */
void DeleteApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApnsVoipSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelResponsePrivate
 * \brief The DeleteApnsVoipSandboxChannelResponsePrivate class provides private implementation for DeleteApnsVoipSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsVoipSandboxChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsVoipSandboxChannelResponsePrivate::DeleteApnsVoipSandboxChannelResponsePrivate(
    DeleteApnsVoipSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsVoipSandboxChannel response element from \a xml.
 */
void DeleteApnsVoipSandboxChannelResponsePrivate::parseDeleteApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsVoipSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
