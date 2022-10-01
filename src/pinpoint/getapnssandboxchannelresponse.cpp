// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapnssandboxchannelresponse.h"
#include "getapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelResponse
 * \brief The GetApnsSandboxChannelResponse class provides an interace for Pinpoint GetApnsSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsSandboxChannel
 */

/*!
 * Constructs a GetApnsSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsSandboxChannelResponse::GetApnsSandboxChannelResponse(
        const GetApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsSandboxChannelRequest * GetApnsSandboxChannelResponse::request() const
{
    Q_D(const GetApnsSandboxChannelResponse);
    return static_cast<const GetApnsSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsSandboxChannel \a response.
 */
void GetApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelResponsePrivate
 * \brief The GetApnsSandboxChannelResponsePrivate class provides private implementation for GetApnsSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsSandboxChannelResponsePrivate object with public implementation \a q.
 */
GetApnsSandboxChannelResponsePrivate::GetApnsSandboxChannelResponsePrivate(
    GetApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsSandboxChannel response element from \a xml.
 */
void GetApnsSandboxChannelResponsePrivate::parseGetApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
