// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapnsvoipchannelresponse.h"
#include "getapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelResponse
 * \brief The GetApnsVoipChannelResponse class provides an interace for Pinpoint GetApnsVoipChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsVoipChannel
 */

/*!
 * Constructs a GetApnsVoipChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsVoipChannelResponse::GetApnsVoipChannelResponse(
        const GetApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsVoipChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsVoipChannelRequest * GetApnsVoipChannelResponse::request() const
{
    Q_D(const GetApnsVoipChannelResponse);
    return static_cast<const GetApnsVoipChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsVoipChannel \a response.
 */
void GetApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelResponsePrivate
 * \brief The GetApnsVoipChannelResponsePrivate class provides private implementation for GetApnsVoipChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsVoipChannelResponsePrivate object with public implementation \a q.
 */
GetApnsVoipChannelResponsePrivate::GetApnsVoipChannelResponsePrivate(
    GetApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsVoipChannel response element from \a xml.
 */
void GetApnsVoipChannelResponsePrivate::parseGetApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsVoipChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
