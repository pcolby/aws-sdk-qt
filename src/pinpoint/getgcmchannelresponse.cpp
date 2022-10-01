// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgcmchannelresponse.h"
#include "getgcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetGcmChannelResponse
 * \brief The GetGcmChannelResponse class provides an interace for Pinpoint GetGcmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getGcmChannel
 */

/*!
 * Constructs a GetGcmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetGcmChannelResponse::GetGcmChannelResponse(
        const GetGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetGcmChannelResponsePrivate(this), parent)
{
    setRequest(new GetGcmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGcmChannelRequest * GetGcmChannelResponse::request() const
{
    Q_D(const GetGcmChannelResponse);
    return static_cast<const GetGcmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetGcmChannel \a response.
 */
void GetGcmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGcmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetGcmChannelResponsePrivate
 * \brief The GetGcmChannelResponsePrivate class provides private implementation for GetGcmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetGcmChannelResponsePrivate object with public implementation \a q.
 */
GetGcmChannelResponsePrivate::GetGcmChannelResponsePrivate(
    GetGcmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetGcmChannel response element from \a xml.
 */
void GetGcmChannelResponsePrivate::parseGetGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGcmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
