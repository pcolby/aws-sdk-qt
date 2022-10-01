// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvoicechannelresponse.h"
#include "getvoicechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelResponse
 * \brief The GetVoiceChannelResponse class provides an interace for Pinpoint GetVoiceChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getVoiceChannel
 */

/*!
 * Constructs a GetVoiceChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetVoiceChannelResponse::GetVoiceChannelResponse(
        const GetVoiceChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetVoiceChannelResponsePrivate(this), parent)
{
    setRequest(new GetVoiceChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVoiceChannelRequest * GetVoiceChannelResponse::request() const
{
    Q_D(const GetVoiceChannelResponse);
    return static_cast<const GetVoiceChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetVoiceChannel \a response.
 */
void GetVoiceChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVoiceChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelResponsePrivate
 * \brief The GetVoiceChannelResponsePrivate class provides private implementation for GetVoiceChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetVoiceChannelResponsePrivate object with public implementation \a q.
 */
GetVoiceChannelResponsePrivate::GetVoiceChannelResponsePrivate(
    GetVoiceChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetVoiceChannel response element from \a xml.
 */
void GetVoiceChannelResponsePrivate::parseGetVoiceChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVoiceChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
