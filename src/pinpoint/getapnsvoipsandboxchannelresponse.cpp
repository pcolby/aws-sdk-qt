// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapnsvoipsandboxchannelresponse.h"
#include "getapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelResponse
 * \brief The GetApnsVoipSandboxChannelResponse class provides an interace for Pinpoint GetApnsVoipSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsVoipSandboxChannel
 */

/*!
 * Constructs a GetApnsVoipSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsVoipSandboxChannelResponse::GetApnsVoipSandboxChannelResponse(
        const GetApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsVoipSandboxChannelRequest * GetApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const GetApnsVoipSandboxChannelResponse);
    return static_cast<const GetApnsVoipSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsVoipSandboxChannel \a response.
 */
void GetApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApnsVoipSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelResponsePrivate
 * \brief The GetApnsVoipSandboxChannelResponsePrivate class provides private implementation for GetApnsVoipSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsVoipSandboxChannelResponsePrivate object with public implementation \a q.
 */
GetApnsVoipSandboxChannelResponsePrivate::GetApnsVoipSandboxChannelResponsePrivate(
    GetApnsVoipSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsVoipSandboxChannel response element from \a xml.
 */
void GetApnsVoipSandboxChannelResponsePrivate::parseGetApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsVoipSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
